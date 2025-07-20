from __future__ import annotations
from enum import Enum
from pydantic import BaseModel
from typing import IO, Union, Optional, cast
from lark import Lark, Transformer, v_args
from io import open
from copy import copy, deepcopy

import toml
import json

#type SwitchCase = tuple[PrimitiveValue | ConstantValue, str | AccessRule | OptionSwitchData | FallthroughToCase]

class FallthroughSwitchData(BaseModel):
    switch: str | AccessRule
    fallthrough: bool
    cases: list[FallthroughCase]

class FallthroughCase(BaseModel):
    case: PrimitiveValue | ConstantValue
    value: Optional[str | AccessRule | OptionSwitchData | FallthroughSwitchData] = None
    fallthrough: bool = True

class OptionSwitchData(BaseModel):
    switch: str | AccessRule
    cases: dict[PrimitiveValue | ConstantValue, str | AccessRule | OptionSwitchData | FallthroughSwitchData]

class ArgWithDefault(BaseModel):
    arg: str
    default: PrimitiveValue | ConstantValue

#We can't enforce it, but the option switch should return a T
type OptionOrValue[T] = Union[T, OptionSwitchData]

#The structure after helpers have been resolved into the data. This is exported as JSON
class LogicExport(BaseModel):
    items: list[ItemExportData]
    regions: list[RegionExportData]
    indirects: list[IndirectData]
    events: dict[str]
    logicvals: list[str] #similar to events, currently associated with items, soon to replace events

#Data to be used for AP's register_indirect_condition
class IndirectData(BaseModel):
    region: str
    entrance: str

#The structure after helpers have been parsed
class LogicIntermediate(BaseModel):
    items: dict[str, ItemImportData]
    regions: dict[str, RegionImportData]
    helpers: dict[str, HelperDefinition]

#The structure imported from the toml file
class LogicImport(BaseModel):
    items: dict[str, ItemImportData]
    regions: dict[str, RegionImportData]
    helpers: dict[str, HelperDefinitionImport]
    

class RegionExportData(BaseModel):
    name: str
    id: str
    entrances: list[EntranceExportData]
    locations: list[LocationExportData]
    events: dict[str, AccessRule]
    logicvals: list[str]

class RegionImportData(BaseModel):
    name: str
    #id: str
    entrances: dict[str, EntranceImportData]
    locations: dict[str, LocationImportData]
    events: dict[str, str]
    logicvals: list[str]

class EntranceExportData(BaseModel):
    name: str
    id: str
    access_rule: OptionOrValue[AccessRule]
    connected_to: str

class EntranceImportData(BaseModel):
    name: str
    #id: str
    access_rule: OptionOrValue[str]
    connected_to: str

class LocationExportData(BaseModel):
    name: str
    id: str
    access_rule: OptionOrValue[AccessRule]

class LocationImportData(BaseModel):
    name: str
    #id: str
    access_rule: OptionOrValue[str]

class ItemImportData(BaseModel):
    name: str
    #id: str
    classification: str
    ap_classification: OptionOrValue[str]
    quantity: OptionOrValue[int] = 1
    logicvals: list[str] = []

class ItemExportData(BaseModel):
    name: str
    id: str
    classification: str
    ap_classification: OptionOrValue[str]
    quantity: OptionOrValue[int] = 1
    logicvals: list[str]

#class OptionSwitchCase(BaseModel):
#    value: PrimitiveValue

class OptionValueCheck(BaseModel):
    option: list[str]

class RuleOp(BaseModel):
    op: str
    operands: list[HelperNode]

PrimitiveValue = Union[str, int, float, bool]

class HelperDefinitionImport(BaseModel):
    #name: str
    args: list[str]
    definition: str #To be parsed to intermediate

class HelperArgUsage(BaseModel):
    name: str

class HelperDefinition(BaseModel):
    name: str
    args: list[str] = []
    definition: HelperNode

class HelperInvocation(BaseModel):
    helper: str
    args: dict[str, HelperNode]

class EventGetData(BaseModel):
    id: str

class ConstantValue(BaseModel):
    constant: PrimitiveValue

class LogicValGet(BaseModel):
    logic_val: str

AccessRule = Union[OptionValueCheck, RuleOp, PrimitiveValue, ConstantValue, HelperInvocation, OptionSwitchData, EventGetData]
HelperNode = Union[AccessRule, HelperArgUsage]

#Recursively applies args to a helper to build a node to replace invocations with. Creates a copy.
def invoke_helper(node: HelperNode, args: dict[str, HelperNode]) -> AccessRule:
    if isinstance(node, HelperArgUsage):
        node = cast(HelperArgUsage, node)
        if node.name in args:
            return copy(args[node.name]) #this way it's a copy
        else: #Not for this helper. Not sure if this will happen
            return deepcopy(node)
    elif isinstance(node, RuleOp):
        node = cast(RuleOp, node)
        node_copy = copy(node)
        for i in range(len(node.operands)):
            node_copy.operands[i] = invoke_helper(node.operands[i], args)
        return node_copy
    elif node is OptionSwitchData:
        node = cast(OptionSwitchData, node)
        node.switch = invoke_helper(node.switch)
        for k,v in node.cases:
            node.cases[k] = invoke_helper(v, args)
    else:
        return deepcopy(node) #This way it's a copy. We don't need to know if there are sub-objects

#Intermediate is the same as the import, but with parsed helper trees
def import_to_intermediate(logic: LogicImport) -> LogicIntermediate:
    defs = {}
    for helper_name, helper in logic.helpers.items():
        tree = parse_statement(helper.definition)
        defs[helper_name] = (HelperDefinition(helper.args, tree))
    return LogicIntermediate(logic.items, logic.regions, defs)

def replace_helper_invocations(node: HelperNode | OptionSwitchData, helpers: dict[str, HelperDefinition], events: dict[str, str]) -> HelperNode:
    if isinstance(node, HelperInvocation):
        node = cast(HelperInvocation, node)
        helper = helpers.get(node.helper)
        return invoke_helper(helper, node.args)
    elif isinstance(node, RuleOp):
        node = cast(RuleOp, node)
        for i in range(len(node.operands)):
            node.operands[i] = replace_helper_invocations(node.operands[i])
        return node
    elif isinstance(node, FallthroughSwitchData):
        node = cast(FallthroughSwitchData, node)
        for tup in node.cases:
            k,v = tup
            if isinstance(v, str):
                v = parse_statement(v)
            if isinstance(k, PrimitiveValue):
                node.cases[ConstantValue(constant=k)] = v
                node.cases.pop(k)
            node.cases[k] = replace_helper_invocations(v)
        if isinstance(node.switch, str):
            node.switch = parse_statement(node.switch)
        replace_helper_invocations(node.switch) 
    elif isinstance(node, OptionSwitchData):
        node = cast(OptionSwitchData, node)
        if isinstance(node.switch, str):
            node.switch = parse_statement(node.switch)
        replace_helper_invocations(node.switch)
        for k,v in node.cases.items():
            if isinstance(v, str):
                v = parse_statement(v)
            node.cases[k] = replace_helper_invocations(v)
    else:
        return node
#Finds all the regions which would need to be part of an indirect
def regions_referred_to(node: HelperNode | OptionSwitchData, logic: LogicIntermediate) -> list[str]:
    regions = []
    if isinstance(node, OptionSwitchData):
        node = cast(OptionSwitchData, node)
        for _,v in node.cases:
            regions += regions_referred_to(v)
    elif isinstance(node, RuleOp):
        node = cast(RuleOp)
        if node.op == "can_reach_location" or node.op == "canReachLocation":
            for reg_id, region in logic.regions.items():
                for loc_id, location in region.locations.items():
                    if loc_id == node.operands[0] or location.name == node.operands[0]: #argument
                        regions.append(reg_id)
        elif node.op == "can_reach_entrance" or node.op == 'canReachEntrance':
            for reg_id, region in logic.regions.items():
                for ent_id, entrance in region.entrances.items():
                    if ent_id == node.operands[0] or entrance.name == node.operands[0]: #argument
                        regions.append(reg_id)
        elif node.op == "can_reach_region" or node.op == 'canReachRegion':
            for reg_id, region in logic.regions.items():
                if reg_id == node.operands[0] or region.name == node.operands[0]:
                    regions.append(reg_id)
        else: #some other operation; check the argument
            for child in node.operands:
                regions += regions_referred_to(child, logic)
    return regions

#Builds the list of indirect conditions, and applies helpers to helper invocations
def intermediate_to_export(logic: LogicIntermediate) -> LogicExport:
    #First, apply helper definitions to invocations within the definitions
    new_regions = []
    indirects = []
    logicvals = []
    events = []
    for item in logic.items.values():
        logicvals += item.logicvals
    for i in range(len(logic.helpers)):
        logic.helpers[i] = replace_helper_invocations(logic.helpers[i])
    for reg_id, region in logic.regions.items():
        events += region.events
        new_locations = []
        new_entrances = []
        for loc_id, location in region.locations.items():
            tree = parse_statement(location.access_rule)
            access_rule = replace_helper_invocations(tree, logic.helpers)
            new_locations.append(LocationExportData(location.name, loc_id, access_rule))
        for ent_id, entrance in region.entrances.items():
            #Build indirects where required
            tree = parse_statement(entrance.access_rule)
            access_rule = replace_helper_invocations(tree, logic.helpers)
            new_entrances.append(EntranceExportData(entrance.name, ent_id, access_rule, entrance.connected_to))
            regions_referred = regions_referred_to(access_rule, logic)
            for ref in regions_referred:
                indirects.append(IndirectData(ref, ent_id))
        new_regions.append(RegionExportData(region.name, reg_id, new_entrances, new_locations))
    return LogicExport([ItemExportData(name=item.name, id=id, classification=item.classification, ap_classification=item.ap_classification, \
                                       quantity=item.quantity, logicvals=item.logicvals) for id, item in logic.items.items()], \
                                        regions=new_regions, indirects=indirects, logicvals=logicvals, events=events)


class RuleCodeTransformer(Transformer):
    number = ConstantValue(constant=v_args(inline=True)(float))
    string = ConstantValue(constant=v_args(inline=True)(lambda self, s: str(s[1:-1])))
    false = lambda self, s: ConstantValue(constant=False)
    true = lambda self, s: ConstantValue(constant=True)
    op_or = lambda self, s: RuleOp(op="or", operands=s)
    op_and = lambda self, s: RuleOp(op="and", operands=s)
    op_not = lambda self, s: RuleOp(op="not", operands=s)
    ne = lambda self, s: RuleOp(op="!=", operands=s)
    eq = lambda self, s: RuleOp(op="==", operands=s)
    ge = lambda self, s: RuleOp(op=">=", operands=s)
    le = lambda self, s: RuleOp(op="<=", operands=s)
    less = lambda self, s: RuleOp(op="<", operands=s)
    greater = lambda self, s: RuleOp(op=">", operands=s)
    add = lambda self, s: RuleOp(op="add", operands=s)
    sub = lambda self, s: RuleOp(op="sub", operands=s)
    mul = lambda self, s: RuleOp(op="mul", operands=s)
    div = lambda self, s: RuleOp(op="div", operands=s)
    mod = lambda self, s: RuleOp(op="mod", operands=s)
    args = list
    def arg(self, s):
        if len(s) == 1:
            return str(s[0])
        else:
            default = str(s[1])
            if default == "true":
                default = True
            elif default == "false":
                default = False
            elif default.isdecimal():
                default = float(default)
            return ArgWithDefault(arg=str(s[0]), default=default)
    ident = lambda self, s: s
    option = v_args(inline=True)(lambda self, s: OptionValueCheck(s))
    helper = v_args(inline=True)(lambda self, name, args: HelperInvocation(name, args))
    arg_access = v_args(inline=True)(lambda self, arg: HelperArgUsage(arg))
    location_check = lambda self, s: RuleOp(op="can_reach_location", operands=s)
    region_check = lambda self, s: RuleOp(op="can_reach_region", operands=s)
    entrance_check = lambda self, s: RuleOp(op="can_reach_entrance", operands=s)
    has_item = lambda self, s: RuleOp(op="has_item", operands=s)
    count_item = lambda self, s: RuleOp(op="count_item", operands=s)
    event = lambda self, s: EventGetData(name=s[0])
    logic_val = lambda self, s: LogicValGet(name=s[0])

rule_grammar = None
with open("grammar.lark", "rt") as fp:
    rule_grammar = fp.read()

rule_parser = Lark(rule_grammar, start="expr_tern")
transformer = RuleCodeTransformer()

def parse_statement(code: str | OptionSwitchData | HelperNode) -> HelperNode | OptionSwitchData:
    if isinstance(code, str):
        tree = rule_parser.parse(code)
        node = transformer.transform(tree)
        print(tree.pretty())
        return node
    elif isinstance(code, OptionSwitchData): #code is a switch
        code = cast(OptionSwitchData, code)
        for k,v in code.cases:
            if isinstance(v, str):
                code.cases[k] = parse_statement(v)
        if isinstance(code.option, str):
            code.option = parse_statement(code.option)
    elif isinstance(code, RuleOp):
        code = cast(RuleOp, code)
        code.operands = {k: parse_statement(v) for k,v in code.operands}
    elif isinstance(code, PrimitiveValue):
        return ConstantValue(constant=code)
    else: #Some fully-parsed object
        return code 

def process_file(inputPath: str, outputPath: str):
    tomlContent = toml.load(inputPath)
    #TODO consider editing the tree structure to optimize use of options
    data = LogicImport.model_validate(tomlContent)
    dataIntermediate = import_to_intermediate(data)
    dataExport = intermediate_to_export(dataIntermediate)
    with open(outputPath, "wt") as fp:
        json.dump(dataExport, fp)
    

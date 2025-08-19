from __future__ import annotations
from dataclasses import dataclass
import dataclasses
from typing import Optional, Union, Tuple, cast, Any, List, Dict
from io import open
from json import loads, dumps


@dataclass
class SwitchExprBlock:
    type = "switch_expr"
    expr: Expr
    cases: List[Case]
    return_case: Optional[bool] = None

@dataclass
class DefaultCase:
    type = "default_case"
    code: Expr

@dataclass
class ValueCase:
    type = "case"
    key: Constant | EnumValue
    code: Optional[Expr] #Without, we fallthrough even if the switch doesn't enable fallthrough

@dataclass
class Operation:
    type = "operation"
    op: str
    operands: List[Any]

@dataclass
class Constant:
    type = "constant"
    value: Any

@dataclass
class EnumValue: #Represents a reference to a particular value in an enum
    type = "enum_value"
    enum: str
    value: str

@dataclass
class Enum:
    type = "enum"
    name: str
    values: List[str]

@dataclass
class HelperInvocation:
    type = "helper_invoke"
    name: str
    args: List[Expr | Tuple[str, Expr]]

@dataclass
class OptionCheck:
    type = "option_get"
    label: str

@dataclass
class IfBlock:
    type = "if_block"
    condition: Expr
    expr: Expr
    continuation: Optional[ElseBlock | ElseIfBlock]

@dataclass
class ElseBlock:
    type = "else_block"
    expr: Expr

@dataclass
class ElseIfBlock:
    type = "elseif_block"
    condition: Expr
    expr: Expr
    continuation: Optional[ElseBlock | ElseIfBlock]

@dataclass
class ArgAccess:
    type = "arg_get"
    name: str

@dataclass
class EventCheck:
    type = "event_get"
    name: str

@dataclass
class LogicValCheck:
    type = "logicval_get"
    name: str

@dataclass
class HelperDefinition:
    type = "helper"
    name: str
    definition: Expr
    arg_names: List[str] = []
    arg_defaults: dict[str, Constant] = {}

@dataclass
class ItemDef:
    type = "item"
    name: str
    id: str
    quantity: Expr
    classification: str
    logicval: Optional[str]

@dataclass
class EntranceDef:
    type = "entrance"
    name: Optional[str]
    id: str
    present_when: Expr
    destId: str
    rule: Expr
    child_can_cross: bool
    adult_can_cross: bool

@dataclass
class LocationDef:
    type = "location"
    name: str
    id: str
    present_when: Expr
    rule: Expr
    classification: str

@dataclass
class EventSet:
    type = "event_set"
    name: str
    rule: Expr

@dataclass
class RegionDef:
    type = "region"
    name: str
    id: str
    present_when: Expr
    locations: List[LocationDef]
    entrances: List[EntranceDef]
    events: List[EventSet]

@dataclass
class LogicDef:
    type = "logic"
    regions: List[RegionDef]
    items: List[ItemDef]
    helpers: List[HelperDefinition]

@dataclass
class OptionsDef:
    type = "options"
    options: List[OptionTypes]

@dataclass
class OptionStringList:
    type = "opt_strings"
    name: str
    options: List[str]

@dataclass
class OptionIntRange:
    type = "opt_intrange"
    name: str
    min: int
    max: int

@dataclass
class OptionFloatRange:
    type = "opt_floatrange"
    name: str
    min: float
    max: float

@dataclass
class OptionIntList:
    type = "opt_intlist"
    name: str
    values: List[int]

@dataclass
class OptionFloatList:
    type = "opt_floatlist"
    name: str
    values: List[float]

@dataclass
class OptionString:
    type = 'opt_string'
    name: str
    val: str

@dataclass
class OptionInt:
    type = 'opt_int'
    name: str
    val: int

@dataclass
class OptionFloat:
    type = 'opt_float'
    name: str
    val: float

@dataclass
class OptionBool:
    type = "opt_bool"
    name: str
    val: bool

@dataclass
class CodeFile:
    type = "file"
    logic: LogicDef
    options: OptionsDef

type OptionTypes = Union[OptionStringList, OptionIntRange, OptionFloatRange, OptionFloatList, OptionIntList, OptionBool]

type Case = Union[DefaultCase, ValueCase]

type Expr = Union[Constant, Operation, IfBlock, HelperInvocation, OptionCheck, LogicValCheck, ArgAccess, EventCheck, SwitchExprBlock]#, SwitchBlock]
expr_types = (Constant, Operation, IfBlock, HelperInvocation, OptionCheck, LogicValCheck, ArgAccess, EventCheck, SwitchExprBlock)

ast_node_types = (SwitchExprBlock, DefaultCase, ValueCase, Operation, Constant, EnumValue, Enum, HelperInvocation, OptionCheck, \
                     IfBlock, ElseBlock, ElseIfBlock, ArgAccess, EventCheck, LogicValCheck, HelperDefinition, ItemDef, EntranceDef, \
                    LocationDef, EventSet, RegionDef, LogicDef, OptionsDef, OptionStringList, OptionIntRange, OptionFloatRange, \
                        OptionIntList, OptionFloatList, OptionBool, CodeFile)
type AST_Nodes = Union[SwitchExprBlock, DefaultCase, ValueCase, Operation, Constant, EnumValue, Enum, HelperInvocation, OptionCheck, \
                     IfBlock, ElseBlock, ElseIfBlock, ArgAccess, EventCheck, LogicValCheck, HelperDefinition, ItemDef, EntranceDef, \
                    LocationDef, EventSet, RegionDef, LogicDef, OptionsDef, OptionStringList, OptionIntRange, OptionFloatRange, \
                        OptionIntList, OptionFloatList, OptionBool, CodeFile]

#Build a dataclass based on a given data dict. Any entries in the dict which are not field names are excluded
def build(struct: type, data: dict):
    field_names = [field.name for field in dataclasses.fields(struct)]
    data = {k:v for k,v in data if k in field_names}
    return struct(**data)

#Parse a produced json file into these structures. May be useful for the APWorld
def parse_json(json: str):
    return loads(json, object_hook=parse_obj)

def parse_obj(data: Dict):
    obj_type = data["type"]
    del data["type"]
    match obj_type:
        case "switch_expr": return build(SwitchExprBlock, **data)
        case "default_case": return build(DefaultCase, **data)
        case "case": return build(ValueCase, **data)
        case "operation": return build(Operation, **data)
        case "constant": return build(Constant, **data)
        case "enum_value": return build(EnumValue, **data)
        case "enum": return build(Enum, **data)
        case "helper_invoke": return build(HelperInvocation, **data)
        case "option_get": return build(OptionCheck, **data)
        case "if_block": return build(IfBlock, **data)
        case "else_block": return build(ElseBlock, **data)
        case "elseif_block": return build(ElseIfBlock, **data)
        case "arg_get": return build(ArgAccess, **data)
        case "event_get": return build(EventCheck, **data)
        case "logicval_get": return build(LogicValCheck, **data)
        case "helper": return build(HelperDefinition, **data)
        case "item": return build(ItemDef, **data)
        case "entrance": return build(EntranceDef, **data)
        case "location": return build(LocationDef, **data)
        case "event_set": return build(EventSet, **data)
        case "region": return build(RegionDef, **data)
        case "logic": return build(LogicDef, **data)
        case "options": return build(OptionsDef, **data)
        case "opt_strings": return build(OptionStringList, **data)
        case "opt_intrange": return build(OptionIntRange, **data)
        case "opt_intlist": return build(OptionIntList, **data)
        case "opt_floatrange": return build(OptionFloatRange, **data)
        case "opt_floatlist": return build(OptionFloatList, **data)
        case "file": return build(CodeFile, **data)

def to_json(obj) -> str:
    return dumps(obj)
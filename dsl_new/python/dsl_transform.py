from typing import List, Dict, Tuple, Callable
from .dsl_structures import *
from lark import v_args, Transformer, Lark

class DSLTransformer(Transformer):
    def helper_def(self, s):
        name = s[0]
        args = s[1]
        arg_names = []
        arg_vals = {}
        for arg in args:
            if isinstance(arg, Tuple):
                arg_names.append(arg[0])
                arg_vals[arg[0]] = arg[1]
            else:
                arg_names.append(arg)
        definition = s[2]
        return HelperDefinition(name=name, definition=definition, arg_names=arg_names, arg_defaults=arg_vals)
    
    enum = v_args(inline=True)(lambda self, name, values: Enum(name=name, values=values))
    enum_vals = list
    if_block = v_args(inline=True)(lambda self, cond, block, contin = None: IfBlock(condition=cond, expr=block, continuation=contin)) 
    else_block = v_args(inline=True)(lambda self, expr: ElseBlock(expr=expr))
    elseif_block = v_args(inline=True)(lambda self, cond, block, contin = None: ElseIfBlock(condition=cond, expr=block, continuation=contin)) 
    #switch = v_args(inline=True)(lambda self, expr, cases: SwitchBlock(expr, cases))
    def switch_expr(self, s):
        expr = s[0]
        del s[0]
        yields = None
        if s[0] is bool:
            yields = s[0]
            del s[0]
        return SwitchExprBlock(expr=expr, return_case=yields, cases=s)
    return_case = lambda self, s: s[0]
    case_block = v_args(inline=True)(lambda self, key, block = None: ValueCase(key=key, code=block))
    default_case = v_args(inline=True)(lambda self, block: DefaultCase(code=block))
    option = v_args(inline=True)(lambda self, s: OptionCheck(label=s))
    helper_invoke = v_args(inline=True)(lambda self, name, args: HelperInvocation(name=name, args=args))
    arg_access = v_args(inline=True)(lambda self, name: ArgAccess(name=name))
    logic_val_access = v_args(inline=True)(lambda self, name: LogicValCheck(name=name))
    event_access = v_args(inline=True)(lambda self, name: EventCheck(name=name))
    is_dungeon_mq = lambda self, s: Operation(op="is_dungeon_mq", operands=s)
    location_check = lambda self, s: Operation(op="can_reach_location", operands=s)
    region_check = lambda self, s: Operation(op="can_reach_region", operands=s)
    entrance_check = lambda self, s: Operation(op="can_reach_entrance", operands=s)
    has_item = lambda self, s: Operation(op="has_item", operands=s)
    count_item = lambda self, s: Operation(op="count_item", operands=s)
    floor_op = lambda self, s: Operation(op="floor", operands=s)
    ceil_op = lambda self, s: Operation(op="ceil", operands=s)
    true = lambda self, s: Constant(True)
    false = lambda self, s: Constant(False)
    number = lambda self, s: Constant(value=s[0])
    string = lambda self, s: Constant(value=s[0])
    enum_value = v_args(inline=True)(lambda self, e, val: EnumValue(enum=e, value=val))
    args = list
    def arg(self, s):
        if len(s) == 2:
            if isinstance(s[1], str):
                return (s[0], Constant(s[1]))
            return (s[0], s[1]) 
        else: 
            if isinstance(s[0], str):
                return Constant(s[0])
            return s[0] #can check by checking if it is a tuple
    op_or = lambda self, s: Operation(op="or", operands=s) 
    op_and = lambda self, s: Operation(op="and", operands=s)
    op_not = lambda self, s: Operation(op="not", operands=s)
    ne = lambda self, s: Operation(op="!=", operands=s)
    eq = lambda self, s: Operation(op="==", operands=s)
    ge = lambda self, s: Operation(op=">=", operands=s)
    le = lambda self, s: Operation(op="<=", operands=s)
    less = lambda self, s: Operation(op="<", operands=s)
    greater = lambda self, s: Operation(op=">", operands=s)
    add = lambda self, s: Operation(op="add", operands=s)
    sub = lambda self, s: Operation(op="sub", operands=s)
    mul = lambda self, s: Operation(op="mul", operands=s)
    div = lambda self, s: Operation(op="div", operands=s)
    mod = lambda self, s: Operation(op="mod", operands=s)
    leftshift = lambda self, s: Operation(op="<<", operands=s)
    rightshift = lambda self, s: Operation(op=">>", operands=s)
    ternary = lambda self, s: Operation(op="ternary", operands=s)

    #dict = dict
    #list = list
    #entry = tuple
    #These will probably need full methods
    present_when = lambda self, s: ("present_when", s[0])
    quantity_def = lambda self, s: ("quantity", s[0])
    def item_def(self, s: List):
        name = None
        id = s[0]
        classif = None
        logicval = None
        quantity = Constant(1)
        del s[0] #already used this part
        for entry in s:
            match entry[0]:
                case "name_def": name = entry[1]
                case "quantity": quantity = entry[1]
                case "classif_def": classif = entry[1]
                case "logicval_set": logicval = entry[1]
        if name is None or id is None or classif is None:
            return None
        return ItemDef(name=name, id=id, quantity=quantity, classification=classif, logicval=logicval)
    def entrance_def(self, s):
        present_when = Constant(True)
        name = None
        id = s[0]
        rule = Constant(True)
        child_can_cross = True
        adult_can_cross = True
        destId = None
        del s[0]
        for entry in s:
            match entry[0]:
                case "name_def": name = entry[1].value
                case "rule_def": rule = entry[1]
                case "child_cant_cross": child_can_cross = False
                case "adult_cant_cross": adult_can_cross = False
                case "dest_def": destId = entry[1]
                case "present_when": present_when = entry[1]
        if name is None or rule is None or destId is None:
            return None
        return EntranceDef(name=name, id=id, present_when=present_when, destId=destId, rule=rule, child_can_cross=child_can_cross, adult_can_cross=adult_can_cross)
    def location_def(self, s):
        present_when = Constant(True)
        name = None
        id = s[0]
        del s[0]
        classification = "default"
        rule = None
        for entry in s:
            match entry[0]:
                case "name_def": name = entry[1]
                case "rule_def": rule = entry[1]
                case "loc_class_def": classification = entry[1]
                case "present_when": present_when = entry[1]
        if name is None or rule is None:
            return None
        return LocationDef(name=name, id=id, present_when=present_when, rule=rule, classification=classification)
    def region_def(self, s):
        present_when = Constant(True)
        name = None
        id = s[0]
        del s[0]
        locations: List[LocationDef] = []
        events = []
        entrances: List[EntranceDef] = []
        #rule = None
        for entry in s:
            if entry is None:
                return None #we want to return None if there's an error
            if isinstance(entry, LocationDef):
                locations.append(entry)
            elif isinstance(entry, EventSet):
                events.append(entry)
            elif isinstance(entry, Tuple) and entry[0] == "name_def":
                name = entry[1]
            elif isinstance(entry, Tuple) and entry[0] == "present_when":
                present_when = entry[1]
        if isinstance(name, str):
            return RegionDef(name=name, id=id, present_when=present_when, locations=locations, events=events, entrances=entrances)
        return None
    def logic_def(self, s):
        regions = []
        items = []
        helpers = []
        for entry in s:
            if isinstance(entry, RegionDef):
                regions.append(entry)
            if isinstance(entry, ItemDef):
                items.append(entry)
            if isinstance(entry, HelperDefinition):
                helpers.append(entry)
        return LogicDef(regions=regions, helpers=helpers, items=items)

    event_def = lambda self, s: EventSet(name=s[0], rule=s[1])
    logicval_set = lambda self, s: ("logicval_set", s[0])
    name_def = lambda self, s: ("name_def", s[0])
    #id_def = lambda self, s: ("id_def", s[0])
    classification = str
    classification_def = lambda self, s: ("classif_def", s)

    rule_def = lambda self, s: ("rule_def", s[0])
    dest_def = lambda self, s: ("dest_def", s[0])
    cant_cross_child = lambda self, s: ("child_cant_cross")
    cant_cross_adult = lambda self, s: ("adult_cant_cross")

    loc_class_def = lambda self, s: ("loc_class_def", s[0])
    
    options_definition = lambda self, s: OptionsDef(s)
    option_def_strings = v_args(inline=True)(lambda self, name, *vals: OptionStringList(name, cast(List[str], vals)))
    option_def_string = v_args(inline=True)(lambda self, name, val: OptionString(name, str(val)))
    option_def_int_range = v_args(inline=True)(lambda self, name, min, max: OptionIntRange(name, min, max))
    option_def_int_list = v_args(inline=True)(lambda self, name, *vals: OptionIntList(name, cast(List[int], vals)))
    option_def_int = v_args(inline=True)(lambda self, name, val: OptionInt(name, int(val)))
    option_def_float_range = v_args(inline=True)(lambda self, name, min, max: OptionFloatRange(name, min, max))
    option_def_float_list = v_args(inline=True)(lambda self, name, *vals: OptionFloatList(name, cast(List[float], vals)))
    option_def_float = v_args(inline=True)(lambda self, name, val: OptionFloat(name, float(val)))
    option_def_bool = v_args(inline=True)(lambda self, name, val: OptionBool(name, val))

    entrance_ref = v_args(inline=True)(lambda self, s: Constant(str(s)))
    location_ref = v_args(inline=True)(lambda self, s: Constant(str(s)))


    def file(self, s):
        logic = None
        options = None
        enums: List[Enum] = []
        for val in s:
            if isinstance(val, LogicDef):
                logic = val
            elif isinstance(val, OptionsDef):
                options = val
            elif isinstance(val, Enum):
                enums.append(cast(Enum, val))
        logic = cast(LogicDef, logic)
        options = cast(OptionsDef, options)
        return CodeFile(logic, options, enums)

rule_grammar = None
with open("dsl grammar.lark", "rt") as fp:
    rule_grammar = fp.read()

rule_parser = Lark(rule_grammar, start="file")
transformer = DSLTransformer()

def process_code(input: str):
    return transformer.transform(rule_parser.parse(input))    

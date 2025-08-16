from dsl_structures import *
from typing import Dict, Iterator, Callable, Optional, List, Type
import dataclasses
import math
#Replaces option checks with their values. Can be used on load to make later evaluations more efficient
def resolve_options(root, optDict: Dict):
    if isinstance(root, OptionCheck):
        return Constant(optDict.get(root.label))
    if isinstance(root, ast_node_types): #All of the nodes are dataclasses
        for field in dataclasses.fields(root):
            setattr(root, field.name, resolve_options(getattr(root, field.name), optDict))
    return root

#Resolves a helper invocation, replacing it with the helper definition with argument values inserted. In the case of recursion, this will infinitely loop. 
#Note that in the case of arguments of the same name, the values from the deepest call are used
def resolve_helper_call(logic: LogicDef, helper_call: HelperInvocation):
    name = helper_call.name
    helper = None
    for h in logic.helpers:
        if h.name == name:
            helper = h
    if helper is not None:
        args = {}
        unused_names = helper.arg_names
        for arg in helper_call.args:
            if isinstance(arg, Tuple):
                args[arg[0]] = arg[1]
                unused_names.remove(arg[0])
        index = 0
        for arg in helper_call.args:
            if isinstance(arg, expr_types):
                args[unused_names[index]] = arg
                index = index + 1
        return _resolve_helper_call(logic, helper, args)

def _resolve_helper_call(logic: LogicDef, node: AST_Nodes, args: Dict[str, AST_Nodes]):
    if isinstance(node, ArgAccess) and node.name in args.keys():
        node = args[node.name]
    if isinstance(node, HelperInvocation):
        return resolve_helper_call(logic, node)
    if isinstance(node, ast_node_types): #All of the nodes are dataclasses
        for field in dataclasses.fields(node):
            setattr(node, field.name, _resolve_helper_call(logic, getattr(node, field.name), args))
    return node

#Implement logic val check, event check

#type Expr = Union[Constant, Operation, IfBlock, HelperInvocation, OptionCheck, LogicValCheck, ArgAccess, EventCheck, SwitchExprBlock]

#Evaluate an expression. Resolve options before calling
def evaluate_expr(expr: Expr, logic: LogicDef) -> Any:
    if isinstance(expr, Constant):
        return expr.value
    if isinstance(expr, Operation):
        arg_results = [evaluate_expr(term, logic) for term in expr.operands]
        match expr.op:
            case "or":
                return any([bool(arg) for arg in arg_results])
            case "and":
                return all([bool(arg) for arg in arg_results])
            case "not":
                return not bool(arg_results[0])
            case "!=":
                return arg_results[0] != arg_results[1]
            case "==":
                return arg_results[0] == arg_results[1]
            case ">=":
                return arg_results[0] >= arg_results[1]
            case "<=":
                return arg_results[0] <= arg_results[1]
            case ">":
                return arg_results[0] > arg_results[1]
            case "<":
                return arg_results[0] < arg_results[1]
            case "add":
                arg_results = [int(arg) if isinstance(arg, bool) else arg for arg in arg_results]
                return sum(arg_results)
            case "sub":
                return arg_results[0] - arg_results[1]
            case "mul":
                arg_results = [int(arg) if isinstance(arg, bool) else arg for arg in arg_results]
                return math.prod(arg_results)
            case "div":
                return arg_results[0] / arg_results[1]
            case "mod":
                return arg_results[0] % arg_results[1]
            case "leftshift":
                return arg_results[0] << arg_results[1]
            case "rightshift":
                return arg_results[0] >> arg_results[1]
            case "ternary":
                if bool(arg_results[0]):
                    return arg_results[1]
                return arg_results[2]
            case "is_dungeon_mq":
                pass
            case "can_reach_location":
                pass
            case "can_reach_region":
                pass 
            case "can_reach_entrance":
                pass
            case "has_item":
                pass
            case "count_item":
                pass
            case "floor":
                return math.floor(arg_results[0])
            case "ceil":
                return math.ceil(arg_results[0])
    if isinstance(expr, IfBlock):
        block = cast(IfBlock, expr)
        if evaluate_expr(block.condition, logic):
            return evaluate_expr(block.expr, logic)
        block = block.continuation
        while isinstance(block, ElseIfBlock):
            if evaluate_expr(block.condition, logic):
                return evaluate_expr(block.expr, logic)
            block = block.continuation
        if isinstance(block, ElseBlock):
            return evaluate_expr(block.expr, logic)
    if isinstance(expr, HelperInvocation):
        resolved = resolve_helper_call(logic, expr)
        if isinstance(resolved, expr_types): #should always be true, if the resolution worked
            return evaluate_expr(resolved, logic)
    #OptionCheck won't exist, it will be removed when processing option checks
    if isinstance(expr, LogicValCheck):
        pass
    #ArgAccess will have been eliminated in processing the helper calls
    if isinstance(expr, EventCheck):
        pass
    if isinstance(expr, SwitchExprBlock):
        return_case = None
        if expr.return_case is not None:
            return_case = expr.return_case
        result = evaluate_expr(expr.expr, logic)
        for c in expr.cases:
            if isinstance(c, ValueCase):
                if result == c.key:
                    if c.code is None:
                        continue
                    case_code = evaluate_expr(c.code, logic)
                    if expr.return_case and bool(case_code):
                        return True
                    if not expr.return_case and not bool(case_code):
                        return False
    print("This point should not be reached. If it is, the logic file is invalid.")
    assert(False)

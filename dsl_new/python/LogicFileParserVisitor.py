# Generated from LogicFileParser.g4 by ANTLR 4.13.2
from antlr4 import *
from dsl_structures import *
if "." in __name__:
    from .LogicFileParser import LogicFileParser
    from .dsl_structures import *
else:
    from LogicFileParser import LogicFileParser
    from dsl_structures import *

# This class defines a complete generic visitor for a parse tree produced by LogicFileParser.

class LogicFileParserVisitor(ParseTreeVisitor):

    # Visit a parse tree produced by LogicFileParser#fileDef.
    def visitFileDef(self, ctx:LogicFileParser.FileDefContext):
        #Can I just visit the relevant children? that'd be easier
        logic = self.visit(ctx.logicDef(0))
        options = self.visit(ctx.optionsDef(0))
        enums = [self.visit(enum) for enum in ctx.enumDef()]
        return CodeFile(logic, options, enums)


    # Visit a parse tree produced by LogicFileParser#enumDef.
    def visitEnumDef(self, ctx:LogicFileParser.EnumDefContext):
        name = ctx.Ident().getText()
        values = self.visit(ctx.enumVals())
        return Enum(name, values)


    # Visit a parse tree produced by LogicFileParser#enumVals.
    def visitEnumVals(self, ctx:LogicFileParser.EnumValsContext):
        return [val.getText() for val in ctx.Ident()]


    # Visit a parse tree produced by LogicFileParser#ifBlock.
    def visitIfBlock(self, ctx:LogicFileParser.IfBlockContext):
        cond = self.visit(ctx.expr(0))
        expr = self.visit(ctx.expr(1))
        contin = self.visit(ctx.ifContinuation())
        return IfBlock(cond, expr, contin)


    # Visit a parse tree produced by LogicFileParser#ifContinuation.
    def visitIfContinuation(self, ctx:LogicFileParser.IfContinuationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by LogicFileParser#elseIfBlock.
    def visitElseIfBlock(self, ctx:LogicFileParser.ElseIfBlockContext):
        cond = self.visit(ctx.expr(0))
        expr = self.visit(ctx.expr(1))
        contin = self.visit(ctx.ifContinuation())
        return ElseIfBlock(cond, expr, contin)


    # Visit a parse tree produced by LogicFileParser#elseBlock.
    def visitElseBlock(self, ctx:LogicFileParser.ElseBlockContext):
        return ElseBlock(self.visit(ctx.expr()))


    # Visit a parse tree produced by LogicFileParser#switchExpr.
    def visitSwitchExpr(self, ctx:LogicFileParser.SwitchExprContext):
        expr = self.visit(ctx.expr())
        cases = [self.visit(ctx.caseList())]
        return_case = self.visitIfSome(ctx.return_case())
        return SwitchExprBlock(expr, cases, return_case)


    # Visit a parse tree produced by LogicFileParser#return_case.
    def visitReturn_case(self, ctx:LogicFileParser.Return_caseContext):
        return bool(ctx.Bool())


    # Visit a parse tree produced by LogicFileParser#caseList.
    def visitCaseList(self, ctx:LogicFileParser.CaseListContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by LogicFileParser#caseDef.
    def visitCaseDef(self, ctx:LogicFileParser.CaseDefContext):
        ident = ctx.Ident()
        key = self.visit(ctx.value()) if ident is None else self.visit(ident)
        code = self.visit(ctx.expr())
        return ValueCase(key, code)


    # Visit a parse tree produced by LogicFileParser#defaultCase.
    def visitDefaultCase(self, ctx:LogicFileParser.DefaultCaseContext):
        return DefaultCase(self.visit(ctx.expr()))


    # Visit a parse tree produced by LogicFileParser#args.
    def visitArgs(self, ctx:LogicFileParser.ArgsContext):
        return [self.visit(arg) for arg in ctx.arg()]


    # Visit a parse tree produced by LogicFileParser#arg.
    def visitArg(self, ctx:LogicFileParser.ArgContext):
        expr = ctx.expr()
        if ctx.ArgAssign() is not None:
            #no name
            if expr is not None:
                return self.visit(expr)
            return ctx.Ident(0).getText()
        else:
            if expr is not None:
                return (ctx.Ident(0).getText(), self.visit(expr))
            return (ctx.Ident(0).getText(), ctx.Ident(1).getText())



    # Visit a parse tree produced by LogicFileParser#helperDef.
    def visitHelperDef(self, ctx:LogicFileParser.HelperDefContext):
        name = self.visit(ctx.Ident())
        args = self.visit(ctx.args())
        defin = self.visit(ctx.expr())
        arg_names = []
        arg_defaults = {}
        for arg in args:
            if isinstance(arg, Tuple):
                arg_defaults[arg[0]] = arg[1]
                arg_names.append(arg[0])
            else:
                arg_names.append(arg)
        return HelperDefinition(name, defin, arg_names, arg_defaults)


    # Visit a parse tree produced by LogicFileParser#quantityDef.
    def visitQuantityDef(self, ctx:LogicFileParser.QuantityDefContext):
        return self.visit(ctx.expr())


    # Visit a parse tree produced by LogicFileParser#logicValSet.
    def visitLogicValSet(self, ctx:LogicFileParser.LogicValSetContext):
        return ctx.Ident().getText()


    # Visit a parse tree produced by LogicFileParser#nameDef.
    def visitNameDef(self, ctx:LogicFileParser.NameDefContext):
        return str(ctx.EscapedString().getText())[1:-1]


    # Visit a parse tree produced by LogicFileParser#classificationDef.
    def visitClassificationDef(self, ctx:LogicFileParser.ClassificationDefContext):
        return ctx.Classification().getText()


    # Visit a parse tree produced by LogicFileParser#itemDef.
    def visitItemDef(self, ctx:LogicFileParser.ItemDefContext):
        id = ctx.Ident().getText()
        name = self.visit(ctx.nameDef(0))
        quantity = self.visit(ctx.quantityDef(0))
        classification = self.visit(ctx.classificationDef(0))
        logicval = self.visitIfSome(ctx.logicValSet(0))
        return ItemDef(name, id, quantity, classification, logicval)


    # Visit a parse tree produced by LogicFileParser#presentWhenDef.
    def visitPresentWhenDef(self, ctx:LogicFileParser.PresentWhenDefContext):
        return self.visit(ctx.expr())


    # Visit a parse tree produced by LogicFileParser#ruleDef.
    def visitRuleDef(self, ctx:LogicFileParser.RuleDefContext):
        return self.visit(ctx.expr())


    # Visit a parse tree produced by LogicFileParser#destDef.
    def visitDestDef(self, ctx:LogicFileParser.DestDefContext):
        return ctx.Ident().getText()


    # Visit a parse tree produced by LogicFileParser#entranceDef.
    def visitEntranceDef(self, ctx:LogicFileParser.EntranceDefContext):
        id = ctx.Ident().getText()
        name = self.visitIfSome(ctx.nameDef(0))
        present_when = self.visitIfSome(ctx.nameDef) or Constant(True)
        destId = self.visit(ctx.destDef(0))
        rule = self.visit(ctx.ruleDef(0))
        child_can_cross = ctx.CantCrossChild(0) is None
        adult_can_cross = ctx.CantCrossAdult(0) is None
        return EntranceDef(name, id, present_when, destId, rule, child_can_cross, adult_can_cross)

    # Visit a parse tree produced by LogicFileParser#locationDef.
    def visitLocationDef(self, ctx:LogicFileParser.LocationDefContext):
        id = ctx.Ident().getText()
        name = self.visit(ctx.nameDef(0))
        present_when = self.visit(ctx.presentWhenDef(0))
        rule = self.visit(ctx.ruleDef(0))
        classification = self.visit(ctx.LocClassDef(0))
        return LocationDef(name, id, present_when, rule, classification)


    # Visit a parse tree produced by LogicFileParser#eventDef.
    def visitEventDef(self, ctx:LogicFileParser.EventDefContext):
        return EventSet(self.visit(ctx.Ident()), self.visit(ctx.expr()))


    # Visit a parse tree produced by LogicFileParser#regionDef.
    def visitRegionDef(self, ctx:LogicFileParser.RegionDefContext):
        id = ctx.Ident().getText()
        name = self.visit(ctx.nameDef(0))
        present_when = self.visit(ctx.presentWhenDef(0))
        locations = [self.visit(loc) for loc in ctx.locationDef()]
        entrances = [self.visit(ent) for ent in ctx.entranceDef()]
        events = [self.visit(ev) for ev in ctx.eventDef()]
        return RegionDef(name, id, present_when, locations, entrances, events)


    # Visit a parse tree produced by LogicFileParser#logicDef.
    def visitLogicDef(self, ctx:LogicFileParser.LogicDefContext):
        regions = [self.visit(reg) for reg in ctx.regionDef()]
        items = [self.visit(item) for item in ctx.itemDef()]
        helpers = [self.visit(helper) for helper in ctx.helperDef()]
        return LogicDef(regions, items, helpers)


    # Visit a parse tree produced by LogicFileParser#optionsDef.
    def visitOptionsDef(self, ctx:LogicFileParser.OptionsDefContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by LogicFileParser#optionDefStrings.
    def visitOptionDefStrings(self, ctx:LogicFileParser.OptionDefStringsContext):
        return OptionStringList(ctx.Ident().getText(), [es[1,-1] for es in ctx.EscapedString()])


    # Visit a parse tree produced by LogicFileParser#optionDefString.
    def visitOptionDefString(self, ctx:LogicFileParser.OptionDefStringContext):
        return OptionString(ctx.Ident().getText())


    # Visit a parse tree produced by LogicFileParser#optionDefIntList.
    def visitOptionDefIntList(self, ctx:LogicFileParser.OptionDefIntListContext):
        return OptionIntList(ctx.Ident().getText(), [int(num) for num in ctx.SignedInt()])


    # Visit a parse tree produced by LogicFileParser#optionDefIntRange.
    def visitOptionDefIntRange(self, ctx:LogicFileParser.OptionDefIntRangeContext):
        return OptionIntRange(ctx.Ident().getText(), int(ctx.SignedInt(0).getText()), int(ctx.SignedInt(1).getText()))


    # Visit a parse tree produced by LogicFileParser#optionDefInt.
    def visitOptionDefInt(self, ctx:LogicFileParser.OptionDefIntContext):
        return OptionInt(ctx.Ident().getText())


    # Visit a parse tree produced by LogicFileParser#optionDefFloatList.
    def visitOptionDefFloatList(self, ctx:LogicFileParser.OptionDefFloatListContext):
        return OptionFloatList(ctx.Ident().getText(), [float(x) for x in ctx.SignedNumber()])


    # Visit a parse tree produced by LogicFileParser#optionDefFloatRange.
    def visitOptionDefFloatRange(self, ctx:LogicFileParser.OptionDefFloatRangeContext):
        return OptionFloatRange(ctx.Ident().getText(), float(ctx.SignedNumber(0)), float(ctx.SignedNumber(1)))


    # Visit a parse tree produced by LogicFileParser#optionDefFloat.
    def visitOptionDefFloat(self, ctx:LogicFileParser.OptionDefFloatContext):
        return OptionFloat(ctx.Ident().getText())


    # Visit a parse tree produced by LogicFileParser#optionDefBool.
    def visitOptionDefBool(self, ctx:LogicFileParser.OptionDefBoolContext):
        return OptionBool(ctx.Ident().getText())


    # Visit a parse tree produced by LogicFileParser#subOperator.
    def visitSubOperator(self, ctx:LogicFileParser.SubOperatorContext):
        return Operation("sub", self.visitChildren(ctx))


    # Visit a parse tree produced by LogicFileParser#leftShiftOperator.
    def visitLeftShiftOperator(self, ctx:LogicFileParser.LeftShiftOperatorContext):
        return Operation("leftshift", self.visitChildren(ctx))


    # Visit a parse tree produced by LogicFileParser#geqOperator.
    def visitGeqOperator(self, ctx:LogicFileParser.GeqOperatorContext):
        return Operation(">=", self.visitChildren(ctx))


    # Visit a parse tree produced by LogicFileParser#eqOperator.
    def visitEqOperator(self, ctx:LogicFileParser.EqOperatorContext):
        return Operation("==", self.visitChildren(ctx))


    # Visit a parse tree produced by LogicFileParser#baseFunc.
    def visitBaseFunc(self, ctx:LogicFileParser.BaseFuncContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by LogicFileParser#neqOperator.
    def visitNeqOperator(self, ctx:LogicFileParser.NeqOperatorContext):
        return Operation("!=", self.visitChildren(ctx))


    # Visit a parse tree produced by LogicFileParser#lineSkip.
    def visitLineSkip(self, ctx:LogicFileParser.LineSkipContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by LogicFileParser#ternaryOperator.
    def visitTernaryOperator(self, ctx:LogicFileParser.TernaryOperatorContext):
        return Operation("ternary", self.visitChildren(ctx))


    # Visit a parse tree produced by LogicFileParser#andOperator.
    def visitAndOperator(self, ctx:LogicFileParser.AndOperatorContext):
        return Operation("and", self.visitChildren(ctx))


    # Visit a parse tree produced by LogicFileParser#divOperator.
    def visitDivOperator(self, ctx:LogicFileParser.DivOperatorContext):
        return Operation("div", self.visitChildren(ctx))


    # Visit a parse tree produced by LogicFileParser#orOperator.
    def visitOrOperator(self, ctx:LogicFileParser.OrOperatorContext):
        return Operation("or", self.visitChildren(ctx))


    # Visit a parse tree produced by LogicFileParser#addOperator.
    def visitAddOperator(self, ctx:LogicFileParser.AddOperatorContext):
        return Operation("add", self.visitChildren(ctx))


    # Visit a parse tree produced by LogicFileParser#grOperator.
    def visitGrOperator(self, ctx:LogicFileParser.GrOperatorContext):
        return Operation(">", self.visitChildren(ctx))


    # Visit a parse tree produced by LogicFileParser#leqOperator.
    def visitLeqOperator(self, ctx:LogicFileParser.LeqOperatorContext):
        return Operation("<=", self.visitChildren(ctx))


    # Visit a parse tree produced by LogicFileParser#notOperator.
    def visitNotOperator(self, ctx:LogicFileParser.NotOperatorContext):
        return Operation("not", self.visitChildren(ctx))


    # Visit a parse tree produced by LogicFileParser#rightShiftOperator.
    def visitRightShiftOperator(self, ctx:LogicFileParser.RightShiftOperatorContext):
        return Operation("rightshift", self.visitChildren(ctx))


    # Visit a parse tree produced by LogicFileParser#mulOperator.
    def visitMulOperator(self, ctx:LogicFileParser.MulOperatorContext):
        return Operation("mul", self.visitChildren(ctx))


    # Visit a parse tree produced by LogicFileParser#leOperator.
    def visitLeOperator(self, ctx:LogicFileParser.LeOperatorContext):
        return Operation("<", self.visitChildren(ctx))


    # Visit a parse tree produced by LogicFileParser#modOperator.
    def visitModOperator(self, ctx:LogicFileParser.ModOperatorContext):
        return Operation("mod", self.visitChildren(ctx))


    # Visit a parse tree produced by LogicFileParser#basefunc.
    def visitBasefunc(self, ctx:LogicFileParser.BasefuncContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by LogicFileParser#arg_pass.
    def visitArg_pass(self, ctx:LogicFileParser.Arg_passContext):
        if ctx.ArgAssign() is None:
            return self.visit(ctx.expr())
        else:
            return (ctx.Ident(0).getText(), self.visitIfSome(ctx.expr()) or ctx.Ident(1).getText())



    # Visit a parse tree produced by LogicFileParser#args_pass.
    def visitArgs_pass(self, ctx:LogicFileParser.Args_passContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by LogicFileParser#optionCheck.
    def visitOptionCheck(self, ctx:LogicFileParser.OptionCheckContext):
        return OptionCheck(ctx.Ident().getText())


    # Visit a parse tree produced by LogicFileParser#helperCall.
    def visitHelperCall(self, ctx:LogicFileParser.HelperCallContext):
        name = ctx.Ident().getText()
        return HelperInvocation(name, self.visit(ctx.args_pass()))


    # Visit a parse tree produced by LogicFileParser#argCheck.
    def visitArgCheck(self, ctx:LogicFileParser.ArgCheckContext):
        return ArgAccess(ctx.Ident().getText())


    # Visit a parse tree produced by LogicFileParser#logicValCheck.
    def visitLogicValCheck(self, ctx:LogicFileParser.LogicValCheckContext):
        return LogicValCheck(ctx.Ident().getText())


    # Visit a parse tree produced by LogicFileParser#eventCheck.
    def visitEventCheck(self, ctx:LogicFileParser.EventCheckContext):
        return EventCheck(ctx.Ident().getText())


    # Visit a parse tree produced by LogicFileParser#canReachLocCall.
    def visitCanReachLocCall(self, ctx:LogicFileParser.CanReachLocCallContext):
        return Operation("can_reach_location", self.visitChildren(ctx))


    # Visit a parse tree produced by LogicFileParser#canReachEntranceCall.
    def visitCanReachEntranceCall(self, ctx:LogicFileParser.CanReachEntranceCallContext):
        return Operation("can_reach_entrance", self.visitChildren(ctx))


    # Visit a parse tree produced by LogicFileParser#canReachRegionCall.
    def visitCanReachRegionCall(self, ctx:LogicFileParser.CanReachRegionCallContext):
        return Operation("can_reach_region", self.visitChildren(ctx))


    # Visit a parse tree produced by LogicFileParser#hasItemCall.
    def visitHasItemCall(self, ctx:LogicFileParser.HasItemCallContext):
        return Operation("has_item", self.visitChildren(ctx))


    # Visit a parse tree produced by LogicFileParser#countItemCall.
    def visitCountItemCall(self, ctx:LogicFileParser.CountItemCallContext):
        return Operation("count_item", self.visitChildren(ctx))


    # Visit a parse tree produced by LogicFileParser#isDungeonMqCall.
    def visitIsDungeonMqCall(self, ctx:LogicFileParser.IsDungeonMqCallContext):
        return Operation("is_dungeon_mq", self.visitChildren(ctx))


    # Visit a parse tree produced by LogicFileParser#floorCall.
    def visitFloorCall(self, ctx:LogicFileParser.FloorCallContext):
        return Operation("floor", self.visitChildren(ctx))


    # Visit a parse tree produced by LogicFileParser#ceilCall.
    def visitCeilCall(self, ctx:LogicFileParser.CeilCallContext):
        return Operation("ceil", self.visitChildren(ctx))


    # Visit a parse tree produced by LogicFileParser#value.
    def visitValue(self, ctx:LogicFileParser.ValueContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by LogicFileParser#parenExpr.
    def visitParenExpr(self, ctx:LogicFileParser.ParenExprContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by LogicFileParser#enumValueRef.
    def visitEnumValueRef(self, ctx:LogicFileParser.EnumValueRefContext):
        return EnumValue(ctx.Ident(0).getText(), ctx.Ident(1).getText())


    # Visit a parse tree produced by LogicFileParser#entranceRef.
    def visitEntranceRef(self, ctx:LogicFileParser.EntranceRefContext):
        return ctx.Ident().getText()


    # Visit a parse tree produced by LogicFileParser#regionRef.
    def visitRegionRef(self, ctx:LogicFileParser.RegionRefContext):
        return ctx.Ident().getText()


    # Visit a parse tree produced by LogicFileParser#locRef.
    def visitLocRef(self, ctx:LogicFileParser.LocRefContext):
        return ctx.Ident().getText()


    # Visit a parse tree produced by LogicFileParser#itemRef.
    def visitItemRef(self, ctx:LogicFileParser.ItemRefContext):
        return ctx.Ident().getText()


    # Visit a parse tree produced by LogicFileParser#listSeparator.
    def visitListSeparator(self, ctx:LogicFileParser.ListSeparatorContext):
        return None
    
    def aggregateResult(self, aggregate: List[AST_Nodes], nextResult: AST_Nodes):
        if aggregate is None:
            aggregate = []
        if nextResult is None:
            return aggregate
        return aggregate.append(nextResult)

    #helper for common pattern
    def visitIfSome(self, tree):
        if tree is None:
            return None
        return self.visit(tree)


del LogicFileParser

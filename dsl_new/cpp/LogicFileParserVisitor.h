
// Generated from ../cpp/LogicFileParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "LogicFileParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by LogicFileParser.
 */
class  LogicFileParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by LogicFileParser.
   */
    virtual std::any visitFileDef(LogicFileParser::FileDefContext *context) = 0;

    virtual std::any visitEnumDef(LogicFileParser::EnumDefContext *context) = 0;

    virtual std::any visitEnumVals(LogicFileParser::EnumValsContext *context) = 0;

    virtual std::any visitIfBlock(LogicFileParser::IfBlockContext *context) = 0;

    virtual std::any visitIfContinuation(LogicFileParser::IfContinuationContext *context) = 0;

    virtual std::any visitElseIfBlock(LogicFileParser::ElseIfBlockContext *context) = 0;

    virtual std::any visitElseBlock(LogicFileParser::ElseBlockContext *context) = 0;

    virtual std::any visitSwitchExpr(LogicFileParser::SwitchExprContext *context) = 0;

    virtual std::any visitReturn_case(LogicFileParser::Return_caseContext *context) = 0;

    virtual std::any visitCaseList(LogicFileParser::CaseListContext *context) = 0;

    virtual std::any visitCaseDef(LogicFileParser::CaseDefContext *context) = 0;

    virtual std::any visitDefaultCase(LogicFileParser::DefaultCaseContext *context) = 0;

    virtual std::any visitArgs(LogicFileParser::ArgsContext *context) = 0;

    virtual std::any visitArg(LogicFileParser::ArgContext *context) = 0;

    virtual std::any visitHelperDef(LogicFileParser::HelperDefContext *context) = 0;

    virtual std::any visitQuantityDef(LogicFileParser::QuantityDefContext *context) = 0;

    virtual std::any visitLogicValSet(LogicFileParser::LogicValSetContext *context) = 0;

    virtual std::any visitNameDef(LogicFileParser::NameDefContext *context) = 0;

    virtual std::any visitClassificationDef(LogicFileParser::ClassificationDefContext *context) = 0;

    virtual std::any visitItemDef(LogicFileParser::ItemDefContext *context) = 0;

    virtual std::any visitPresentWhenDef(LogicFileParser::PresentWhenDefContext *context) = 0;

    virtual std::any visitRuleDef(LogicFileParser::RuleDefContext *context) = 0;

    virtual std::any visitDestDef(LogicFileParser::DestDefContext *context) = 0;

    virtual std::any visitEntranceDef(LogicFileParser::EntranceDefContext *context) = 0;

    virtual std::any visitLocationDef(LogicFileParser::LocationDefContext *context) = 0;

    virtual std::any visitEventDef(LogicFileParser::EventDefContext *context) = 0;

    virtual std::any visitRegionDef(LogicFileParser::RegionDefContext *context) = 0;

    virtual std::any visitLogicDef(LogicFileParser::LogicDefContext *context) = 0;

    virtual std::any visitOptionsDef(LogicFileParser::OptionsDefContext *context) = 0;

    virtual std::any visitOptionDefStrings(LogicFileParser::OptionDefStringsContext *context) = 0;

    virtual std::any visitOptionDefString(LogicFileParser::OptionDefStringContext *context) = 0;

    virtual std::any visitOptionDefIntList(LogicFileParser::OptionDefIntListContext *context) = 0;

    virtual std::any visitOptionDefIntRange(LogicFileParser::OptionDefIntRangeContext *context) = 0;

    virtual std::any visitOptionDefInt(LogicFileParser::OptionDefIntContext *context) = 0;

    virtual std::any visitOptionDefFloatList(LogicFileParser::OptionDefFloatListContext *context) = 0;

    virtual std::any visitOptionDefFloatRange(LogicFileParser::OptionDefFloatRangeContext *context) = 0;

    virtual std::any visitOptionDefFloat(LogicFileParser::OptionDefFloatContext *context) = 0;

    virtual std::any visitOptionDefBool(LogicFileParser::OptionDefBoolContext *context) = 0;

    virtual std::any visitSubOperator(LogicFileParser::SubOperatorContext *context) = 0;

    virtual std::any visitLeftShiftOperator(LogicFileParser::LeftShiftOperatorContext *context) = 0;

    virtual std::any visitGeqOperator(LogicFileParser::GeqOperatorContext *context) = 0;

    virtual std::any visitEqOperator(LogicFileParser::EqOperatorContext *context) = 0;

    virtual std::any visitGrOperator(LogicFileParser::GrOperatorContext *context) = 0;

    virtual std::any visitBaseFunc(LogicFileParser::BaseFuncContext *context) = 0;

    virtual std::any visitNeqOperator(LogicFileParser::NeqOperatorContext *context) = 0;

    virtual std::any visitLineSkip(LogicFileParser::LineSkipContext *context) = 0;

    virtual std::any visitTernaryOperator(LogicFileParser::TernaryOperatorContext *context) = 0;

    virtual std::any visitAndOperator(LogicFileParser::AndOperatorContext *context) = 0;

    virtual std::any visitDivOperator(LogicFileParser::DivOperatorContext *context) = 0;

    virtual std::any visitOrOperator(LogicFileParser::OrOperatorContext *context) = 0;

    virtual std::any visitAddOperator(LogicFileParser::AddOperatorContext *context) = 0;

    virtual std::any visitLeqOperator(LogicFileParser::LeqOperatorContext *context) = 0;

    virtual std::any visitNotOperator(LogicFileParser::NotOperatorContext *context) = 0;

    virtual std::any visitRightShiftOperator(LogicFileParser::RightShiftOperatorContext *context) = 0;

    virtual std::any visitMulOperator(LogicFileParser::MulOperatorContext *context) = 0;

    virtual std::any visitLeOperator(LogicFileParser::LeOperatorContext *context) = 0;

    virtual std::any visitModOperator(LogicFileParser::ModOperatorContext *context) = 0;

    virtual std::any visitBasefunc(LogicFileParser::BasefuncContext *context) = 0;

    virtual std::any visitArg_pass(LogicFileParser::Arg_passContext *context) = 0;

    virtual std::any visitArgs_pass(LogicFileParser::Args_passContext *context) = 0;

    virtual std::any visitOptionCheck(LogicFileParser::OptionCheckContext *context) = 0;

    virtual std::any visitHelperCall(LogicFileParser::HelperCallContext *context) = 0;

    virtual std::any visitArgCheck(LogicFileParser::ArgCheckContext *context) = 0;

    virtual std::any visitLogicValCheck(LogicFileParser::LogicValCheckContext *context) = 0;

    virtual std::any visitEventCheck(LogicFileParser::EventCheckContext *context) = 0;

    virtual std::any visitCanReachLocCall(LogicFileParser::CanReachLocCallContext *context) = 0;

    virtual std::any visitCanReachEntranceCall(LogicFileParser::CanReachEntranceCallContext *context) = 0;

    virtual std::any visitCanReachRegionCall(LogicFileParser::CanReachRegionCallContext *context) = 0;

    virtual std::any visitHasItemCall(LogicFileParser::HasItemCallContext *context) = 0;

    virtual std::any visitCountItemCall(LogicFileParser::CountItemCallContext *context) = 0;

    virtual std::any visitIsDungeonMqCall(LogicFileParser::IsDungeonMqCallContext *context) = 0;

    virtual std::any visitFloorCall(LogicFileParser::FloorCallContext *context) = 0;

    virtual std::any visitCeilCall(LogicFileParser::CeilCallContext *context) = 0;

    virtual std::any visitValue(LogicFileParser::ValueContext *context) = 0;

    virtual std::any visitParenExpr(LogicFileParser::ParenExprContext *context) = 0;

    virtual std::any visitEnumValueRef(LogicFileParser::EnumValueRefContext *context) = 0;

    virtual std::any visitEntranceRef(LogicFileParser::EntranceRefContext *context) = 0;

    virtual std::any visitRegionRef(LogicFileParser::RegionRefContext *context) = 0;

    virtual std::any visitLocRef(LogicFileParser::LocRefContext *context) = 0;

    virtual std::any visitItemRef(LogicFileParser::ItemRefContext *context) = 0;

    virtual std::any visitListSeparator(LogicFileParser::ListSeparatorContext *context) = 0;


};


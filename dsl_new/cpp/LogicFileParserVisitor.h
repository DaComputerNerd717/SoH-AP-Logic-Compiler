
// Generated from LogicFileParser.g4 by ANTLR 4.9.3

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
    virtual antlrcpp::Any visitEnumDef(LogicFileParser::EnumDefContext *context) = 0;

    virtual antlrcpp::Any visitEnumVals(LogicFileParser::EnumValsContext *context) = 0;

    virtual antlrcpp::Any visitIfBlock(LogicFileParser::IfBlockContext *context) = 0;

    virtual antlrcpp::Any visitIfContinuation(LogicFileParser::IfContinuationContext *context) = 0;

    virtual antlrcpp::Any visitElseIfBlock(LogicFileParser::ElseIfBlockContext *context) = 0;

    virtual antlrcpp::Any visitElseBlock(LogicFileParser::ElseBlockContext *context) = 0;

    virtual antlrcpp::Any visitSwitchExpr(LogicFileParser::SwitchExprContext *context) = 0;

    virtual antlrcpp::Any visitReturn_case(LogicFileParser::Return_caseContext *context) = 0;

    virtual antlrcpp::Any visitCaseList(LogicFileParser::CaseListContext *context) = 0;

    virtual antlrcpp::Any visitCaseDef(LogicFileParser::CaseDefContext *context) = 0;

    virtual antlrcpp::Any visitDefaultCase(LogicFileParser::DefaultCaseContext *context) = 0;

    virtual antlrcpp::Any visitArgs(LogicFileParser::ArgsContext *context) = 0;

    virtual antlrcpp::Any visitArg(LogicFileParser::ArgContext *context) = 0;

    virtual antlrcpp::Any visitHelperDef(LogicFileParser::HelperDefContext *context) = 0;

    virtual antlrcpp::Any visitQuantityDef(LogicFileParser::QuantityDefContext *context) = 0;

    virtual antlrcpp::Any visitLogicValSet(LogicFileParser::LogicValSetContext *context) = 0;

    virtual antlrcpp::Any visitNameDef(LogicFileParser::NameDefContext *context) = 0;

    virtual antlrcpp::Any visitClassificationDef(LogicFileParser::ClassificationDefContext *context) = 0;

    virtual antlrcpp::Any visitItemDef(LogicFileParser::ItemDefContext *context) = 0;

    virtual antlrcpp::Any visitPresentWhenDef(LogicFileParser::PresentWhenDefContext *context) = 0;

    virtual antlrcpp::Any visitRuleDef(LogicFileParser::RuleDefContext *context) = 0;

    virtual antlrcpp::Any visitDestDef(LogicFileParser::DestDefContext *context) = 0;

    virtual antlrcpp::Any visitEntranceDef(LogicFileParser::EntranceDefContext *context) = 0;

    virtual antlrcpp::Any visitLocationDef(LogicFileParser::LocationDefContext *context) = 0;

    virtual antlrcpp::Any visitEventDef(LogicFileParser::EventDefContext *context) = 0;

    virtual antlrcpp::Any visitRegionDef(LogicFileParser::RegionDefContext *context) = 0;

    virtual antlrcpp::Any visitLogicDef(LogicFileParser::LogicDefContext *context) = 0;

    virtual antlrcpp::Any visitOptionsDef(LogicFileParser::OptionsDefContext *context) = 0;

    virtual antlrcpp::Any visitOptionDefStrings(LogicFileParser::OptionDefStringsContext *context) = 0;

    virtual antlrcpp::Any visitOptionDefString(LogicFileParser::OptionDefStringContext *context) = 0;

    virtual antlrcpp::Any visitOptionDefIntList(LogicFileParser::OptionDefIntListContext *context) = 0;

    virtual antlrcpp::Any visitOptionDefIntRange(LogicFileParser::OptionDefIntRangeContext *context) = 0;

    virtual antlrcpp::Any visitOptionDefInt(LogicFileParser::OptionDefIntContext *context) = 0;

    virtual antlrcpp::Any visitOptionDefFloatList(LogicFileParser::OptionDefFloatListContext *context) = 0;

    virtual antlrcpp::Any visitOptionDefFloatRange(LogicFileParser::OptionDefFloatRangeContext *context) = 0;

    virtual antlrcpp::Any visitOptionDefFloat(LogicFileParser::OptionDefFloatContext *context) = 0;

    virtual antlrcpp::Any visitOptionDefBool(LogicFileParser::OptionDefBoolContext *context) = 0;

    virtual antlrcpp::Any visitFileDef(LogicFileParser::FileDefContext *context) = 0;

    virtual antlrcpp::Any visitSubOperator(LogicFileParser::SubOperatorContext *context) = 0;

    virtual antlrcpp::Any visitLeftShiftOperator(LogicFileParser::LeftShiftOperatorContext *context) = 0;

    virtual antlrcpp::Any visitGeqOperator(LogicFileParser::GeqOperatorContext *context) = 0;

    virtual antlrcpp::Any visitEqOperator(LogicFileParser::EqOperatorContext *context) = 0;

    virtual antlrcpp::Any visitBaseFunc(LogicFileParser::BaseFuncContext *context) = 0;

    virtual antlrcpp::Any visitNeqOperator(LogicFileParser::NeqOperatorContext *context) = 0;

    virtual antlrcpp::Any visitTernaryOperator(LogicFileParser::TernaryOperatorContext *context) = 0;

    virtual antlrcpp::Any visitAndOperator(LogicFileParser::AndOperatorContext *context) = 0;

    virtual antlrcpp::Any visitDivOperator(LogicFileParser::DivOperatorContext *context) = 0;

    virtual antlrcpp::Any visitOrOperator(LogicFileParser::OrOperatorContext *context) = 0;

    virtual antlrcpp::Any visitAddOperator(LogicFileParser::AddOperatorContext *context) = 0;

    virtual antlrcpp::Any visitGeOperator(LogicFileParser::GeOperatorContext *context) = 0;

    virtual antlrcpp::Any visitLeqOperator(LogicFileParser::LeqOperatorContext *context) = 0;

    virtual antlrcpp::Any visitNotOperator(LogicFileParser::NotOperatorContext *context) = 0;

    virtual antlrcpp::Any visitRightShiftOperator(LogicFileParser::RightShiftOperatorContext *context) = 0;

    virtual antlrcpp::Any visitMulOperator(LogicFileParser::MulOperatorContext *context) = 0;

    virtual antlrcpp::Any visitLeOperator(LogicFileParser::LeOperatorContext *context) = 0;

    virtual antlrcpp::Any visitModOperator(LogicFileParser::ModOperatorContext *context) = 0;

    virtual antlrcpp::Any visitBasefunc(LogicFileParser::BasefuncContext *context) = 0;

    virtual antlrcpp::Any visitOptionCheck(LogicFileParser::OptionCheckContext *context) = 0;

    virtual antlrcpp::Any visitHelperCall(LogicFileParser::HelperCallContext *context) = 0;

    virtual antlrcpp::Any visitArgCheck(LogicFileParser::ArgCheckContext *context) = 0;

    virtual antlrcpp::Any visitLogicValCheck(LogicFileParser::LogicValCheckContext *context) = 0;

    virtual antlrcpp::Any visitEventCheck(LogicFileParser::EventCheckContext *context) = 0;

    virtual antlrcpp::Any visitCanReachLocCall(LogicFileParser::CanReachLocCallContext *context) = 0;

    virtual antlrcpp::Any visitCanReachEntranceCall(LogicFileParser::CanReachEntranceCallContext *context) = 0;

    virtual antlrcpp::Any visitCanReachRegionCall(LogicFileParser::CanReachRegionCallContext *context) = 0;

    virtual antlrcpp::Any visitHasItemCall(LogicFileParser::HasItemCallContext *context) = 0;

    virtual antlrcpp::Any visitCountItemCall(LogicFileParser::CountItemCallContext *context) = 0;

    virtual antlrcpp::Any visitIsDungeonMqCall(LogicFileParser::IsDungeonMqCallContext *context) = 0;

    virtual antlrcpp::Any visitFloorCall(LogicFileParser::FloorCallContext *context) = 0;

    virtual antlrcpp::Any visitCeilCall(LogicFileParser::CeilCallContext *context) = 0;

    virtual antlrcpp::Any visitValue(LogicFileParser::ValueContext *context) = 0;

    virtual antlrcpp::Any visitParenExpr(LogicFileParser::ParenExprContext *context) = 0;

    virtual antlrcpp::Any visitEnumValueRef(LogicFileParser::EnumValueRefContext *context) = 0;

    virtual antlrcpp::Any visitEntranceRef(LogicFileParser::EntranceRefContext *context) = 0;

    virtual antlrcpp::Any visitRegionRef(LogicFileParser::RegionRefContext *context) = 0;

    virtual antlrcpp::Any visitLocRef(LogicFileParser::LocRefContext *context) = 0;

    virtual antlrcpp::Any visitItemRef(LogicFileParser::ItemRefContext *context) = 0;


};


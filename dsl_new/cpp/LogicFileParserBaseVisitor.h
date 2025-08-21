
// Generated from LogicFileParser.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "LogicFileParserVisitor.h"


/**
 * This class provides an empty implementation of LogicFileParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  LogicFileParserBaseVisitor : public LogicFileParserVisitor {
public:

  virtual antlrcpp::Any visitFileDef(LogicFileParser::FileDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumDef(LogicFileParser::EnumDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumVals(LogicFileParser::EnumValsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfBlock(LogicFileParser::IfBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfContinuation(LogicFileParser::IfContinuationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElseIfBlock(LogicFileParser::ElseIfBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElseBlock(LogicFileParser::ElseBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSwitchExpr(LogicFileParser::SwitchExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturn_case(LogicFileParser::Return_caseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCaseList(LogicFileParser::CaseListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCaseDef(LogicFileParser::CaseDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefaultCase(LogicFileParser::DefaultCaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgs(LogicFileParser::ArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArg(LogicFileParser::ArgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHelperDef(LogicFileParser::HelperDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuantityDef(LogicFileParser::QuantityDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicValSet(LogicFileParser::LogicValSetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNameDef(LogicFileParser::NameDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassificationDef(LogicFileParser::ClassificationDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitItemDef(LogicFileParser::ItemDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPresentWhenDef(LogicFileParser::PresentWhenDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRuleDef(LogicFileParser::RuleDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDestDef(LogicFileParser::DestDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEntranceDef(LogicFileParser::EntranceDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLocationDef(LogicFileParser::LocationDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEventDef(LogicFileParser::EventDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRegionDef(LogicFileParser::RegionDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicDef(LogicFileParser::LogicDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOptionsDef(LogicFileParser::OptionsDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOptionDefStrings(LogicFileParser::OptionDefStringsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOptionDefString(LogicFileParser::OptionDefStringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOptionDefIntList(LogicFileParser::OptionDefIntListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOptionDefIntRange(LogicFileParser::OptionDefIntRangeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOptionDefInt(LogicFileParser::OptionDefIntContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOptionDefFloatList(LogicFileParser::OptionDefFloatListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOptionDefFloatRange(LogicFileParser::OptionDefFloatRangeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOptionDefFloat(LogicFileParser::OptionDefFloatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOptionDefBool(LogicFileParser::OptionDefBoolContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubOperator(LogicFileParser::SubOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLeftShiftOperator(LogicFileParser::LeftShiftOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGeqOperator(LogicFileParser::GeqOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEqOperator(LogicFileParser::EqOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBaseFunc(LogicFileParser::BaseFuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNeqOperator(LogicFileParser::NeqOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLineSkip(LogicFileParser::LineSkipContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTernaryOperator(LogicFileParser::TernaryOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAndOperator(LogicFileParser::AndOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDivOperator(LogicFileParser::DivOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrOperator(LogicFileParser::OrOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddOperator(LogicFileParser::AddOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGeOperator(LogicFileParser::GeOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLeqOperator(LogicFileParser::LeqOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNotOperator(LogicFileParser::NotOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRightShiftOperator(LogicFileParser::RightShiftOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMulOperator(LogicFileParser::MulOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLeOperator(LogicFileParser::LeOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModOperator(LogicFileParser::ModOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBasefunc(LogicFileParser::BasefuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArg_pass(LogicFileParser::Arg_passContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgs_pass(LogicFileParser::Args_passContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOptionCheck(LogicFileParser::OptionCheckContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHelperCall(LogicFileParser::HelperCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgCheck(LogicFileParser::ArgCheckContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicValCheck(LogicFileParser::LogicValCheckContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEventCheck(LogicFileParser::EventCheckContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCanReachLocCall(LogicFileParser::CanReachLocCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCanReachEntranceCall(LogicFileParser::CanReachEntranceCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCanReachRegionCall(LogicFileParser::CanReachRegionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHasItemCall(LogicFileParser::HasItemCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCountItemCall(LogicFileParser::CountItemCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIsDungeonMqCall(LogicFileParser::IsDungeonMqCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFloorCall(LogicFileParser::FloorCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCeilCall(LogicFileParser::CeilCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValue(LogicFileParser::ValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParenExpr(LogicFileParser::ParenExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumValueRef(LogicFileParser::EnumValueRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEntranceRef(LogicFileParser::EntranceRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRegionRef(LogicFileParser::RegionRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLocRef(LogicFileParser::LocRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitItemRef(LogicFileParser::ItemRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitListSeparator(LogicFileParser::ListSeparatorContext *ctx) override {
    return visitChildren(ctx);
  }


};


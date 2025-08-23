
// Generated from ../cpp/LogicFileParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "LogicFileParserVisitor.h"


/**
 * This class provides an empty implementation of LogicFileParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  LogicFileParserBaseVisitor : public LogicFileParserVisitor {
public:

  virtual std::any visitFileDef(LogicFileParser::FileDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumDef(LogicFileParser::EnumDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumVals(LogicFileParser::EnumValsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfBlock(LogicFileParser::IfBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfContinuation(LogicFileParser::IfContinuationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElseIfBlock(LogicFileParser::ElseIfBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElseBlock(LogicFileParser::ElseBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSwitchExpr(LogicFileParser::SwitchExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturn_case(LogicFileParser::Return_caseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCaseList(LogicFileParser::CaseListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCaseDef(LogicFileParser::CaseDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefaultCase(LogicFileParser::DefaultCaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgs(LogicFileParser::ArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArg(LogicFileParser::ArgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHelperDef(LogicFileParser::HelperDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQuantityDef(LogicFileParser::QuantityDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicValSet(LogicFileParser::LogicValSetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNameDef(LogicFileParser::NameDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassificationDef(LogicFileParser::ClassificationDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitItemDef(LogicFileParser::ItemDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPresentWhenDef(LogicFileParser::PresentWhenDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRuleDef(LogicFileParser::RuleDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDestDef(LogicFileParser::DestDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEntranceDef(LogicFileParser::EntranceDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLocationDef(LogicFileParser::LocationDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEventDef(LogicFileParser::EventDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRegionDef(LogicFileParser::RegionDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicDef(LogicFileParser::LogicDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOptionsDef(LogicFileParser::OptionsDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOptionDefStrings(LogicFileParser::OptionDefStringsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOptionDefString(LogicFileParser::OptionDefStringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOptionDefIntList(LogicFileParser::OptionDefIntListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOptionDefIntRange(LogicFileParser::OptionDefIntRangeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOptionDefInt(LogicFileParser::OptionDefIntContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOptionDefFloatList(LogicFileParser::OptionDefFloatListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOptionDefFloatRange(LogicFileParser::OptionDefFloatRangeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOptionDefFloat(LogicFileParser::OptionDefFloatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOptionDefBool(LogicFileParser::OptionDefBoolContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubOperator(LogicFileParser::SubOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLeftShiftOperator(LogicFileParser::LeftShiftOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGeqOperator(LogicFileParser::GeqOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEqOperator(LogicFileParser::EqOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGrOperator(LogicFileParser::GrOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBaseFunc(LogicFileParser::BaseFuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNeqOperator(LogicFileParser::NeqOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLineSkip(LogicFileParser::LineSkipContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTernaryOperator(LogicFileParser::TernaryOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAndOperator(LogicFileParser::AndOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDivOperator(LogicFileParser::DivOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOrOperator(LogicFileParser::OrOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddOperator(LogicFileParser::AddOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLeqOperator(LogicFileParser::LeqOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNotOperator(LogicFileParser::NotOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRightShiftOperator(LogicFileParser::RightShiftOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMulOperator(LogicFileParser::MulOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLeOperator(LogicFileParser::LeOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModOperator(LogicFileParser::ModOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBasefunc(LogicFileParser::BasefuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArg_pass(LogicFileParser::Arg_passContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgs_pass(LogicFileParser::Args_passContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOptionCheck(LogicFileParser::OptionCheckContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHelperCall(LogicFileParser::HelperCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgCheck(LogicFileParser::ArgCheckContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicValCheck(LogicFileParser::LogicValCheckContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEventCheck(LogicFileParser::EventCheckContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCanReachLocCall(LogicFileParser::CanReachLocCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCanReachEntranceCall(LogicFileParser::CanReachEntranceCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCanReachRegionCall(LogicFileParser::CanReachRegionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHasItemCall(LogicFileParser::HasItemCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCountItemCall(LogicFileParser::CountItemCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIsDungeonMqCall(LogicFileParser::IsDungeonMqCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFloorCall(LogicFileParser::FloorCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCeilCall(LogicFileParser::CeilCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValue(LogicFileParser::ValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParenExpr(LogicFileParser::ParenExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumValueRef(LogicFileParser::EnumValueRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEntranceRef(LogicFileParser::EntranceRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRegionRef(LogicFileParser::RegionRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLocRef(LogicFileParser::LocRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitItemRef(LogicFileParser::ItemRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitListSeparator(LogicFileParser::ListSeparatorContext *ctx) override {
    return visitChildren(ctx);
  }


};


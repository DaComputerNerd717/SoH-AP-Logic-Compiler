
// Generated from LogicFileParser.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "LogicFileParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by LogicFileParser.
 */
class  LogicFileParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterEnumDef(LogicFileParser::EnumDefContext *ctx) = 0;
  virtual void exitEnumDef(LogicFileParser::EnumDefContext *ctx) = 0;

  virtual void enterEnumVals(LogicFileParser::EnumValsContext *ctx) = 0;
  virtual void exitEnumVals(LogicFileParser::EnumValsContext *ctx) = 0;

  virtual void enterIfBlock(LogicFileParser::IfBlockContext *ctx) = 0;
  virtual void exitIfBlock(LogicFileParser::IfBlockContext *ctx) = 0;

  virtual void enterIfContinuation(LogicFileParser::IfContinuationContext *ctx) = 0;
  virtual void exitIfContinuation(LogicFileParser::IfContinuationContext *ctx) = 0;

  virtual void enterElseIfBlock(LogicFileParser::ElseIfBlockContext *ctx) = 0;
  virtual void exitElseIfBlock(LogicFileParser::ElseIfBlockContext *ctx) = 0;

  virtual void enterElseBlock(LogicFileParser::ElseBlockContext *ctx) = 0;
  virtual void exitElseBlock(LogicFileParser::ElseBlockContext *ctx) = 0;

  virtual void enterSwitchExpr(LogicFileParser::SwitchExprContext *ctx) = 0;
  virtual void exitSwitchExpr(LogicFileParser::SwitchExprContext *ctx) = 0;

  virtual void enterReturn_case(LogicFileParser::Return_caseContext *ctx) = 0;
  virtual void exitReturn_case(LogicFileParser::Return_caseContext *ctx) = 0;

  virtual void enterCaseList(LogicFileParser::CaseListContext *ctx) = 0;
  virtual void exitCaseList(LogicFileParser::CaseListContext *ctx) = 0;

  virtual void enterCaseDef(LogicFileParser::CaseDefContext *ctx) = 0;
  virtual void exitCaseDef(LogicFileParser::CaseDefContext *ctx) = 0;

  virtual void enterDefaultCase(LogicFileParser::DefaultCaseContext *ctx) = 0;
  virtual void exitDefaultCase(LogicFileParser::DefaultCaseContext *ctx) = 0;

  virtual void enterArgs(LogicFileParser::ArgsContext *ctx) = 0;
  virtual void exitArgs(LogicFileParser::ArgsContext *ctx) = 0;

  virtual void enterArg(LogicFileParser::ArgContext *ctx) = 0;
  virtual void exitArg(LogicFileParser::ArgContext *ctx) = 0;

  virtual void enterHelperDef(LogicFileParser::HelperDefContext *ctx) = 0;
  virtual void exitHelperDef(LogicFileParser::HelperDefContext *ctx) = 0;

  virtual void enterQuantityDef(LogicFileParser::QuantityDefContext *ctx) = 0;
  virtual void exitQuantityDef(LogicFileParser::QuantityDefContext *ctx) = 0;

  virtual void enterLogicValSet(LogicFileParser::LogicValSetContext *ctx) = 0;
  virtual void exitLogicValSet(LogicFileParser::LogicValSetContext *ctx) = 0;

  virtual void enterNameDef(LogicFileParser::NameDefContext *ctx) = 0;
  virtual void exitNameDef(LogicFileParser::NameDefContext *ctx) = 0;

  virtual void enterClassificationDef(LogicFileParser::ClassificationDefContext *ctx) = 0;
  virtual void exitClassificationDef(LogicFileParser::ClassificationDefContext *ctx) = 0;

  virtual void enterItemDef(LogicFileParser::ItemDefContext *ctx) = 0;
  virtual void exitItemDef(LogicFileParser::ItemDefContext *ctx) = 0;

  virtual void enterPresentWhenDef(LogicFileParser::PresentWhenDefContext *ctx) = 0;
  virtual void exitPresentWhenDef(LogicFileParser::PresentWhenDefContext *ctx) = 0;

  virtual void enterRuleDef(LogicFileParser::RuleDefContext *ctx) = 0;
  virtual void exitRuleDef(LogicFileParser::RuleDefContext *ctx) = 0;

  virtual void enterDestDef(LogicFileParser::DestDefContext *ctx) = 0;
  virtual void exitDestDef(LogicFileParser::DestDefContext *ctx) = 0;

  virtual void enterEntranceDef(LogicFileParser::EntranceDefContext *ctx) = 0;
  virtual void exitEntranceDef(LogicFileParser::EntranceDefContext *ctx) = 0;

  virtual void enterLocationDef(LogicFileParser::LocationDefContext *ctx) = 0;
  virtual void exitLocationDef(LogicFileParser::LocationDefContext *ctx) = 0;

  virtual void enterEventDef(LogicFileParser::EventDefContext *ctx) = 0;
  virtual void exitEventDef(LogicFileParser::EventDefContext *ctx) = 0;

  virtual void enterRegionDef(LogicFileParser::RegionDefContext *ctx) = 0;
  virtual void exitRegionDef(LogicFileParser::RegionDefContext *ctx) = 0;

  virtual void enterLogicDef(LogicFileParser::LogicDefContext *ctx) = 0;
  virtual void exitLogicDef(LogicFileParser::LogicDefContext *ctx) = 0;

  virtual void enterOptionsDef(LogicFileParser::OptionsDefContext *ctx) = 0;
  virtual void exitOptionsDef(LogicFileParser::OptionsDefContext *ctx) = 0;

  virtual void enterOptionDefStrings(LogicFileParser::OptionDefStringsContext *ctx) = 0;
  virtual void exitOptionDefStrings(LogicFileParser::OptionDefStringsContext *ctx) = 0;

  virtual void enterOptionDefString(LogicFileParser::OptionDefStringContext *ctx) = 0;
  virtual void exitOptionDefString(LogicFileParser::OptionDefStringContext *ctx) = 0;

  virtual void enterOptionDefIntList(LogicFileParser::OptionDefIntListContext *ctx) = 0;
  virtual void exitOptionDefIntList(LogicFileParser::OptionDefIntListContext *ctx) = 0;

  virtual void enterOptionDefIntRange(LogicFileParser::OptionDefIntRangeContext *ctx) = 0;
  virtual void exitOptionDefIntRange(LogicFileParser::OptionDefIntRangeContext *ctx) = 0;

  virtual void enterOptionDefInt(LogicFileParser::OptionDefIntContext *ctx) = 0;
  virtual void exitOptionDefInt(LogicFileParser::OptionDefIntContext *ctx) = 0;

  virtual void enterOptionDefFloatList(LogicFileParser::OptionDefFloatListContext *ctx) = 0;
  virtual void exitOptionDefFloatList(LogicFileParser::OptionDefFloatListContext *ctx) = 0;

  virtual void enterOptionDefFloatRange(LogicFileParser::OptionDefFloatRangeContext *ctx) = 0;
  virtual void exitOptionDefFloatRange(LogicFileParser::OptionDefFloatRangeContext *ctx) = 0;

  virtual void enterOptionDefFloat(LogicFileParser::OptionDefFloatContext *ctx) = 0;
  virtual void exitOptionDefFloat(LogicFileParser::OptionDefFloatContext *ctx) = 0;

  virtual void enterOptionDefBool(LogicFileParser::OptionDefBoolContext *ctx) = 0;
  virtual void exitOptionDefBool(LogicFileParser::OptionDefBoolContext *ctx) = 0;

  virtual void enterFileDef(LogicFileParser::FileDefContext *ctx) = 0;
  virtual void exitFileDef(LogicFileParser::FileDefContext *ctx) = 0;

  virtual void enterSubOperator(LogicFileParser::SubOperatorContext *ctx) = 0;
  virtual void exitSubOperator(LogicFileParser::SubOperatorContext *ctx) = 0;

  virtual void enterLeftShiftOperator(LogicFileParser::LeftShiftOperatorContext *ctx) = 0;
  virtual void exitLeftShiftOperator(LogicFileParser::LeftShiftOperatorContext *ctx) = 0;

  virtual void enterGeqOperator(LogicFileParser::GeqOperatorContext *ctx) = 0;
  virtual void exitGeqOperator(LogicFileParser::GeqOperatorContext *ctx) = 0;

  virtual void enterEqOperator(LogicFileParser::EqOperatorContext *ctx) = 0;
  virtual void exitEqOperator(LogicFileParser::EqOperatorContext *ctx) = 0;

  virtual void enterBaseFunc(LogicFileParser::BaseFuncContext *ctx) = 0;
  virtual void exitBaseFunc(LogicFileParser::BaseFuncContext *ctx) = 0;

  virtual void enterNeqOperator(LogicFileParser::NeqOperatorContext *ctx) = 0;
  virtual void exitNeqOperator(LogicFileParser::NeqOperatorContext *ctx) = 0;

  virtual void enterTernaryOperator(LogicFileParser::TernaryOperatorContext *ctx) = 0;
  virtual void exitTernaryOperator(LogicFileParser::TernaryOperatorContext *ctx) = 0;

  virtual void enterAndOperator(LogicFileParser::AndOperatorContext *ctx) = 0;
  virtual void exitAndOperator(LogicFileParser::AndOperatorContext *ctx) = 0;

  virtual void enterDivOperator(LogicFileParser::DivOperatorContext *ctx) = 0;
  virtual void exitDivOperator(LogicFileParser::DivOperatorContext *ctx) = 0;

  virtual void enterOrOperator(LogicFileParser::OrOperatorContext *ctx) = 0;
  virtual void exitOrOperator(LogicFileParser::OrOperatorContext *ctx) = 0;

  virtual void enterAddOperator(LogicFileParser::AddOperatorContext *ctx) = 0;
  virtual void exitAddOperator(LogicFileParser::AddOperatorContext *ctx) = 0;

  virtual void enterGeOperator(LogicFileParser::GeOperatorContext *ctx) = 0;
  virtual void exitGeOperator(LogicFileParser::GeOperatorContext *ctx) = 0;

  virtual void enterLeqOperator(LogicFileParser::LeqOperatorContext *ctx) = 0;
  virtual void exitLeqOperator(LogicFileParser::LeqOperatorContext *ctx) = 0;

  virtual void enterNotOperator(LogicFileParser::NotOperatorContext *ctx) = 0;
  virtual void exitNotOperator(LogicFileParser::NotOperatorContext *ctx) = 0;

  virtual void enterRightShiftOperator(LogicFileParser::RightShiftOperatorContext *ctx) = 0;
  virtual void exitRightShiftOperator(LogicFileParser::RightShiftOperatorContext *ctx) = 0;

  virtual void enterMulOperator(LogicFileParser::MulOperatorContext *ctx) = 0;
  virtual void exitMulOperator(LogicFileParser::MulOperatorContext *ctx) = 0;

  virtual void enterLeOperator(LogicFileParser::LeOperatorContext *ctx) = 0;
  virtual void exitLeOperator(LogicFileParser::LeOperatorContext *ctx) = 0;

  virtual void enterModOperator(LogicFileParser::ModOperatorContext *ctx) = 0;
  virtual void exitModOperator(LogicFileParser::ModOperatorContext *ctx) = 0;

  virtual void enterBasefunc(LogicFileParser::BasefuncContext *ctx) = 0;
  virtual void exitBasefunc(LogicFileParser::BasefuncContext *ctx) = 0;

  virtual void enterOptionCheck(LogicFileParser::OptionCheckContext *ctx) = 0;
  virtual void exitOptionCheck(LogicFileParser::OptionCheckContext *ctx) = 0;

  virtual void enterHelperCall(LogicFileParser::HelperCallContext *ctx) = 0;
  virtual void exitHelperCall(LogicFileParser::HelperCallContext *ctx) = 0;

  virtual void enterArgCheck(LogicFileParser::ArgCheckContext *ctx) = 0;
  virtual void exitArgCheck(LogicFileParser::ArgCheckContext *ctx) = 0;

  virtual void enterLogicValCheck(LogicFileParser::LogicValCheckContext *ctx) = 0;
  virtual void exitLogicValCheck(LogicFileParser::LogicValCheckContext *ctx) = 0;

  virtual void enterEventCheck(LogicFileParser::EventCheckContext *ctx) = 0;
  virtual void exitEventCheck(LogicFileParser::EventCheckContext *ctx) = 0;

  virtual void enterCanReachLocCall(LogicFileParser::CanReachLocCallContext *ctx) = 0;
  virtual void exitCanReachLocCall(LogicFileParser::CanReachLocCallContext *ctx) = 0;

  virtual void enterCanReachEntranceCall(LogicFileParser::CanReachEntranceCallContext *ctx) = 0;
  virtual void exitCanReachEntranceCall(LogicFileParser::CanReachEntranceCallContext *ctx) = 0;

  virtual void enterCanReachRegionCall(LogicFileParser::CanReachRegionCallContext *ctx) = 0;
  virtual void exitCanReachRegionCall(LogicFileParser::CanReachRegionCallContext *ctx) = 0;

  virtual void enterHasItemCall(LogicFileParser::HasItemCallContext *ctx) = 0;
  virtual void exitHasItemCall(LogicFileParser::HasItemCallContext *ctx) = 0;

  virtual void enterCountItemCall(LogicFileParser::CountItemCallContext *ctx) = 0;
  virtual void exitCountItemCall(LogicFileParser::CountItemCallContext *ctx) = 0;

  virtual void enterIsDungeonMqCall(LogicFileParser::IsDungeonMqCallContext *ctx) = 0;
  virtual void exitIsDungeonMqCall(LogicFileParser::IsDungeonMqCallContext *ctx) = 0;

  virtual void enterFloorCall(LogicFileParser::FloorCallContext *ctx) = 0;
  virtual void exitFloorCall(LogicFileParser::FloorCallContext *ctx) = 0;

  virtual void enterCeilCall(LogicFileParser::CeilCallContext *ctx) = 0;
  virtual void exitCeilCall(LogicFileParser::CeilCallContext *ctx) = 0;

  virtual void enterValue(LogicFileParser::ValueContext *ctx) = 0;
  virtual void exitValue(LogicFileParser::ValueContext *ctx) = 0;

  virtual void enterParenExpr(LogicFileParser::ParenExprContext *ctx) = 0;
  virtual void exitParenExpr(LogicFileParser::ParenExprContext *ctx) = 0;

  virtual void enterEnumValueRef(LogicFileParser::EnumValueRefContext *ctx) = 0;
  virtual void exitEnumValueRef(LogicFileParser::EnumValueRefContext *ctx) = 0;

  virtual void enterEntranceRef(LogicFileParser::EntranceRefContext *ctx) = 0;
  virtual void exitEntranceRef(LogicFileParser::EntranceRefContext *ctx) = 0;

  virtual void enterRegionRef(LogicFileParser::RegionRefContext *ctx) = 0;
  virtual void exitRegionRef(LogicFileParser::RegionRefContext *ctx) = 0;

  virtual void enterLocRef(LogicFileParser::LocRefContext *ctx) = 0;
  virtual void exitLocRef(LogicFileParser::LocRefContext *ctx) = 0;

  virtual void enterItemRef(LogicFileParser::ItemRefContext *ctx) = 0;
  virtual void exitItemRef(LogicFileParser::ItemRefContext *ctx) = 0;


};


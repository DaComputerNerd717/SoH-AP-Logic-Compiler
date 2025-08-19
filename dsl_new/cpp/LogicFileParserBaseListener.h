
// Generated from LogicFileParser.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"
#include "LogicFileParserListener.h"


/**
 * This class provides an empty implementation of LogicFileParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  LogicFileParserBaseListener : public LogicFileParserListener {
public:

  virtual void enterEnumDef(LogicFileParser::EnumDefContext * /*ctx*/) override { }
  virtual void exitEnumDef(LogicFileParser::EnumDefContext * /*ctx*/) override { }

  virtual void enterEnumVals(LogicFileParser::EnumValsContext * /*ctx*/) override { }
  virtual void exitEnumVals(LogicFileParser::EnumValsContext * /*ctx*/) override { }

  virtual void enterIfBlock(LogicFileParser::IfBlockContext * /*ctx*/) override { }
  virtual void exitIfBlock(LogicFileParser::IfBlockContext * /*ctx*/) override { }

  virtual void enterIfContinuation(LogicFileParser::IfContinuationContext * /*ctx*/) override { }
  virtual void exitIfContinuation(LogicFileParser::IfContinuationContext * /*ctx*/) override { }

  virtual void enterElseIfBlock(LogicFileParser::ElseIfBlockContext * /*ctx*/) override { }
  virtual void exitElseIfBlock(LogicFileParser::ElseIfBlockContext * /*ctx*/) override { }

  virtual void enterElseBlock(LogicFileParser::ElseBlockContext * /*ctx*/) override { }
  virtual void exitElseBlock(LogicFileParser::ElseBlockContext * /*ctx*/) override { }

  virtual void enterSwitchExpr(LogicFileParser::SwitchExprContext * /*ctx*/) override { }
  virtual void exitSwitchExpr(LogicFileParser::SwitchExprContext * /*ctx*/) override { }

  virtual void enterReturn_case(LogicFileParser::Return_caseContext * /*ctx*/) override { }
  virtual void exitReturn_case(LogicFileParser::Return_caseContext * /*ctx*/) override { }

  virtual void enterCaseList(LogicFileParser::CaseListContext * /*ctx*/) override { }
  virtual void exitCaseList(LogicFileParser::CaseListContext * /*ctx*/) override { }

  virtual void enterCaseDef(LogicFileParser::CaseDefContext * /*ctx*/) override { }
  virtual void exitCaseDef(LogicFileParser::CaseDefContext * /*ctx*/) override { }

  virtual void enterDefaultCase(LogicFileParser::DefaultCaseContext * /*ctx*/) override { }
  virtual void exitDefaultCase(LogicFileParser::DefaultCaseContext * /*ctx*/) override { }

  virtual void enterArgs(LogicFileParser::ArgsContext * /*ctx*/) override { }
  virtual void exitArgs(LogicFileParser::ArgsContext * /*ctx*/) override { }

  virtual void enterArg(LogicFileParser::ArgContext * /*ctx*/) override { }
  virtual void exitArg(LogicFileParser::ArgContext * /*ctx*/) override { }

  virtual void enterHelperDef(LogicFileParser::HelperDefContext * /*ctx*/) override { }
  virtual void exitHelperDef(LogicFileParser::HelperDefContext * /*ctx*/) override { }

  virtual void enterQuantityDef(LogicFileParser::QuantityDefContext * /*ctx*/) override { }
  virtual void exitQuantityDef(LogicFileParser::QuantityDefContext * /*ctx*/) override { }

  virtual void enterLogicValSet(LogicFileParser::LogicValSetContext * /*ctx*/) override { }
  virtual void exitLogicValSet(LogicFileParser::LogicValSetContext * /*ctx*/) override { }

  virtual void enterNameDef(LogicFileParser::NameDefContext * /*ctx*/) override { }
  virtual void exitNameDef(LogicFileParser::NameDefContext * /*ctx*/) override { }

  virtual void enterClassificationDef(LogicFileParser::ClassificationDefContext * /*ctx*/) override { }
  virtual void exitClassificationDef(LogicFileParser::ClassificationDefContext * /*ctx*/) override { }

  virtual void enterItemDef(LogicFileParser::ItemDefContext * /*ctx*/) override { }
  virtual void exitItemDef(LogicFileParser::ItemDefContext * /*ctx*/) override { }

  virtual void enterPresentWhenDef(LogicFileParser::PresentWhenDefContext * /*ctx*/) override { }
  virtual void exitPresentWhenDef(LogicFileParser::PresentWhenDefContext * /*ctx*/) override { }

  virtual void enterRuleDef(LogicFileParser::RuleDefContext * /*ctx*/) override { }
  virtual void exitRuleDef(LogicFileParser::RuleDefContext * /*ctx*/) override { }

  virtual void enterDestDef(LogicFileParser::DestDefContext * /*ctx*/) override { }
  virtual void exitDestDef(LogicFileParser::DestDefContext * /*ctx*/) override { }

  virtual void enterEntranceDef(LogicFileParser::EntranceDefContext * /*ctx*/) override { }
  virtual void exitEntranceDef(LogicFileParser::EntranceDefContext * /*ctx*/) override { }

  virtual void enterLocationDef(LogicFileParser::LocationDefContext * /*ctx*/) override { }
  virtual void exitLocationDef(LogicFileParser::LocationDefContext * /*ctx*/) override { }

  virtual void enterEventDef(LogicFileParser::EventDefContext * /*ctx*/) override { }
  virtual void exitEventDef(LogicFileParser::EventDefContext * /*ctx*/) override { }

  virtual void enterRegionDef(LogicFileParser::RegionDefContext * /*ctx*/) override { }
  virtual void exitRegionDef(LogicFileParser::RegionDefContext * /*ctx*/) override { }

  virtual void enterLogicDef(LogicFileParser::LogicDefContext * /*ctx*/) override { }
  virtual void exitLogicDef(LogicFileParser::LogicDefContext * /*ctx*/) override { }

  virtual void enterOptionsDef(LogicFileParser::OptionsDefContext * /*ctx*/) override { }
  virtual void exitOptionsDef(LogicFileParser::OptionsDefContext * /*ctx*/) override { }

  virtual void enterOptionDefStrings(LogicFileParser::OptionDefStringsContext * /*ctx*/) override { }
  virtual void exitOptionDefStrings(LogicFileParser::OptionDefStringsContext * /*ctx*/) override { }

  virtual void enterOptionDefString(LogicFileParser::OptionDefStringContext * /*ctx*/) override { }
  virtual void exitOptionDefString(LogicFileParser::OptionDefStringContext * /*ctx*/) override { }

  virtual void enterOptionDefIntList(LogicFileParser::OptionDefIntListContext * /*ctx*/) override { }
  virtual void exitOptionDefIntList(LogicFileParser::OptionDefIntListContext * /*ctx*/) override { }

  virtual void enterOptionDefIntRange(LogicFileParser::OptionDefIntRangeContext * /*ctx*/) override { }
  virtual void exitOptionDefIntRange(LogicFileParser::OptionDefIntRangeContext * /*ctx*/) override { }

  virtual void enterOptionDefInt(LogicFileParser::OptionDefIntContext * /*ctx*/) override { }
  virtual void exitOptionDefInt(LogicFileParser::OptionDefIntContext * /*ctx*/) override { }

  virtual void enterOptionDefFloatList(LogicFileParser::OptionDefFloatListContext * /*ctx*/) override { }
  virtual void exitOptionDefFloatList(LogicFileParser::OptionDefFloatListContext * /*ctx*/) override { }

  virtual void enterOptionDefFloatRange(LogicFileParser::OptionDefFloatRangeContext * /*ctx*/) override { }
  virtual void exitOptionDefFloatRange(LogicFileParser::OptionDefFloatRangeContext * /*ctx*/) override { }

  virtual void enterOptionDefFloat(LogicFileParser::OptionDefFloatContext * /*ctx*/) override { }
  virtual void exitOptionDefFloat(LogicFileParser::OptionDefFloatContext * /*ctx*/) override { }

  virtual void enterOptionDefBool(LogicFileParser::OptionDefBoolContext * /*ctx*/) override { }
  virtual void exitOptionDefBool(LogicFileParser::OptionDefBoolContext * /*ctx*/) override { }

  virtual void enterFileDef(LogicFileParser::FileDefContext * /*ctx*/) override { }
  virtual void exitFileDef(LogicFileParser::FileDefContext * /*ctx*/) override { }

  virtual void enterSubOperator(LogicFileParser::SubOperatorContext * /*ctx*/) override { }
  virtual void exitSubOperator(LogicFileParser::SubOperatorContext * /*ctx*/) override { }

  virtual void enterLeftShiftOperator(LogicFileParser::LeftShiftOperatorContext * /*ctx*/) override { }
  virtual void exitLeftShiftOperator(LogicFileParser::LeftShiftOperatorContext * /*ctx*/) override { }

  virtual void enterGeqOperator(LogicFileParser::GeqOperatorContext * /*ctx*/) override { }
  virtual void exitGeqOperator(LogicFileParser::GeqOperatorContext * /*ctx*/) override { }

  virtual void enterEqOperator(LogicFileParser::EqOperatorContext * /*ctx*/) override { }
  virtual void exitEqOperator(LogicFileParser::EqOperatorContext * /*ctx*/) override { }

  virtual void enterBaseFunc(LogicFileParser::BaseFuncContext * /*ctx*/) override { }
  virtual void exitBaseFunc(LogicFileParser::BaseFuncContext * /*ctx*/) override { }

  virtual void enterNeqOperator(LogicFileParser::NeqOperatorContext * /*ctx*/) override { }
  virtual void exitNeqOperator(LogicFileParser::NeqOperatorContext * /*ctx*/) override { }

  virtual void enterTernaryOperator(LogicFileParser::TernaryOperatorContext * /*ctx*/) override { }
  virtual void exitTernaryOperator(LogicFileParser::TernaryOperatorContext * /*ctx*/) override { }

  virtual void enterAndOperator(LogicFileParser::AndOperatorContext * /*ctx*/) override { }
  virtual void exitAndOperator(LogicFileParser::AndOperatorContext * /*ctx*/) override { }

  virtual void enterDivOperator(LogicFileParser::DivOperatorContext * /*ctx*/) override { }
  virtual void exitDivOperator(LogicFileParser::DivOperatorContext * /*ctx*/) override { }

  virtual void enterOrOperator(LogicFileParser::OrOperatorContext * /*ctx*/) override { }
  virtual void exitOrOperator(LogicFileParser::OrOperatorContext * /*ctx*/) override { }

  virtual void enterAddOperator(LogicFileParser::AddOperatorContext * /*ctx*/) override { }
  virtual void exitAddOperator(LogicFileParser::AddOperatorContext * /*ctx*/) override { }

  virtual void enterGeOperator(LogicFileParser::GeOperatorContext * /*ctx*/) override { }
  virtual void exitGeOperator(LogicFileParser::GeOperatorContext * /*ctx*/) override { }

  virtual void enterLeqOperator(LogicFileParser::LeqOperatorContext * /*ctx*/) override { }
  virtual void exitLeqOperator(LogicFileParser::LeqOperatorContext * /*ctx*/) override { }

  virtual void enterNotOperator(LogicFileParser::NotOperatorContext * /*ctx*/) override { }
  virtual void exitNotOperator(LogicFileParser::NotOperatorContext * /*ctx*/) override { }

  virtual void enterRightShiftOperator(LogicFileParser::RightShiftOperatorContext * /*ctx*/) override { }
  virtual void exitRightShiftOperator(LogicFileParser::RightShiftOperatorContext * /*ctx*/) override { }

  virtual void enterMulOperator(LogicFileParser::MulOperatorContext * /*ctx*/) override { }
  virtual void exitMulOperator(LogicFileParser::MulOperatorContext * /*ctx*/) override { }

  virtual void enterLeOperator(LogicFileParser::LeOperatorContext * /*ctx*/) override { }
  virtual void exitLeOperator(LogicFileParser::LeOperatorContext * /*ctx*/) override { }

  virtual void enterModOperator(LogicFileParser::ModOperatorContext * /*ctx*/) override { }
  virtual void exitModOperator(LogicFileParser::ModOperatorContext * /*ctx*/) override { }

  virtual void enterBasefunc(LogicFileParser::BasefuncContext * /*ctx*/) override { }
  virtual void exitBasefunc(LogicFileParser::BasefuncContext * /*ctx*/) override { }

  virtual void enterOptionCheck(LogicFileParser::OptionCheckContext * /*ctx*/) override { }
  virtual void exitOptionCheck(LogicFileParser::OptionCheckContext * /*ctx*/) override { }

  virtual void enterHelperCall(LogicFileParser::HelperCallContext * /*ctx*/) override { }
  virtual void exitHelperCall(LogicFileParser::HelperCallContext * /*ctx*/) override { }

  virtual void enterArgCheck(LogicFileParser::ArgCheckContext * /*ctx*/) override { }
  virtual void exitArgCheck(LogicFileParser::ArgCheckContext * /*ctx*/) override { }

  virtual void enterLogicValCheck(LogicFileParser::LogicValCheckContext * /*ctx*/) override { }
  virtual void exitLogicValCheck(LogicFileParser::LogicValCheckContext * /*ctx*/) override { }

  virtual void enterEventCheck(LogicFileParser::EventCheckContext * /*ctx*/) override { }
  virtual void exitEventCheck(LogicFileParser::EventCheckContext * /*ctx*/) override { }

  virtual void enterCanReachLocCall(LogicFileParser::CanReachLocCallContext * /*ctx*/) override { }
  virtual void exitCanReachLocCall(LogicFileParser::CanReachLocCallContext * /*ctx*/) override { }

  virtual void enterCanReachEntranceCall(LogicFileParser::CanReachEntranceCallContext * /*ctx*/) override { }
  virtual void exitCanReachEntranceCall(LogicFileParser::CanReachEntranceCallContext * /*ctx*/) override { }

  virtual void enterCanReachRegionCall(LogicFileParser::CanReachRegionCallContext * /*ctx*/) override { }
  virtual void exitCanReachRegionCall(LogicFileParser::CanReachRegionCallContext * /*ctx*/) override { }

  virtual void enterHasItemCall(LogicFileParser::HasItemCallContext * /*ctx*/) override { }
  virtual void exitHasItemCall(LogicFileParser::HasItemCallContext * /*ctx*/) override { }

  virtual void enterCountItemCall(LogicFileParser::CountItemCallContext * /*ctx*/) override { }
  virtual void exitCountItemCall(LogicFileParser::CountItemCallContext * /*ctx*/) override { }

  virtual void enterIsDungeonMqCall(LogicFileParser::IsDungeonMqCallContext * /*ctx*/) override { }
  virtual void exitIsDungeonMqCall(LogicFileParser::IsDungeonMqCallContext * /*ctx*/) override { }

  virtual void enterFloorCall(LogicFileParser::FloorCallContext * /*ctx*/) override { }
  virtual void exitFloorCall(LogicFileParser::FloorCallContext * /*ctx*/) override { }

  virtual void enterCeilCall(LogicFileParser::CeilCallContext * /*ctx*/) override { }
  virtual void exitCeilCall(LogicFileParser::CeilCallContext * /*ctx*/) override { }

  virtual void enterValue(LogicFileParser::ValueContext * /*ctx*/) override { }
  virtual void exitValue(LogicFileParser::ValueContext * /*ctx*/) override { }

  virtual void enterParenExpr(LogicFileParser::ParenExprContext * /*ctx*/) override { }
  virtual void exitParenExpr(LogicFileParser::ParenExprContext * /*ctx*/) override { }

  virtual void enterEnumValueRef(LogicFileParser::EnumValueRefContext * /*ctx*/) override { }
  virtual void exitEnumValueRef(LogicFileParser::EnumValueRefContext * /*ctx*/) override { }

  virtual void enterEntranceRef(LogicFileParser::EntranceRefContext * /*ctx*/) override { }
  virtual void exitEntranceRef(LogicFileParser::EntranceRefContext * /*ctx*/) override { }

  virtual void enterRegionRef(LogicFileParser::RegionRefContext * /*ctx*/) override { }
  virtual void exitRegionRef(LogicFileParser::RegionRefContext * /*ctx*/) override { }

  virtual void enterLocRef(LogicFileParser::LocRefContext * /*ctx*/) override { }
  virtual void exitLocRef(LogicFileParser::LocRefContext * /*ctx*/) override { }

  virtual void enterItemRef(LogicFileParser::ItemRefContext * /*ctx*/) override { }
  virtual void exitItemRef(LogicFileParser::ItemRefContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};


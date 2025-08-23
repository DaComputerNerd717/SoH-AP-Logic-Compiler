
// Generated from ../cpp/LogicFileParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  LogicFileParser : public antlr4::Parser {
public:
  enum {
    Comment = 1, MLComment = 2, Bool = 3, Age = 4, SignedNumber = 5, SignedInt = 6, 
    EscapedString = 7, EnumDecPrefix = 8, OBkt = 9, CBkt = 10, OPar = 11, 
    CPar = 12, Comma = 13, OrSymbol = 14, AndSymbol = 15, NotSymbol = 16, 
    NeqSymbol = 17, EqSymbol = 18, GeqSymbol = 19, LeqSymbol = 20, LeSymbol = 21, 
    GrSymbol = 22, AddSymbol = 23, SubSymbol = 24, MulSymbol = 25, DivSymbol = 26, 
    ModSymbol = 27, RSSymbol = 28, LSSymbol = 29, Question = 30, ArgAssign = 31, 
    Dot = 32, OptionCheckKW = 33, HelperCallKW = 34, ArgCheckKW = 35, LogicValCheckKW = 36, 
    EventCheckKW = 37, CanReachLocKW = 38, CanReachEntranceKW = 39, CanReachRegionKW = 40, 
    HasItemKW = 41, CountItemKW = 42, IsMQDungeonKW = 43, FloorKW = 44, 
    CeilKW = 45, EntranceRefKW = 46, RegionRefKW = 47, LocRefKW = 48, ItemRefKW = 49, 
    IfPrefix = 50, ElseIfPrefix = 51, ElsePrefix = 52, SwitchPrefix = 53, 
    SwitchCaseKW = 54, SwitchDefaultKW = 55, SwitchReturnsKW = 56, EOL = 57, 
    WS = 58, HelperPrefix = 59, QuantityPrefix = 60, LogicValSetPrefix = 61, 
    NamePrefix = 62, ClassPrefix = 63, Classification = 64, ItemDefPrefix = 65, 
    PresentWhenPrefix = 66, RulePrefix = 67, DestPrefix = 68, CantCrossChild = 69, 
    CantCrossAdult = 70, EntranceDefPrefix = 71, LocClassDef = 72, LocationPrefix = 73, 
    EventDefPrefix = 74, RegionDefPrefix = 75, LogicPrefix = 76, OptionsDefPrefix = 77, 
    OptionPrefix = 78, StringsPrefix = 79, StringPrefix = 80, IntsPrefix = 81, 
    IntPrefix = 82, FloatsPrefix = 83, FloatPrefix = 84, BoolPrefix = 85, 
    MinKW = 86, MaxKW = 87, Ident = 88, Colon = 89
  };

  enum {
    RuleFileDef = 0, RuleEnumDef = 1, RuleEnumVals = 2, RuleIfBlock = 3, 
    RuleIfContinuation = 4, RuleElseIfBlock = 5, RuleElseBlock = 6, RuleSwitchExpr = 7, 
    RuleReturn_case = 8, RuleCaseList = 9, RuleCaseDef = 10, RuleDefaultCase = 11, 
    RuleArgs = 12, RuleArg = 13, RuleHelperDef = 14, RuleQuantityDef = 15, 
    RuleLogicValSet = 16, RuleNameDef = 17, RuleClassificationDef = 18, 
    RuleItemDef = 19, RulePresentWhenDef = 20, RuleRuleDef = 21, RuleDestDef = 22, 
    RuleEntranceDef = 23, RuleLocationDef = 24, RuleEventDef = 25, RuleRegionDef = 26, 
    RuleLogicDef = 27, RuleOptionsDef = 28, RuleOptionDefStrings = 29, RuleOptionDefString = 30, 
    RuleOptionDefIntList = 31, RuleOptionDefIntRange = 32, RuleOptionDefInt = 33, 
    RuleOptionDefFloatList = 34, RuleOptionDefFloatRange = 35, RuleOptionDefFloat = 36, 
    RuleOptionDefBool = 37, RuleExpr = 38, RuleBasefunc = 39, RuleArg_pass = 40, 
    RuleArgs_pass = 41, RuleOptionCheck = 42, RuleHelperCall = 43, RuleArgCheck = 44, 
    RuleLogicValCheck = 45, RuleEventCheck = 46, RuleCanReachLocCall = 47, 
    RuleCanReachEntranceCall = 48, RuleCanReachRegionCall = 49, RuleHasItemCall = 50, 
    RuleCountItemCall = 51, RuleIsDungeonMqCall = 52, RuleFloorCall = 53, 
    RuleCeilCall = 54, RuleValue = 55, RuleParenExpr = 56, RuleEnumValueRef = 57, 
    RuleEntranceRef = 58, RuleRegionRef = 59, RuleLocRef = 60, RuleItemRef = 61, 
    RuleListSeparator = 62
  };

  explicit LogicFileParser(antlr4::TokenStream *input);

  LogicFileParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~LogicFileParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class FileDefContext;
  class EnumDefContext;
  class EnumValsContext;
  class IfBlockContext;
  class IfContinuationContext;
  class ElseIfBlockContext;
  class ElseBlockContext;
  class SwitchExprContext;
  class Return_caseContext;
  class CaseListContext;
  class CaseDefContext;
  class DefaultCaseContext;
  class ArgsContext;
  class ArgContext;
  class HelperDefContext;
  class QuantityDefContext;
  class LogicValSetContext;
  class NameDefContext;
  class ClassificationDefContext;
  class ItemDefContext;
  class PresentWhenDefContext;
  class RuleDefContext;
  class DestDefContext;
  class EntranceDefContext;
  class LocationDefContext;
  class EventDefContext;
  class RegionDefContext;
  class LogicDefContext;
  class OptionsDefContext;
  class OptionDefStringsContext;
  class OptionDefStringContext;
  class OptionDefIntListContext;
  class OptionDefIntRangeContext;
  class OptionDefIntContext;
  class OptionDefFloatListContext;
  class OptionDefFloatRangeContext;
  class OptionDefFloatContext;
  class OptionDefBoolContext;
  class ExprContext;
  class BasefuncContext;
  class Arg_passContext;
  class Args_passContext;
  class OptionCheckContext;
  class HelperCallContext;
  class ArgCheckContext;
  class LogicValCheckContext;
  class EventCheckContext;
  class CanReachLocCallContext;
  class CanReachEntranceCallContext;
  class CanReachRegionCallContext;
  class HasItemCallContext;
  class CountItemCallContext;
  class IsDungeonMqCallContext;
  class FloorCallContext;
  class CeilCallContext;
  class ValueContext;
  class ParenExprContext;
  class EnumValueRefContext;
  class EntranceRefContext;
  class RegionRefContext;
  class LocRefContext;
  class ItemRefContext;
  class ListSeparatorContext; 

  class  FileDefContext : public antlr4::ParserRuleContext {
  public:
    FileDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<LogicDefContext *> logicDef();
    LogicDefContext* logicDef(size_t i);
    std::vector<OptionsDefContext *> optionsDef();
    OptionsDefContext* optionsDef(size_t i);
    std::vector<EnumDefContext *> enumDef();
    EnumDefContext* enumDef(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EOL();
    antlr4::tree::TerminalNode* EOL(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FileDefContext* fileDef();

  class  EnumDefContext : public antlr4::ParserRuleContext {
  public:
    EnumDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EnumDecPrefix();
    antlr4::tree::TerminalNode *Ident();
    antlr4::tree::TerminalNode *OBkt();
    EnumValsContext *enumVals();
    antlr4::tree::TerminalNode *CBkt();
    std::vector<antlr4::tree::TerminalNode *> EOL();
    antlr4::tree::TerminalNode* EOL(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumDefContext* enumDef();

  class  EnumValsContext : public antlr4::ParserRuleContext {
  public:
    EnumValsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Ident();
    antlr4::tree::TerminalNode* Ident(size_t i);
    std::vector<ListSeparatorContext *> listSeparator();
    ListSeparatorContext* listSeparator(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumValsContext* enumVals();

  class  IfBlockContext : public antlr4::ParserRuleContext {
  public:
    IfBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IfPrefix();
    antlr4::tree::TerminalNode *OPar();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *CPar();
    antlr4::tree::TerminalNode *OBkt();
    antlr4::tree::TerminalNode *CBkt();
    std::vector<antlr4::tree::TerminalNode *> EOL();
    antlr4::tree::TerminalNode* EOL(size_t i);
    IfContinuationContext *ifContinuation();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfBlockContext* ifBlock();

  class  IfContinuationContext : public antlr4::ParserRuleContext {
  public:
    IfContinuationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ElseBlockContext *elseBlock();
    ElseIfBlockContext *elseIfBlock();
    std::vector<antlr4::tree::TerminalNode *> EOL();
    antlr4::tree::TerminalNode* EOL(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfContinuationContext* ifContinuation();

  class  ElseIfBlockContext : public antlr4::ParserRuleContext {
  public:
    ElseIfBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ElseIfPrefix();
    antlr4::tree::TerminalNode *OPar();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *CPar();
    antlr4::tree::TerminalNode *OBkt();
    antlr4::tree::TerminalNode *CBkt();
    std::vector<antlr4::tree::TerminalNode *> EOL();
    antlr4::tree::TerminalNode* EOL(size_t i);
    IfContinuationContext *ifContinuation();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElseIfBlockContext* elseIfBlock();

  class  ElseBlockContext : public antlr4::ParserRuleContext {
  public:
    ElseBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ElsePrefix();
    antlr4::tree::TerminalNode *OBkt();
    ExprContext *expr();
    antlr4::tree::TerminalNode *CBkt();
    std::vector<antlr4::tree::TerminalNode *> EOL();
    antlr4::tree::TerminalNode* EOL(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElseBlockContext* elseBlock();

  class  SwitchExprContext : public antlr4::ParserRuleContext {
  public:
    SwitchExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SwitchPrefix();
    ExprContext *expr();
    antlr4::tree::TerminalNode *OBkt();
    CaseListContext *caseList();
    antlr4::tree::TerminalNode *CBkt();
    Return_caseContext *return_case();
    std::vector<antlr4::tree::TerminalNode *> EOL();
    antlr4::tree::TerminalNode* EOL(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SwitchExprContext* switchExpr();

  class  Return_caseContext : public antlr4::ParserRuleContext {
  public:
    Return_caseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SwitchReturnsKW();
    antlr4::tree::TerminalNode *Bool();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Return_caseContext* return_case();

  class  CaseListContext : public antlr4::ParserRuleContext {
  public:
    CaseListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CaseDefContext *> caseDef();
    CaseDefContext* caseDef(size_t i);
    std::vector<DefaultCaseContext *> defaultCase();
    DefaultCaseContext* defaultCase(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CaseListContext* caseList();

  class  CaseDefContext : public antlr4::ParserRuleContext {
  public:
    CaseDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SwitchCaseKW();
    antlr4::tree::TerminalNode *Colon();
    ValueContext *value();
    antlr4::tree::TerminalNode *Ident();
    std::vector<antlr4::tree::TerminalNode *> EOL();
    antlr4::tree::TerminalNode* EOL(size_t i);
    ExprContext *expr();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CaseDefContext* caseDef();

  class  DefaultCaseContext : public antlr4::ParserRuleContext {
  public:
    DefaultCaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SwitchDefaultKW();
    antlr4::tree::TerminalNode *Colon();
    ExprContext *expr();
    std::vector<antlr4::tree::TerminalNode *> EOL();
    antlr4::tree::TerminalNode* EOL(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefaultCaseContext* defaultCase();

  class  ArgsContext : public antlr4::ParserRuleContext {
  public:
    ArgsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArgContext *> arg();
    ArgContext* arg(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EOL();
    antlr4::tree::TerminalNode* EOL(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgsContext* args();

  class  ArgContext : public antlr4::ParserRuleContext {
  public:
    ArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Ident();
    antlr4::tree::TerminalNode* Ident(size_t i);
    antlr4::tree::TerminalNode *ArgAssign();
    ExprContext *expr();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgContext* arg();

  class  HelperDefContext : public antlr4::ParserRuleContext {
  public:
    HelperDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HelperPrefix();
    antlr4::tree::TerminalNode *Ident();
    antlr4::tree::TerminalNode *OPar();
    ArgsContext *args();
    antlr4::tree::TerminalNode *CPar();
    antlr4::tree::TerminalNode *OBkt();
    ExprContext *expr();
    antlr4::tree::TerminalNode *CBkt();
    antlr4::tree::TerminalNode *Colon();
    std::vector<antlr4::tree::TerminalNode *> EOL();
    antlr4::tree::TerminalNode* EOL(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HelperDefContext* helperDef();

  class  QuantityDefContext : public antlr4::ParserRuleContext {
  public:
    QuantityDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QuantityPrefix();
    ExprContext *expr();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QuantityDefContext* quantityDef();

  class  LogicValSetContext : public antlr4::ParserRuleContext {
  public:
    LogicValSetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LogicValSetPrefix();
    antlr4::tree::TerminalNode *Ident();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicValSetContext* logicValSet();

  class  NameDefContext : public antlr4::ParserRuleContext {
  public:
    NameDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NamePrefix();
    antlr4::tree::TerminalNode *EscapedString();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NameDefContext* nameDef();

  class  ClassificationDefContext : public antlr4::ParserRuleContext {
  public:
    ClassificationDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ClassPrefix();
    antlr4::tree::TerminalNode *Classification();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassificationDefContext* classificationDef();

  class  ItemDefContext : public antlr4::ParserRuleContext {
  public:
    ItemDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ItemDefPrefix();
    antlr4::tree::TerminalNode *Ident();
    antlr4::tree::TerminalNode *OBkt();
    antlr4::tree::TerminalNode *CBkt();
    antlr4::tree::TerminalNode *Colon();
    std::vector<antlr4::tree::TerminalNode *> EOL();
    antlr4::tree::TerminalNode* EOL(size_t i);
    std::vector<LogicValSetContext *> logicValSet();
    LogicValSetContext* logicValSet(size_t i);
    std::vector<NameDefContext *> nameDef();
    NameDefContext* nameDef(size_t i);
    std::vector<ClassificationDefContext *> classificationDef();
    ClassificationDefContext* classificationDef(size_t i);
    std::vector<QuantityDefContext *> quantityDef();
    QuantityDefContext* quantityDef(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ItemDefContext* itemDef();

  class  PresentWhenDefContext : public antlr4::ParserRuleContext {
  public:
    PresentWhenDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PresentWhenPrefix();
    ExprContext *expr();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PresentWhenDefContext* presentWhenDef();

  class  RuleDefContext : public antlr4::ParserRuleContext {
  public:
    RuleDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RulePrefix();
    ExprContext *expr();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RuleDefContext* ruleDef();

  class  DestDefContext : public antlr4::ParserRuleContext {
  public:
    DestDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DestPrefix();
    antlr4::tree::TerminalNode *Ident();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DestDefContext* destDef();

  class  EntranceDefContext : public antlr4::ParserRuleContext {
  public:
    EntranceDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EntranceDefPrefix();
    antlr4::tree::TerminalNode *Ident();
    antlr4::tree::TerminalNode *OBkt();
    antlr4::tree::TerminalNode *CBkt();
    antlr4::tree::TerminalNode *Colon();
    std::vector<antlr4::tree::TerminalNode *> EOL();
    antlr4::tree::TerminalNode* EOL(size_t i);
    std::vector<NameDefContext *> nameDef();
    NameDefContext* nameDef(size_t i);
    std::vector<PresentWhenDefContext *> presentWhenDef();
    PresentWhenDefContext* presentWhenDef(size_t i);
    std::vector<RuleDefContext *> ruleDef();
    RuleDefContext* ruleDef(size_t i);
    std::vector<DestDefContext *> destDef();
    DestDefContext* destDef(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CantCrossAdult();
    antlr4::tree::TerminalNode* CantCrossAdult(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CantCrossChild();
    antlr4::tree::TerminalNode* CantCrossChild(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EntranceDefContext* entranceDef();

  class  LocationDefContext : public antlr4::ParserRuleContext {
  public:
    LocationDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LocationPrefix();
    antlr4::tree::TerminalNode *Ident();
    antlr4::tree::TerminalNode *OBkt();
    antlr4::tree::TerminalNode *CBkt();
    antlr4::tree::TerminalNode *Colon();
    std::vector<antlr4::tree::TerminalNode *> EOL();
    antlr4::tree::TerminalNode* EOL(size_t i);
    std::vector<NameDefContext *> nameDef();
    NameDefContext* nameDef(size_t i);
    std::vector<RuleDefContext *> ruleDef();
    RuleDefContext* ruleDef(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LocClassDef();
    antlr4::tree::TerminalNode* LocClassDef(size_t i);
    std::vector<PresentWhenDefContext *> presentWhenDef();
    PresentWhenDefContext* presentWhenDef(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LocationDefContext* locationDef();

  class  EventDefContext : public antlr4::ParserRuleContext {
  public:
    EventDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EventDefPrefix();
    antlr4::tree::TerminalNode *Colon();
    ExprContext *expr();
    antlr4::tree::TerminalNode *Ident();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EventDefContext* eventDef();

  class  RegionDefContext : public antlr4::ParserRuleContext {
  public:
    RegionDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RegionDefPrefix();
    antlr4::tree::TerminalNode *Ident();
    antlr4::tree::TerminalNode *OBkt();
    antlr4::tree::TerminalNode *CBkt();
    antlr4::tree::TerminalNode *Colon();
    std::vector<antlr4::tree::TerminalNode *> EOL();
    antlr4::tree::TerminalNode* EOL(size_t i);
    std::vector<NameDefContext *> nameDef();
    NameDefContext* nameDef(size_t i);
    std::vector<LocationDefContext *> locationDef();
    LocationDefContext* locationDef(size_t i);
    std::vector<EntranceDefContext *> entranceDef();
    EntranceDefContext* entranceDef(size_t i);
    std::vector<EventDefContext *> eventDef();
    EventDefContext* eventDef(size_t i);
    std::vector<PresentWhenDefContext *> presentWhenDef();
    PresentWhenDefContext* presentWhenDef(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RegionDefContext* regionDef();

  class  LogicDefContext : public antlr4::ParserRuleContext {
  public:
    LogicDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LogicPrefix();
    antlr4::tree::TerminalNode *OBkt();
    antlr4::tree::TerminalNode *CBkt();
    antlr4::tree::TerminalNode *Colon();
    std::vector<antlr4::tree::TerminalNode *> EOL();
    antlr4::tree::TerminalNode* EOL(size_t i);
    std::vector<RegionDefContext *> regionDef();
    RegionDefContext* regionDef(size_t i);
    std::vector<ItemDefContext *> itemDef();
    ItemDefContext* itemDef(size_t i);
    std::vector<HelperDefContext *> helperDef();
    HelperDefContext* helperDef(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicDefContext* logicDef();

  class  OptionsDefContext : public antlr4::ParserRuleContext {
  public:
    OptionsDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OptionsDefPrefix();
    antlr4::tree::TerminalNode *OBkt();
    antlr4::tree::TerminalNode *CBkt();
    antlr4::tree::TerminalNode *Colon();
    std::vector<antlr4::tree::TerminalNode *> EOL();
    antlr4::tree::TerminalNode* EOL(size_t i);
    std::vector<OptionDefStringsContext *> optionDefStrings();
    OptionDefStringsContext* optionDefStrings(size_t i);
    std::vector<OptionDefIntRangeContext *> optionDefIntRange();
    OptionDefIntRangeContext* optionDefIntRange(size_t i);
    std::vector<OptionDefIntListContext *> optionDefIntList();
    OptionDefIntListContext* optionDefIntList(size_t i);
    std::vector<OptionDefFloatRangeContext *> optionDefFloatRange();
    OptionDefFloatRangeContext* optionDefFloatRange(size_t i);
    std::vector<OptionDefFloatListContext *> optionDefFloatList();
    OptionDefFloatListContext* optionDefFloatList(size_t i);
    std::vector<OptionDefIntContext *> optionDefInt();
    OptionDefIntContext* optionDefInt(size_t i);
    std::vector<OptionDefFloatContext *> optionDefFloat();
    OptionDefFloatContext* optionDefFloat(size_t i);
    std::vector<OptionDefStringContext *> optionDefString();
    OptionDefStringContext* optionDefString(size_t i);
    std::vector<OptionDefBoolContext *> optionDefBool();
    OptionDefBoolContext* optionDefBool(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionsDefContext* optionsDef();

  class  OptionDefStringsContext : public antlr4::ParserRuleContext {
  public:
    OptionDefStringsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OptionPrefix();
    antlr4::tree::TerminalNode *StringsPrefix();
    antlr4::tree::TerminalNode *Ident();
    antlr4::tree::TerminalNode *OBkt();
    antlr4::tree::TerminalNode *CBkt();
    antlr4::tree::TerminalNode *Colon();
    std::vector<antlr4::tree::TerminalNode *> EOL();
    antlr4::tree::TerminalNode* EOL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EscapedString();
    antlr4::tree::TerminalNode* EscapedString(size_t i);
    std::vector<ListSeparatorContext *> listSeparator();
    ListSeparatorContext* listSeparator(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionDefStringsContext* optionDefStrings();

  class  OptionDefStringContext : public antlr4::ParserRuleContext {
  public:
    OptionDefStringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OptionPrefix();
    antlr4::tree::TerminalNode *StringPrefix();
    antlr4::tree::TerminalNode *Ident();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionDefStringContext* optionDefString();

  class  OptionDefIntListContext : public antlr4::ParserRuleContext {
  public:
    OptionDefIntListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OptionPrefix();
    antlr4::tree::TerminalNode *IntsPrefix();
    antlr4::tree::TerminalNode *Ident();
    antlr4::tree::TerminalNode *OBkt();
    antlr4::tree::TerminalNode *CBkt();
    antlr4::tree::TerminalNode *Colon();
    std::vector<antlr4::tree::TerminalNode *> EOL();
    antlr4::tree::TerminalNode* EOL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SignedInt();
    antlr4::tree::TerminalNode* SignedInt(size_t i);
    ListSeparatorContext *listSeparator();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionDefIntListContext* optionDefIntList();

  class  OptionDefIntRangeContext : public antlr4::ParserRuleContext {
  public:
    OptionDefIntRangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OptionPrefix();
    antlr4::tree::TerminalNode *IntsPrefix();
    antlr4::tree::TerminalNode *Ident();
    antlr4::tree::TerminalNode *OBkt();
    antlr4::tree::TerminalNode *MinKW();
    std::vector<antlr4::tree::TerminalNode *> Colon();
    antlr4::tree::TerminalNode* Colon(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SignedInt();
    antlr4::tree::TerminalNode* SignedInt(size_t i);
    ListSeparatorContext *listSeparator();
    antlr4::tree::TerminalNode *MaxKW();
    antlr4::tree::TerminalNode *CBkt();
    std::vector<antlr4::tree::TerminalNode *> EOL();
    antlr4::tree::TerminalNode* EOL(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionDefIntRangeContext* optionDefIntRange();

  class  OptionDefIntContext : public antlr4::ParserRuleContext {
  public:
    OptionDefIntContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OptionPrefix();
    antlr4::tree::TerminalNode *IntPrefix();
    antlr4::tree::TerminalNode *Ident();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionDefIntContext* optionDefInt();

  class  OptionDefFloatListContext : public antlr4::ParserRuleContext {
  public:
    OptionDefFloatListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OptionPrefix();
    antlr4::tree::TerminalNode *FloatsPrefix();
    antlr4::tree::TerminalNode *Ident();
    antlr4::tree::TerminalNode *OBkt();
    antlr4::tree::TerminalNode *CBkt();
    antlr4::tree::TerminalNode *Colon();
    std::vector<antlr4::tree::TerminalNode *> EOL();
    antlr4::tree::TerminalNode* EOL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SignedNumber();
    antlr4::tree::TerminalNode* SignedNumber(size_t i);
    std::vector<ListSeparatorContext *> listSeparator();
    ListSeparatorContext* listSeparator(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionDefFloatListContext* optionDefFloatList();

  class  OptionDefFloatRangeContext : public antlr4::ParserRuleContext {
  public:
    OptionDefFloatRangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OptionPrefix();
    antlr4::tree::TerminalNode *FloatsPrefix();
    antlr4::tree::TerminalNode *Ident();
    antlr4::tree::TerminalNode *OBkt();
    antlr4::tree::TerminalNode *MinKW();
    std::vector<antlr4::tree::TerminalNode *> Colon();
    antlr4::tree::TerminalNode* Colon(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SignedNumber();
    antlr4::tree::TerminalNode* SignedNumber(size_t i);
    ListSeparatorContext *listSeparator();
    antlr4::tree::TerminalNode *MaxKW();
    antlr4::tree::TerminalNode *CBkt();
    std::vector<antlr4::tree::TerminalNode *> EOL();
    antlr4::tree::TerminalNode* EOL(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionDefFloatRangeContext* optionDefFloatRange();

  class  OptionDefFloatContext : public antlr4::ParserRuleContext {
  public:
    OptionDefFloatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OptionPrefix();
    antlr4::tree::TerminalNode *FloatPrefix();
    antlr4::tree::TerminalNode *Ident();
    antlr4::tree::TerminalNode *Colon();
    antlr4::tree::TerminalNode *SignedNumber();
    std::vector<antlr4::tree::TerminalNode *> EOL();
    antlr4::tree::TerminalNode* EOL(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionDefFloatContext* optionDefFloat();

  class  OptionDefBoolContext : public antlr4::ParserRuleContext {
  public:
    OptionDefBoolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OptionPrefix();
    antlr4::tree::TerminalNode *BoolPrefix();
    antlr4::tree::TerminalNode *Ident();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionDefBoolContext* optionDefBool();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() = default;
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SubOperatorContext : public ExprContext {
  public:
    SubOperatorContext(ExprContext *ctx);

    LogicFileParser::ExprContext *left = nullptr;
    antlr4::Token *op = nullptr;
    LogicFileParser::ExprContext *right = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *SubSymbol();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LeftShiftOperatorContext : public ExprContext {
  public:
    LeftShiftOperatorContext(ExprContext *ctx);

    LogicFileParser::ExprContext *left = nullptr;
    antlr4::Token *op = nullptr;
    LogicFileParser::ExprContext *right = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *LSSymbol();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  GeqOperatorContext : public ExprContext {
  public:
    GeqOperatorContext(ExprContext *ctx);

    LogicFileParser::ExprContext *left = nullptr;
    antlr4::Token *op = nullptr;
    LogicFileParser::ExprContext *right = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *GeqSymbol();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EqOperatorContext : public ExprContext {
  public:
    EqOperatorContext(ExprContext *ctx);

    LogicFileParser::ExprContext *left = nullptr;
    antlr4::Token *op = nullptr;
    LogicFileParser::ExprContext *right = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *EqSymbol();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  GrOperatorContext : public ExprContext {
  public:
    GrOperatorContext(ExprContext *ctx);

    LogicFileParser::ExprContext *left = nullptr;
    antlr4::Token *op = nullptr;
    LogicFileParser::ExprContext *right = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *GrSymbol();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BaseFuncContext : public ExprContext {
  public:
    BaseFuncContext(ExprContext *ctx);

    BasefuncContext *basefunc();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NeqOperatorContext : public ExprContext {
  public:
    NeqOperatorContext(ExprContext *ctx);

    LogicFileParser::ExprContext *left = nullptr;
    antlr4::Token *op = nullptr;
    LogicFileParser::ExprContext *right = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *NeqSymbol();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LineSkipContext : public ExprContext {
  public:
    LineSkipContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *EOL();
    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TernaryOperatorContext : public ExprContext {
  public:
    TernaryOperatorContext(ExprContext *ctx);

    LogicFileParser::ExprContext *left = nullptr;
    antlr4::Token *op = nullptr;
    LogicFileParser::ExprContext *right = nullptr;
    antlr4::tree::TerminalNode *Colon();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *Question();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AndOperatorContext : public ExprContext {
  public:
    AndOperatorContext(ExprContext *ctx);

    LogicFileParser::ExprContext *left = nullptr;
    antlr4::Token *op = nullptr;
    LogicFileParser::ExprContext *right = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *AndSymbol();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DivOperatorContext : public ExprContext {
  public:
    DivOperatorContext(ExprContext *ctx);

    LogicFileParser::ExprContext *left = nullptr;
    antlr4::Token *op = nullptr;
    LogicFileParser::ExprContext *right = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *DivSymbol();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OrOperatorContext : public ExprContext {
  public:
    OrOperatorContext(ExprContext *ctx);

    LogicFileParser::ExprContext *left = nullptr;
    antlr4::Token *op = nullptr;
    LogicFileParser::ExprContext *right = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *OrSymbol();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AddOperatorContext : public ExprContext {
  public:
    AddOperatorContext(ExprContext *ctx);

    LogicFileParser::ExprContext *left = nullptr;
    antlr4::Token *op = nullptr;
    LogicFileParser::ExprContext *right = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *AddSymbol();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LeqOperatorContext : public ExprContext {
  public:
    LeqOperatorContext(ExprContext *ctx);

    LogicFileParser::ExprContext *left = nullptr;
    antlr4::Token *op = nullptr;
    LogicFileParser::ExprContext *right = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *LeqSymbol();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NotOperatorContext : public ExprContext {
  public:
    NotOperatorContext(ExprContext *ctx);

    antlr4::Token *prefix = nullptr;
    ExprContext *expr();
    antlr4::tree::TerminalNode *NotSymbol();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RightShiftOperatorContext : public ExprContext {
  public:
    RightShiftOperatorContext(ExprContext *ctx);

    LogicFileParser::ExprContext *left = nullptr;
    antlr4::Token *op = nullptr;
    LogicFileParser::ExprContext *right = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *RSSymbol();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MulOperatorContext : public ExprContext {
  public:
    MulOperatorContext(ExprContext *ctx);

    LogicFileParser::ExprContext *left = nullptr;
    antlr4::Token *op = nullptr;
    LogicFileParser::ExprContext *right = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *MulSymbol();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LeOperatorContext : public ExprContext {
  public:
    LeOperatorContext(ExprContext *ctx);

    LogicFileParser::ExprContext *left = nullptr;
    antlr4::Token *op = nullptr;
    LogicFileParser::ExprContext *right = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *LeSymbol();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ModOperatorContext : public ExprContext {
  public:
    ModOperatorContext(ExprContext *ctx);

    LogicFileParser::ExprContext *left = nullptr;
    antlr4::Token *op = nullptr;
    LogicFileParser::ExprContext *right = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *ModSymbol();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  BasefuncContext : public antlr4::ParserRuleContext {
  public:
    BasefuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OptionCheckContext *optionCheck();
    HelperCallContext *helperCall();
    ArgCheckContext *argCheck();
    LogicValCheckContext *logicValCheck();
    EventCheckContext *eventCheck();
    CanReachLocCallContext *canReachLocCall();
    CanReachEntranceCallContext *canReachEntranceCall();
    CanReachRegionCallContext *canReachRegionCall();
    HasItemCallContext *hasItemCall();
    CountItemCallContext *countItemCall();
    IsDungeonMqCallContext *isDungeonMqCall();
    FloorCallContext *floorCall();
    CeilCallContext *ceilCall();
    SwitchExprContext *switchExpr();
    IfBlockContext *ifBlock();
    ValueContext *value();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BasefuncContext* basefunc();

  class  Arg_passContext : public antlr4::ParserRuleContext {
  public:
    Arg_passContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    std::vector<antlr4::tree::TerminalNode *> Ident();
    antlr4::tree::TerminalNode* Ident(size_t i);
    antlr4::tree::TerminalNode *ArgAssign();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Arg_passContext* arg_pass();

  class  Args_passContext : public antlr4::ParserRuleContext {
  public:
    Args_passContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Arg_passContext *> arg_pass();
    Arg_passContext* arg_pass(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Args_passContext* args_pass();

  class  OptionCheckContext : public antlr4::ParserRuleContext {
  public:
    OptionCheckContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OptionCheckKW();
    antlr4::tree::TerminalNode *Ident();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionCheckContext* optionCheck();

  class  HelperCallContext : public antlr4::ParserRuleContext {
  public:
    HelperCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HelperCallKW();
    antlr4::tree::TerminalNode *Ident();
    antlr4::tree::TerminalNode *OPar();
    Args_passContext *args_pass();
    antlr4::tree::TerminalNode *CPar();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HelperCallContext* helperCall();

  class  ArgCheckContext : public antlr4::ParserRuleContext {
  public:
    ArgCheckContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ArgCheckKW();
    antlr4::tree::TerminalNode *Ident();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgCheckContext* argCheck();

  class  LogicValCheckContext : public antlr4::ParserRuleContext {
  public:
    LogicValCheckContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LogicValCheckKW();
    antlr4::tree::TerminalNode *Dot();
    antlr4::tree::TerminalNode *Ident();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicValCheckContext* logicValCheck();

  class  EventCheckContext : public antlr4::ParserRuleContext {
  public:
    EventCheckContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EventCheckKW();
    antlr4::tree::TerminalNode *Ident();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EventCheckContext* eventCheck();

  class  CanReachLocCallContext : public antlr4::ParserRuleContext {
  public:
    CanReachLocCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CanReachLocKW();
    antlr4::tree::TerminalNode *OPar();
    antlr4::tree::TerminalNode *Ident();
    antlr4::tree::TerminalNode *CPar();
    antlr4::tree::TerminalNode *Comma();
    antlr4::tree::TerminalNode *Age();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CanReachLocCallContext* canReachLocCall();

  class  CanReachEntranceCallContext : public antlr4::ParserRuleContext {
  public:
    CanReachEntranceCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CanReachEntranceKW();
    antlr4::tree::TerminalNode *OPar();
    antlr4::tree::TerminalNode *Ident();
    antlr4::tree::TerminalNode *CPar();
    antlr4::tree::TerminalNode *Comma();
    antlr4::tree::TerminalNode *Age();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CanReachEntranceCallContext* canReachEntranceCall();

  class  CanReachRegionCallContext : public antlr4::ParserRuleContext {
  public:
    CanReachRegionCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CanReachRegionKW();
    antlr4::tree::TerminalNode *OPar();
    antlr4::tree::TerminalNode *Ident();
    antlr4::tree::TerminalNode *CPar();
    antlr4::tree::TerminalNode *Comma();
    antlr4::tree::TerminalNode *Age();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CanReachRegionCallContext* canReachRegionCall();

  class  HasItemCallContext : public antlr4::ParserRuleContext {
  public:
    HasItemCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HasItemKW();
    antlr4::tree::TerminalNode *OPar();
    antlr4::tree::TerminalNode *Ident();
    antlr4::tree::TerminalNode *CPar();
    antlr4::tree::TerminalNode *Comma();
    ExprContext *expr();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HasItemCallContext* hasItemCall();

  class  CountItemCallContext : public antlr4::ParserRuleContext {
  public:
    CountItemCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CountItemKW();
    antlr4::tree::TerminalNode *OPar();
    antlr4::tree::TerminalNode *Ident();
    antlr4::tree::TerminalNode *CPar();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CountItemCallContext* countItemCall();

  class  IsDungeonMqCallContext : public antlr4::ParserRuleContext {
  public:
    IsDungeonMqCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IsMQDungeonKW();
    antlr4::tree::TerminalNode *OPar();
    antlr4::tree::TerminalNode *Ident();
    antlr4::tree::TerminalNode *CPar();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IsDungeonMqCallContext* isDungeonMqCall();

  class  FloorCallContext : public antlr4::ParserRuleContext {
  public:
    FloorCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FloorKW();
    antlr4::tree::TerminalNode *OPar();
    ExprContext *expr();
    antlr4::tree::TerminalNode *CPar();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FloorCallContext* floorCall();

  class  CeilCallContext : public antlr4::ParserRuleContext {
  public:
    CeilCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CeilKW();
    antlr4::tree::TerminalNode *OPar();
    ExprContext *expr();
    antlr4::tree::TerminalNode *CPar();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CeilCallContext* ceilCall();

  class  ValueContext : public antlr4::ParserRuleContext {
  public:
    ValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParenExprContext *parenExpr();
    antlr4::tree::TerminalNode *Bool();
    antlr4::tree::TerminalNode *SignedNumber();
    EnumValueRefContext *enumValueRef();
    EntranceRefContext *entranceRef();
    RegionRefContext *regionRef();
    LocRefContext *locRef();
    ItemRefContext *itemRef();
    antlr4::tree::TerminalNode *EscapedString();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValueContext* value();

  class  ParenExprContext : public antlr4::ParserRuleContext {
  public:
    ParenExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPar();
    ExprContext *expr();
    antlr4::tree::TerminalNode *CPar();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParenExprContext* parenExpr();

  class  EnumValueRefContext : public antlr4::ParserRuleContext {
  public:
    EnumValueRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Ident();
    antlr4::tree::TerminalNode* Ident(size_t i);
    antlr4::tree::TerminalNode *Colon();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumValueRefContext* enumValueRef();

  class  EntranceRefContext : public antlr4::ParserRuleContext {
  public:
    EntranceRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EntranceRefKW();
    antlr4::tree::TerminalNode *Ident();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EntranceRefContext* entranceRef();

  class  RegionRefContext : public antlr4::ParserRuleContext {
  public:
    RegionRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RegionRefKW();
    antlr4::tree::TerminalNode *Ident();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RegionRefContext* regionRef();

  class  LocRefContext : public antlr4::ParserRuleContext {
  public:
    LocRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LocRefKW();
    antlr4::tree::TerminalNode *Ident();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LocRefContext* locRef();

  class  ItemRefContext : public antlr4::ParserRuleContext {
  public:
    ItemRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ItemRefKW();
    antlr4::tree::TerminalNode *Ident();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ItemRefContext* itemRef();

  class  ListSeparatorContext : public antlr4::ParserRuleContext {
  public:
    ListSeparatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Comma();
    std::vector<antlr4::tree::TerminalNode *> EOL();
    antlr4::tree::TerminalNode* EOL(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ListSeparatorContext* listSeparator();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};


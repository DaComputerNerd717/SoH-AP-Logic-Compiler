
// Generated from LogicFileParser.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"




class  LogicFileParser : public antlr4::Parser {
public:
  enum {
    Ident = 1, Bool = 2, Age = 3, SignedNumber = 4, SignedInt = 5, EscapedString = 6, 
    EnumDecPrefix = 7, OBkt = 8, CBkt = 9, OPar = 10, CPar = 11, Comma = 12, 
    EOL = 13, OrSymbol = 14, AndSymbol = 15, NotSymbol = 16, NeqSymbol = 17, 
    EqSymbol = 18, GeqSymbol = 19, LeqSymbol = 20, LeSymbol = 21, GeSymbol = 22, 
    AddSymbol = 23, SubSymbol = 24, MulSymbol = 25, DivSymbol = 26, ModSymbol = 27, 
    RSSymbol = 28, LSSymbol = 29, Question = 30, Colon = 31, ColonNoSpace = 32, 
    ArgAssign = 33, OptionCheckKW = 34, HelperCallKW = 35, ArgCheckKW = 36, 
    LogicValCheckKW = 37, EventCheckKW = 38, CanReachLocKW = 39, CanReachEntranceKW = 40, 
    CanReachRegionKW = 41, HasItemKW = 42, CountItemKW = 43, IsMQDungeonKW = 44, 
    FloorKW = 45, CeilKW = 46, EntranceRefKW = 47, RegionRefKW = 48, LocRefKW = 49, 
    ItemRefKW = 50, IfPrefix = 51, ElseIfPrefix = 52, ElsePrefix = 53, SwitchPrefix = 54, 
    SwitchCaseKW = 55, SwitchDefaultKW = 56, SwitchReturnsKW = 57, WS = 58, 
    D = 59, AnyWS = 60, HelperPrefix = 61, QuantityPrefix = 62, LogicValSetPrefix = 63, 
    NamePrefix = 64, ClassPrefix = 65, Classification = 66, ItemDefPrefix = 67, 
    PresentWhenPrefix = 68, RulePrefix = 69, DestPrefix = 70, CantCrossChild = 71, 
    CantCrossAdult = 72, EntranceDefPrefix = 73, LocClassDef = 74, LocationPrefix = 75, 
    EventDefPrefix = 76, RegionDefPrefix = 77, LogicPrefix = 78, OptionsDefPrefix = 79, 
    OptionStringsPrefix = 80, OptionStringPrefix = 81, OptionIntsPrefix = 82, 
    OptionIntPrefix = 83, OptionFloatsPrefix = 84, OptionFloatPrefix = 85, 
    OptionBoolPrefix = 86, MinKW = 87, MaxKW = 88, ListSeparator = 89
  };

  enum {
    RuleEnumDef = 0, RuleEnumVals = 1, RuleIfBlock = 2, RuleIfContinuation = 3, 
    RuleElseIfBlock = 4, RuleElseBlock = 5, RuleSwitchExpr = 6, RuleReturn_case = 7, 
    RuleCaseList = 8, RuleCaseDef = 9, RuleDefaultCase = 10, RuleArgs = 11, 
    RuleArg = 12, RuleHelperDef = 13, RuleQuantityDef = 14, RuleLogicValSet = 15, 
    RuleNameDef = 16, RuleClassificationDef = 17, RuleItemDef = 18, RulePresentWhenDef = 19, 
    RuleRuleDef = 20, RuleDestDef = 21, RuleEntranceDef = 22, RuleLocationDef = 23, 
    RuleEventDef = 24, RuleRegionDef = 25, RuleLogicDef = 26, RuleOptionsDef = 27, 
    RuleOptionDefStrings = 28, RuleOptionDefString = 29, RuleOptionDefIntList = 30, 
    RuleOptionDefIntRange = 31, RuleOptionDefInt = 32, RuleOptionDefFloatList = 33, 
    RuleOptionDefFloatRange = 34, RuleOptionDefFloat = 35, RuleOptionDefBool = 36, 
    RuleFileDef = 37, RuleExpr = 38, RuleBasefunc = 39, RuleOptionCheck = 40, 
    RuleHelperCall = 41, RuleArgCheck = 42, RuleLogicValCheck = 43, RuleEventCheck = 44, 
    RuleCanReachLocCall = 45, RuleCanReachEntranceCall = 46, RuleCanReachRegionCall = 47, 
    RuleHasItemCall = 48, RuleCountItemCall = 49, RuleIsDungeonMqCall = 50, 
    RuleFloorCall = 51, RuleCeilCall = 52, RuleValue = 53, RuleParenExpr = 54, 
    RuleEnumValueRef = 55, RuleEntranceRef = 56, RuleRegionRef = 57, RuleLocRef = 58, 
    RuleItemRef = 59
  };

  explicit LogicFileParser(antlr4::TokenStream *input);
  ~LogicFileParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


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
  class FileDefContext;
  class ExprContext;
  class BasefuncContext;
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

  class  EnumDefContext : public antlr4::ParserRuleContext {
  public:
    EnumDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EnumDecPrefix();
    antlr4::tree::TerminalNode *Ident();
    antlr4::tree::TerminalNode *OBkt();
    antlr4::tree::TerminalNode *CBkt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumDefContext* enumDef();

  class  EnumValsContext : public antlr4::ParserRuleContext {
  public:
    EnumValsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Ident();
    antlr4::tree::TerminalNode* Ident(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EOL();
    antlr4::tree::TerminalNode* EOL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumValsContext* enumVals();

  class  IfBlockContext : public antlr4::ParserRuleContext {
  public:
    IfBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IfPrefix();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *CPar();
    antlr4::tree::TerminalNode *OBkt();
    antlr4::tree::TerminalNode *CBkt();
    antlr4::tree::TerminalNode *AnyWS();
    IfContinuationContext *ifContinuation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IfBlockContext* ifBlock();

  class  IfContinuationContext : public antlr4::ParserRuleContext {
  public:
    IfContinuationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ElseBlockContext *elseBlock();
    ElseIfBlockContext *elseIfBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IfContinuationContext* ifContinuation();

  class  ElseIfBlockContext : public antlr4::ParserRuleContext {
  public:
    ElseIfBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ElseIfPrefix();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *CPar();
    antlr4::tree::TerminalNode *OBkt();
    antlr4::tree::TerminalNode *CBkt();
    antlr4::tree::TerminalNode *AnyWS();
    IfContinuationContext *ifContinuation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElseIfBlockContext* elseIfBlock();

  class  ElseBlockContext : public antlr4::ParserRuleContext {
  public:
    ElseBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ElsePrefix();
    ExprContext *expr();
    antlr4::tree::TerminalNode *CBkt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SwitchExprContext* switchExpr();

  class  Return_caseContext : public antlr4::ParserRuleContext {
  public:
    Return_caseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SwitchReturnsKW();
    antlr4::tree::TerminalNode *Bool();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CaseListContext* caseList();

  class  CaseDefContext : public antlr4::ParserRuleContext {
  public:
    CaseDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SwitchCaseKW();
    ValueContext *value();
    antlr4::tree::TerminalNode *Colon();
    ExprContext *expr();
    std::vector<antlr4::tree::TerminalNode *> EOL();
    antlr4::tree::TerminalNode* EOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
    std::vector<antlr4::tree::TerminalNode *> D();
    antlr4::tree::TerminalNode* D(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArgsContext* args();

  class  ArgContext : public antlr4::ParserRuleContext {
  public:
    ArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    std::vector<antlr4::tree::TerminalNode *> Ident();
    antlr4::tree::TerminalNode* Ident(size_t i);
    antlr4::tree::TerminalNode *ArgAssign();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
    std::vector<antlr4::tree::TerminalNode *> AnyWS();
    antlr4::tree::TerminalNode* AnyWS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  HelperDefContext* helperDef();

  class  QuantityDefContext : public antlr4::ParserRuleContext {
  public:
    QuantityDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QuantityPrefix();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  QuantityDefContext* quantityDef();

  class  LogicValSetContext : public antlr4::ParserRuleContext {
  public:
    LogicValSetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LogicValSetPrefix();
    antlr4::tree::TerminalNode *Ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LogicValSetContext* logicValSet();

  class  NameDefContext : public antlr4::ParserRuleContext {
  public:
    NameDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NamePrefix();
    antlr4::tree::TerminalNode *EscapedString();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NameDefContext* nameDef();

  class  ClassificationDefContext : public antlr4::ParserRuleContext {
  public:
    ClassificationDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ClassPrefix();
    antlr4::tree::TerminalNode *Classification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
    std::vector<antlr4::tree::TerminalNode *> AnyWS();
    antlr4::tree::TerminalNode* AnyWS(size_t i);
    std::vector<LogicValSetContext *> logicValSet();
    LogicValSetContext* logicValSet(size_t i);
    std::vector<NameDefContext *> nameDef();
    NameDefContext* nameDef(size_t i);
    std::vector<ClassificationDefContext *> classificationDef();
    ClassificationDefContext* classificationDef(size_t i);
    std::vector<QuantityDefContext *> quantityDef();
    QuantityDefContext* quantityDef(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ItemDefContext* itemDef();

  class  PresentWhenDefContext : public antlr4::ParserRuleContext {
  public:
    PresentWhenDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PresentWhenPrefix();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PresentWhenDefContext* presentWhenDef();

  class  RuleDefContext : public antlr4::ParserRuleContext {
  public:
    RuleDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RulePrefix();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RuleDefContext* ruleDef();

  class  DestDefContext : public antlr4::ParserRuleContext {
  public:
    DestDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DestPrefix();
    antlr4::tree::TerminalNode *Ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
    std::vector<antlr4::tree::TerminalNode *> AnyWS();
    antlr4::tree::TerminalNode* AnyWS(size_t i);
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
    std::vector<antlr4::tree::TerminalNode *> AnyWS();
    antlr4::tree::TerminalNode* AnyWS(size_t i);
    std::vector<NameDefContext *> nameDef();
    NameDefContext* nameDef(size_t i);
    std::vector<RuleDefContext *> ruleDef();
    RuleDefContext* ruleDef(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LocClassDef();
    antlr4::tree::TerminalNode* LocClassDef(size_t i);
    std::vector<PresentWhenDefContext *> presentWhenDef();
    PresentWhenDefContext* presentWhenDef(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LocationDefContext* locationDef();

  class  EventDefContext : public antlr4::ParserRuleContext {
  public:
    EventDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EventDefPrefix();
    antlr4::tree::TerminalNode *Ident();
    antlr4::tree::TerminalNode *Colon();
    ExprContext *expr();
    antlr4::tree::TerminalNode *D();
    antlr4::tree::TerminalNode *AnyWS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
    std::vector<antlr4::tree::TerminalNode *> AnyWS();
    antlr4::tree::TerminalNode* AnyWS(size_t i);
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
    std::vector<antlr4::tree::TerminalNode *> AnyWS();
    antlr4::tree::TerminalNode* AnyWS(size_t i);
    std::vector<RegionDefContext *> regionDef();
    RegionDefContext* regionDef(size_t i);
    std::vector<ItemDefContext *> itemDef();
    ItemDefContext* itemDef(size_t i);
    std::vector<HelperDefContext *> helperDef();
    HelperDefContext* helperDef(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LogicDefContext* logicDef();

  class  OptionsDefContext : public antlr4::ParserRuleContext {
  public:
    OptionsDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OptionsDefPrefix();
    antlr4::tree::TerminalNode *CBkt();
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
    std::vector<antlr4::tree::TerminalNode *> AnyWS();
    antlr4::tree::TerminalNode* AnyWS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OptionsDefContext* optionsDef();

  class  OptionDefStringsContext : public antlr4::ParserRuleContext {
  public:
    OptionDefStringsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OptionStringsPrefix();
    antlr4::tree::TerminalNode *Ident();
    antlr4::tree::TerminalNode *OBkt();
    antlr4::tree::TerminalNode *CBkt();
    antlr4::tree::TerminalNode *Colon();
    antlr4::tree::TerminalNode *AnyWS();
    std::vector<antlr4::tree::TerminalNode *> EscapedString();
    antlr4::tree::TerminalNode* EscapedString(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ListSeparator();
    antlr4::tree::TerminalNode* ListSeparator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OptionDefStringsContext* optionDefStrings();

  class  OptionDefStringContext : public antlr4::ParserRuleContext {
  public:
    OptionDefStringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OptionStringPrefix();
    antlr4::tree::TerminalNode *Ident();
    antlr4::tree::TerminalNode *EscapedString();
    antlr4::tree::TerminalNode *Colon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OptionDefStringContext* optionDefString();

  class  OptionDefIntListContext : public antlr4::ParserRuleContext {
  public:
    OptionDefIntListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OptionIntsPrefix();
    antlr4::tree::TerminalNode *Ident();
    antlr4::tree::TerminalNode *OBkt();
    antlr4::tree::TerminalNode *CBkt();
    antlr4::tree::TerminalNode *Colon();
    antlr4::tree::TerminalNode *AnyWS();
    std::vector<antlr4::tree::TerminalNode *> SignedInt();
    antlr4::tree::TerminalNode* SignedInt(size_t i);
    antlr4::tree::TerminalNode *ListSeparator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OptionDefIntListContext* optionDefIntList();

  class  OptionDefIntRangeContext : public antlr4::ParserRuleContext {
  public:
    OptionDefIntRangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OptionIntsPrefix();
    antlr4::tree::TerminalNode *Ident();
    antlr4::tree::TerminalNode *OBkt();
    antlr4::tree::TerminalNode *MinKW();
    std::vector<antlr4::tree::TerminalNode *> Colon();
    antlr4::tree::TerminalNode* Colon(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SignedInt();
    antlr4::tree::TerminalNode* SignedInt(size_t i);
    antlr4::tree::TerminalNode *ListSeparator();
    antlr4::tree::TerminalNode *MaxKW();
    antlr4::tree::TerminalNode *CBkt();
    std::vector<antlr4::tree::TerminalNode *> AnyWS();
    antlr4::tree::TerminalNode* AnyWS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OptionDefIntRangeContext* optionDefIntRange();

  class  OptionDefIntContext : public antlr4::ParserRuleContext {
  public:
    OptionDefIntContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OptionIntPrefix();
    antlr4::tree::TerminalNode *Ident();
    antlr4::tree::TerminalNode *Colon();
    antlr4::tree::TerminalNode *SignedInt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OptionDefIntContext* optionDefInt();

  class  OptionDefFloatListContext : public antlr4::ParserRuleContext {
  public:
    OptionDefFloatListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OptionFloatsPrefix();
    antlr4::tree::TerminalNode *Ident();
    antlr4::tree::TerminalNode *OBkt();
    antlr4::tree::TerminalNode *CBkt();
    antlr4::tree::TerminalNode *Colon();
    antlr4::tree::TerminalNode *AnyWS();
    std::vector<antlr4::tree::TerminalNode *> SignedNumber();
    antlr4::tree::TerminalNode* SignedNumber(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ListSeparator();
    antlr4::tree::TerminalNode* ListSeparator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OptionDefFloatListContext* optionDefFloatList();

  class  OptionDefFloatRangeContext : public antlr4::ParserRuleContext {
  public:
    OptionDefFloatRangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OptionFloatsPrefix();
    antlr4::tree::TerminalNode *Ident();
    antlr4::tree::TerminalNode *OBkt();
    antlr4::tree::TerminalNode *MinKW();
    std::vector<antlr4::tree::TerminalNode *> Colon();
    antlr4::tree::TerminalNode* Colon(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SignedNumber();
    antlr4::tree::TerminalNode* SignedNumber(size_t i);
    antlr4::tree::TerminalNode *ListSeparator();
    antlr4::tree::TerminalNode *MaxKW();
    antlr4::tree::TerminalNode *CBkt();
    std::vector<antlr4::tree::TerminalNode *> AnyWS();
    antlr4::tree::TerminalNode* AnyWS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OptionDefFloatRangeContext* optionDefFloatRange();

  class  OptionDefFloatContext : public antlr4::ParserRuleContext {
  public:
    OptionDefFloatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OptionFloatPrefix();
    antlr4::tree::TerminalNode *Ident();
    antlr4::tree::TerminalNode *Colon();
    antlr4::tree::TerminalNode *SignedNumber();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OptionDefFloatContext* optionDefFloat();

  class  OptionDefBoolContext : public antlr4::ParserRuleContext {
  public:
    OptionDefBoolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OptionBoolPrefix();
    antlr4::tree::TerminalNode *Ident();
    antlr4::tree::TerminalNode *Colon();
    antlr4::tree::TerminalNode *Bool();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OptionDefBoolContext* optionDefBool();

  class  FileDefContext : public antlr4::ParserRuleContext {
  public:
    FileDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LogicDefContext *> logicDef();
    LogicDefContext* logicDef(size_t i);
    std::vector<OptionsDefContext *> optionsDef();
    OptionsDefContext* optionsDef(size_t i);
    std::vector<EnumDefContext *> enumDef();
    EnumDefContext* enumDef(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AnyWS();
    antlr4::tree::TerminalNode* AnyWS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FileDefContext* fileDef();

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
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
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
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
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
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
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
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  BaseFuncContext : public ExprContext {
  public:
    BaseFuncContext(ExprContext *ctx);

    BasefuncContext *basefunc();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
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
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
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
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
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
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
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
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
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
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
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
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  GeOperatorContext : public ExprContext {
  public:
    GeOperatorContext(ExprContext *ctx);

    LogicFileParser::ExprContext *left = nullptr;
    antlr4::Token *op = nullptr;
    LogicFileParser::ExprContext *right = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *GeSymbol();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
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
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  NotOperatorContext : public ExprContext {
  public:
    NotOperatorContext(ExprContext *ctx);

    antlr4::Token *prefix = nullptr;
    ValueContext *value();
    antlr4::tree::TerminalNode *NotSymbol();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
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
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
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
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
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
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
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
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BasefuncContext* basefunc();

  class  OptionCheckContext : public antlr4::ParserRuleContext {
  public:
    OptionCheckContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OptionCheckKW();
    antlr4::tree::TerminalNode *Ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OptionCheckContext* optionCheck();

  class  HelperCallContext : public antlr4::ParserRuleContext {
  public:
    HelperCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HelperCallKW();
    antlr4::tree::TerminalNode *Ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  HelperCallContext* helperCall();

  class  ArgCheckContext : public antlr4::ParserRuleContext {
  public:
    ArgCheckContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ArgCheckKW();
    antlr4::tree::TerminalNode *Ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArgCheckContext* argCheck();

  class  LogicValCheckContext : public antlr4::ParserRuleContext {
  public:
    LogicValCheckContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LogicValCheckKW();
    antlr4::tree::TerminalNode *Ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LogicValCheckContext* logicValCheck();

  class  EventCheckContext : public antlr4::ParserRuleContext {
  public:
    EventCheckContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EventCheckKW();
    antlr4::tree::TerminalNode *Ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
    antlr4::tree::TerminalNode *D();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
    antlr4::tree::TerminalNode *D();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
    antlr4::tree::TerminalNode *D();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IsDungeonMqCallContext* isDungeonMqCall();

  class  FloorCallContext : public antlr4::ParserRuleContext {
  public:
    FloorCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FloorKW();
    antlr4::tree::TerminalNode *OPar();
    antlr4::tree::TerminalNode *Ident();
    antlr4::tree::TerminalNode *CPar();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FloorCallContext* floorCall();

  class  CeilCallContext : public antlr4::ParserRuleContext {
  public:
    CeilCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CeilKW();
    antlr4::tree::TerminalNode *OPar();
    antlr4::tree::TerminalNode *Ident();
    antlr4::tree::TerminalNode *CPar();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ValueContext* value();

  class  ParenExprContext : public antlr4::ParserRuleContext {
  public:
    ParenExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPar();
    ExprContext *expr();
    antlr4::tree::TerminalNode *CPar();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParenExprContext* parenExpr();

  class  EnumValueRefContext : public antlr4::ParserRuleContext {
  public:
    EnumValueRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Ident();
    antlr4::tree::TerminalNode* Ident(size_t i);
    antlr4::tree::TerminalNode *Colon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumValueRefContext* enumValueRef();

  class  EntranceRefContext : public antlr4::ParserRuleContext {
  public:
    EntranceRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EntranceRefKW();
    antlr4::tree::TerminalNode *Ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EntranceRefContext* entranceRef();

  class  RegionRefContext : public antlr4::ParserRuleContext {
  public:
    RegionRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RegionRefKW();
    antlr4::tree::TerminalNode *Ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RegionRefContext* regionRef();

  class  LocRefContext : public antlr4::ParserRuleContext {
  public:
    LocRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LocRefKW();
    antlr4::tree::TerminalNode *Ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LocRefContext* locRef();

  class  ItemRefContext : public antlr4::ParserRuleContext {
  public:
    ItemRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ItemRefKW();
    antlr4::tree::TerminalNode *Ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ItemRefContext* itemRef();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};


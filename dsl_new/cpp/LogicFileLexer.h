
// Generated from D:\Games\SoH Archipelago\SoH AP Logic Translation Tool\SoH-AP-Logic-Compiler\dsl_new\cpp\LogicFileLexer.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"




class  LogicFileLexer : public antlr4::Lexer {
public:
  enum {
    Comment = 1, MLComment = 2, Bool = 3, Age = 4, Dot = 5, SignedNumber = 6, 
    SignedInt = 7, EscapedString = 8, EnumDecPrefix = 9, OBkt = 10, CBkt = 11, 
    OPar = 12, CPar = 13, Comma = 14, OrSymbol = 15, AndSymbol = 16, NotSymbol = 17, 
    NeqSymbol = 18, EqSymbol = 19, GeqSymbol = 20, LeqSymbol = 21, LeSymbol = 22, 
    GeSymbol = 23, AddSymbol = 24, SubSymbol = 25, MulSymbol = 26, DivSymbol = 27, 
    ModSymbol = 28, RSSymbol = 29, LSSymbol = 30, Question = 31, ArgAssign = 32, 
    OptionCheckKW = 33, HelperCallKW = 34, ArgCheckKW = 35, LogicValCheckKW = 36, 
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
    MinKW = 86, MaxKW = 87, ListSeparator = 88, Ident = 89, Colon = 90
  };

  explicit LogicFileLexer(antlr4::CharStream *input);
  ~LogicFileLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};


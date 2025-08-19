
// Generated from LogicFileLexer.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"




class  LogicFileLexer : public antlr4::Lexer {
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


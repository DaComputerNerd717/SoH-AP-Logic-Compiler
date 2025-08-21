
// Generated from LogicFileParser.g4 by ANTLR 4.9.3


#include "LogicFileParserVisitor.h"

#include "LogicFileParser.h"


using namespace antlrcpp;
using namespace antlr4;

LogicFileParser::LogicFileParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

LogicFileParser::~LogicFileParser() {
  delete _interpreter;
}

std::string LogicFileParser::getGrammarFileName() const {
  return "LogicFileParser.g4";
}

const std::vector<std::string>& LogicFileParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& LogicFileParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- FileDefContext ------------------------------------------------------------------

LogicFileParser::FileDefContext::FileDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::FileDefContext::EOF() {
  return getToken(LogicFileParser::EOF, 0);
}

std::vector<LogicFileParser::LogicDefContext *> LogicFileParser::FileDefContext::logicDef() {
  return getRuleContexts<LogicFileParser::LogicDefContext>();
}

LogicFileParser::LogicDefContext* LogicFileParser::FileDefContext::logicDef(size_t i) {
  return getRuleContext<LogicFileParser::LogicDefContext>(i);
}

std::vector<LogicFileParser::OptionsDefContext *> LogicFileParser::FileDefContext::optionsDef() {
  return getRuleContexts<LogicFileParser::OptionsDefContext>();
}

LogicFileParser::OptionsDefContext* LogicFileParser::FileDefContext::optionsDef(size_t i) {
  return getRuleContext<LogicFileParser::OptionsDefContext>(i);
}

std::vector<LogicFileParser::EnumDefContext *> LogicFileParser::FileDefContext::enumDef() {
  return getRuleContexts<LogicFileParser::EnumDefContext>();
}

LogicFileParser::EnumDefContext* LogicFileParser::FileDefContext::enumDef(size_t i) {
  return getRuleContext<LogicFileParser::EnumDefContext>(i);
}

std::vector<tree::TerminalNode *> LogicFileParser::FileDefContext::EOL() {
  return getTokens(LogicFileParser::EOL);
}

tree::TerminalNode* LogicFileParser::FileDefContext::EOL(size_t i) {
  return getToken(LogicFileParser::EOL, i);
}


size_t LogicFileParser::FileDefContext::getRuleIndex() const {
  return LogicFileParser::RuleFileDef;
}


antlrcpp::Any LogicFileParser::FileDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitFileDef(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::FileDefContext* LogicFileParser::fileDef() {
  FileDefContext *_localctx = _tracker.createInstance<FileDefContext>(_ctx, getState());
  enterRule(_localctx, 0, LogicFileParser::RuleFileDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(134); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(134);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case LogicFileParser::LogicPrefix: {
          setState(126);
          logicDef();
          break;
        }

        case LogicFileParser::OptionsDefPrefix: {
          setState(127);
          optionsDef();
          break;
        }

        case LogicFileParser::EnumDecPrefix: {
          setState(128);
          enumDef();
          break;
        }

        case LogicFileParser::EOL: {
          setState(130); 
          _errHandler->sync(this);
          alt = 1;
          do {
            switch (alt) {
              case 1: {
                    setState(129);
                    match(LogicFileParser::EOL);
                    break;
                  }

            default:
              throw NoViableAltException(this);
            }
            setState(132); 
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
          } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(136); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == LogicFileParser::EnumDecPrefix

    || _la == LogicFileParser::EOL || _la == LogicFileParser::LogicPrefix

    || _la == LogicFileParser::OptionsDefPrefix);
    setState(138);
    match(LogicFileParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumDefContext ------------------------------------------------------------------

LogicFileParser::EnumDefContext::EnumDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::EnumDefContext::EnumDecPrefix() {
  return getToken(LogicFileParser::EnumDecPrefix, 0);
}

tree::TerminalNode* LogicFileParser::EnumDefContext::Ident() {
  return getToken(LogicFileParser::Ident, 0);
}

tree::TerminalNode* LogicFileParser::EnumDefContext::OBkt() {
  return getToken(LogicFileParser::OBkt, 0);
}

tree::TerminalNode* LogicFileParser::EnumDefContext::CBkt() {
  return getToken(LogicFileParser::CBkt, 0);
}

std::vector<tree::TerminalNode *> LogicFileParser::EnumDefContext::EOL() {
  return getTokens(LogicFileParser::EOL);
}

tree::TerminalNode* LogicFileParser::EnumDefContext::EOL(size_t i) {
  return getToken(LogicFileParser::EOL, i);
}

std::vector<LogicFileParser::EnumValsContext *> LogicFileParser::EnumDefContext::enumVals() {
  return getRuleContexts<LogicFileParser::EnumValsContext>();
}

LogicFileParser::EnumValsContext* LogicFileParser::EnumDefContext::enumVals(size_t i) {
  return getRuleContext<LogicFileParser::EnumValsContext>(i);
}


size_t LogicFileParser::EnumDefContext::getRuleIndex() const {
  return LogicFileParser::RuleEnumDef;
}


antlrcpp::Any LogicFileParser::EnumDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitEnumDef(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::EnumDefContext* LogicFileParser::enumDef() {
  EnumDefContext *_localctx = _tracker.createInstance<EnumDefContext>(_ctx, getState());
  enterRule(_localctx, 2, LogicFileParser::RuleEnumDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(140);
    match(LogicFileParser::EnumDecPrefix);
    setState(141);
    match(LogicFileParser::Ident);
    setState(142);
    match(LogicFileParser::OBkt);
    setState(146);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogicFileParser::EOL) {
      setState(143);
      match(LogicFileParser::EOL);
      setState(148);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(150); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(149);
      enumVals();
      setState(152); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == LogicFileParser::Ident);
    setState(157);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogicFileParser::EOL) {
      setState(154);
      match(LogicFileParser::EOL);
      setState(159);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(160);
    match(LogicFileParser::CBkt);
    setState(164);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(161);
        match(LogicFileParser::EOL); 
      }
      setState(166);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumValsContext ------------------------------------------------------------------

LogicFileParser::EnumValsContext::EnumValsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> LogicFileParser::EnumValsContext::Ident() {
  return getTokens(LogicFileParser::Ident);
}

tree::TerminalNode* LogicFileParser::EnumValsContext::Ident(size_t i) {
  return getToken(LogicFileParser::Ident, i);
}

std::vector<LogicFileParser::ListSeparatorContext *> LogicFileParser::EnumValsContext::listSeparator() {
  return getRuleContexts<LogicFileParser::ListSeparatorContext>();
}

LogicFileParser::ListSeparatorContext* LogicFileParser::EnumValsContext::listSeparator(size_t i) {
  return getRuleContext<LogicFileParser::ListSeparatorContext>(i);
}


size_t LogicFileParser::EnumValsContext::getRuleIndex() const {
  return LogicFileParser::RuleEnumVals;
}


antlrcpp::Any LogicFileParser::EnumValsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitEnumVals(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::EnumValsContext* LogicFileParser::enumVals() {
  EnumValsContext *_localctx = _tracker.createInstance<EnumValsContext>(_ctx, getState());
  enterRule(_localctx, 4, LogicFileParser::RuleEnumVals);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(167);
    match(LogicFileParser::Ident);
    setState(173);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(168);
        listSeparator();
        setState(169);
        match(LogicFileParser::Ident); 
      }
      setState(175);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfBlockContext ------------------------------------------------------------------

LogicFileParser::IfBlockContext::IfBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::IfBlockContext::IfPrefix() {
  return getToken(LogicFileParser::IfPrefix, 0);
}

tree::TerminalNode* LogicFileParser::IfBlockContext::OPar() {
  return getToken(LogicFileParser::OPar, 0);
}

std::vector<LogicFileParser::ExprContext *> LogicFileParser::IfBlockContext::expr() {
  return getRuleContexts<LogicFileParser::ExprContext>();
}

LogicFileParser::ExprContext* LogicFileParser::IfBlockContext::expr(size_t i) {
  return getRuleContext<LogicFileParser::ExprContext>(i);
}

tree::TerminalNode* LogicFileParser::IfBlockContext::CPar() {
  return getToken(LogicFileParser::CPar, 0);
}

tree::TerminalNode* LogicFileParser::IfBlockContext::OBkt() {
  return getToken(LogicFileParser::OBkt, 0);
}

tree::TerminalNode* LogicFileParser::IfBlockContext::CBkt() {
  return getToken(LogicFileParser::CBkt, 0);
}

std::vector<tree::TerminalNode *> LogicFileParser::IfBlockContext::EOL() {
  return getTokens(LogicFileParser::EOL);
}

tree::TerminalNode* LogicFileParser::IfBlockContext::EOL(size_t i) {
  return getToken(LogicFileParser::EOL, i);
}

LogicFileParser::IfContinuationContext* LogicFileParser::IfBlockContext::ifContinuation() {
  return getRuleContext<LogicFileParser::IfContinuationContext>(0);
}


size_t LogicFileParser::IfBlockContext::getRuleIndex() const {
  return LogicFileParser::RuleIfBlock;
}


antlrcpp::Any LogicFileParser::IfBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitIfBlock(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::IfBlockContext* LogicFileParser::ifBlock() {
  IfBlockContext *_localctx = _tracker.createInstance<IfBlockContext>(_ctx, getState());
  enterRule(_localctx, 6, LogicFileParser::RuleIfBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(176);
    match(LogicFileParser::IfPrefix);
    setState(177);
    match(LogicFileParser::OPar);
    setState(178);
    expr(0);
    setState(179);
    match(LogicFileParser::CPar);
    setState(183);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogicFileParser::EOL) {
      setState(180);
      match(LogicFileParser::EOL);
      setState(185);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(186);
    match(LogicFileParser::OBkt);
    setState(190);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(187);
        match(LogicFileParser::EOL); 
      }
      setState(192);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    }
    setState(193);
    expr(0);
    setState(197);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogicFileParser::EOL) {
      setState(194);
      match(LogicFileParser::EOL);
      setState(199);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(200);
    match(LogicFileParser::CBkt);
    setState(204);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(201);
        match(LogicFileParser::EOL); 
      }
      setState(206);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
    setState(208);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      setState(207);
      ifContinuation();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfContinuationContext ------------------------------------------------------------------

LogicFileParser::IfContinuationContext::IfContinuationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LogicFileParser::ElseBlockContext* LogicFileParser::IfContinuationContext::elseBlock() {
  return getRuleContext<LogicFileParser::ElseBlockContext>(0);
}

LogicFileParser::ElseIfBlockContext* LogicFileParser::IfContinuationContext::elseIfBlock() {
  return getRuleContext<LogicFileParser::ElseIfBlockContext>(0);
}

std::vector<tree::TerminalNode *> LogicFileParser::IfContinuationContext::EOL() {
  return getTokens(LogicFileParser::EOL);
}

tree::TerminalNode* LogicFileParser::IfContinuationContext::EOL(size_t i) {
  return getToken(LogicFileParser::EOL, i);
}


size_t LogicFileParser::IfContinuationContext::getRuleIndex() const {
  return LogicFileParser::RuleIfContinuation;
}


antlrcpp::Any LogicFileParser::IfContinuationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitIfContinuation(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::IfContinuationContext* LogicFileParser::ifContinuation() {
  IfContinuationContext *_localctx = _tracker.createInstance<IfContinuationContext>(_ctx, getState());
  enterRule(_localctx, 8, LogicFileParser::RuleIfContinuation);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(213);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogicFileParser::EOL) {
      setState(210);
      match(LogicFileParser::EOL);
      setState(215);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(218);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LogicFileParser::ElsePrefix: {
        setState(216);
        elseBlock();
        break;
      }

      case LogicFileParser::ElseIfPrefix: {
        setState(217);
        elseIfBlock();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseIfBlockContext ------------------------------------------------------------------

LogicFileParser::ElseIfBlockContext::ElseIfBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::ElseIfBlockContext::ElseIfPrefix() {
  return getToken(LogicFileParser::ElseIfPrefix, 0);
}

tree::TerminalNode* LogicFileParser::ElseIfBlockContext::OPar() {
  return getToken(LogicFileParser::OPar, 0);
}

std::vector<LogicFileParser::ExprContext *> LogicFileParser::ElseIfBlockContext::expr() {
  return getRuleContexts<LogicFileParser::ExprContext>();
}

LogicFileParser::ExprContext* LogicFileParser::ElseIfBlockContext::expr(size_t i) {
  return getRuleContext<LogicFileParser::ExprContext>(i);
}

tree::TerminalNode* LogicFileParser::ElseIfBlockContext::CPar() {
  return getToken(LogicFileParser::CPar, 0);
}

tree::TerminalNode* LogicFileParser::ElseIfBlockContext::OBkt() {
  return getToken(LogicFileParser::OBkt, 0);
}

tree::TerminalNode* LogicFileParser::ElseIfBlockContext::CBkt() {
  return getToken(LogicFileParser::CBkt, 0);
}

std::vector<tree::TerminalNode *> LogicFileParser::ElseIfBlockContext::EOL() {
  return getTokens(LogicFileParser::EOL);
}

tree::TerminalNode* LogicFileParser::ElseIfBlockContext::EOL(size_t i) {
  return getToken(LogicFileParser::EOL, i);
}

LogicFileParser::IfContinuationContext* LogicFileParser::ElseIfBlockContext::ifContinuation() {
  return getRuleContext<LogicFileParser::IfContinuationContext>(0);
}


size_t LogicFileParser::ElseIfBlockContext::getRuleIndex() const {
  return LogicFileParser::RuleElseIfBlock;
}


antlrcpp::Any LogicFileParser::ElseIfBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitElseIfBlock(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::ElseIfBlockContext* LogicFileParser::elseIfBlock() {
  ElseIfBlockContext *_localctx = _tracker.createInstance<ElseIfBlockContext>(_ctx, getState());
  enterRule(_localctx, 10, LogicFileParser::RuleElseIfBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(220);
    match(LogicFileParser::ElseIfPrefix);
    setState(221);
    match(LogicFileParser::OPar);
    setState(222);
    expr(0);
    setState(223);
    match(LogicFileParser::CPar);
    setState(227);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogicFileParser::EOL) {
      setState(224);
      match(LogicFileParser::EOL);
      setState(229);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(230);
    match(LogicFileParser::OBkt);
    setState(234);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(231);
        match(LogicFileParser::EOL); 
      }
      setState(236);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    }
    setState(237);
    expr(0);
    setState(238);
    match(LogicFileParser::CBkt);
    setState(242);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(239);
        match(LogicFileParser::EOL); 
      }
      setState(244);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    }
    setState(246);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      setState(245);
      ifContinuation();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseBlockContext ------------------------------------------------------------------

LogicFileParser::ElseBlockContext::ElseBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::ElseBlockContext::ElsePrefix() {
  return getToken(LogicFileParser::ElsePrefix, 0);
}

tree::TerminalNode* LogicFileParser::ElseBlockContext::OBkt() {
  return getToken(LogicFileParser::OBkt, 0);
}

LogicFileParser::ExprContext* LogicFileParser::ElseBlockContext::expr() {
  return getRuleContext<LogicFileParser::ExprContext>(0);
}

tree::TerminalNode* LogicFileParser::ElseBlockContext::CBkt() {
  return getToken(LogicFileParser::CBkt, 0);
}

std::vector<tree::TerminalNode *> LogicFileParser::ElseBlockContext::EOL() {
  return getTokens(LogicFileParser::EOL);
}

tree::TerminalNode* LogicFileParser::ElseBlockContext::EOL(size_t i) {
  return getToken(LogicFileParser::EOL, i);
}


size_t LogicFileParser::ElseBlockContext::getRuleIndex() const {
  return LogicFileParser::RuleElseBlock;
}


antlrcpp::Any LogicFileParser::ElseBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitElseBlock(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::ElseBlockContext* LogicFileParser::elseBlock() {
  ElseBlockContext *_localctx = _tracker.createInstance<ElseBlockContext>(_ctx, getState());
  enterRule(_localctx, 12, LogicFileParser::RuleElseBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(248);
    match(LogicFileParser::ElsePrefix);
    setState(252);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogicFileParser::EOL) {
      setState(249);
      match(LogicFileParser::EOL);
      setState(254);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(255);
    match(LogicFileParser::OBkt);
    setState(259);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(256);
        match(LogicFileParser::EOL); 
      }
      setState(261);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    }
    setState(262);
    expr(0);
    setState(266);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogicFileParser::EOL) {
      setState(263);
      match(LogicFileParser::EOL);
      setState(268);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(269);
    match(LogicFileParser::CBkt);
    setState(273);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(270);
        match(LogicFileParser::EOL); 
      }
      setState(275);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchExprContext ------------------------------------------------------------------

LogicFileParser::SwitchExprContext::SwitchExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::SwitchExprContext::SwitchPrefix() {
  return getToken(LogicFileParser::SwitchPrefix, 0);
}

LogicFileParser::ExprContext* LogicFileParser::SwitchExprContext::expr() {
  return getRuleContext<LogicFileParser::ExprContext>(0);
}

tree::TerminalNode* LogicFileParser::SwitchExprContext::OBkt() {
  return getToken(LogicFileParser::OBkt, 0);
}

LogicFileParser::CaseListContext* LogicFileParser::SwitchExprContext::caseList() {
  return getRuleContext<LogicFileParser::CaseListContext>(0);
}

tree::TerminalNode* LogicFileParser::SwitchExprContext::CBkt() {
  return getToken(LogicFileParser::CBkt, 0);
}

LogicFileParser::Return_caseContext* LogicFileParser::SwitchExprContext::return_case() {
  return getRuleContext<LogicFileParser::Return_caseContext>(0);
}

std::vector<tree::TerminalNode *> LogicFileParser::SwitchExprContext::EOL() {
  return getTokens(LogicFileParser::EOL);
}

tree::TerminalNode* LogicFileParser::SwitchExprContext::EOL(size_t i) {
  return getToken(LogicFileParser::EOL, i);
}


size_t LogicFileParser::SwitchExprContext::getRuleIndex() const {
  return LogicFileParser::RuleSwitchExpr;
}


antlrcpp::Any LogicFileParser::SwitchExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitSwitchExpr(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::SwitchExprContext* LogicFileParser::switchExpr() {
  SwitchExprContext *_localctx = _tracker.createInstance<SwitchExprContext>(_ctx, getState());
  enterRule(_localctx, 14, LogicFileParser::RuleSwitchExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(276);
    match(LogicFileParser::SwitchPrefix);
    setState(277);
    expr(0);
    setState(279);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::SwitchReturnsKW) {
      setState(278);
      return_case();
    }
    setState(284);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogicFileParser::EOL) {
      setState(281);
      match(LogicFileParser::EOL);
      setState(286);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(287);
    match(LogicFileParser::OBkt);
    setState(291);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogicFileParser::EOL) {
      setState(288);
      match(LogicFileParser::EOL);
      setState(293);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(294);
    caseList();
    setState(298);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogicFileParser::EOL) {
      setState(295);
      match(LogicFileParser::EOL);
      setState(300);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(301);
    match(LogicFileParser::CBkt);
    setState(305);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(302);
        match(LogicFileParser::EOL); 
      }
      setState(307);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Return_caseContext ------------------------------------------------------------------

LogicFileParser::Return_caseContext::Return_caseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::Return_caseContext::SwitchReturnsKW() {
  return getToken(LogicFileParser::SwitchReturnsKW, 0);
}

tree::TerminalNode* LogicFileParser::Return_caseContext::Bool() {
  return getToken(LogicFileParser::Bool, 0);
}


size_t LogicFileParser::Return_caseContext::getRuleIndex() const {
  return LogicFileParser::RuleReturn_case;
}


antlrcpp::Any LogicFileParser::Return_caseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitReturn_case(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::Return_caseContext* LogicFileParser::return_case() {
  Return_caseContext *_localctx = _tracker.createInstance<Return_caseContext>(_ctx, getState());
  enterRule(_localctx, 16, LogicFileParser::RuleReturn_case);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(308);
    match(LogicFileParser::SwitchReturnsKW);
    setState(309);
    match(LogicFileParser::Bool);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaseListContext ------------------------------------------------------------------

LogicFileParser::CaseListContext::CaseListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LogicFileParser::CaseDefContext *> LogicFileParser::CaseListContext::caseDef() {
  return getRuleContexts<LogicFileParser::CaseDefContext>();
}

LogicFileParser::CaseDefContext* LogicFileParser::CaseListContext::caseDef(size_t i) {
  return getRuleContext<LogicFileParser::CaseDefContext>(i);
}

std::vector<LogicFileParser::DefaultCaseContext *> LogicFileParser::CaseListContext::defaultCase() {
  return getRuleContexts<LogicFileParser::DefaultCaseContext>();
}

LogicFileParser::DefaultCaseContext* LogicFileParser::CaseListContext::defaultCase(size_t i) {
  return getRuleContext<LogicFileParser::DefaultCaseContext>(i);
}


size_t LogicFileParser::CaseListContext::getRuleIndex() const {
  return LogicFileParser::RuleCaseList;
}


antlrcpp::Any LogicFileParser::CaseListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitCaseList(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::CaseListContext* LogicFileParser::caseList() {
  CaseListContext *_localctx = _tracker.createInstance<CaseListContext>(_ctx, getState());
  enterRule(_localctx, 18, LogicFileParser::RuleCaseList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(313); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(313);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case LogicFileParser::SwitchCaseKW: {
          setState(311);
          caseDef();
          break;
        }

        case LogicFileParser::SwitchDefaultKW: {
          setState(312);
          defaultCase();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(315); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == LogicFileParser::SwitchCaseKW

    || _la == LogicFileParser::SwitchDefaultKW);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaseDefContext ------------------------------------------------------------------

LogicFileParser::CaseDefContext::CaseDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::CaseDefContext::SwitchCaseKW() {
  return getToken(LogicFileParser::SwitchCaseKW, 0);
}

tree::TerminalNode* LogicFileParser::CaseDefContext::Colon() {
  return getToken(LogicFileParser::Colon, 0);
}

LogicFileParser::ValueContext* LogicFileParser::CaseDefContext::value() {
  return getRuleContext<LogicFileParser::ValueContext>(0);
}

tree::TerminalNode* LogicFileParser::CaseDefContext::Ident() {
  return getToken(LogicFileParser::Ident, 0);
}

std::vector<tree::TerminalNode *> LogicFileParser::CaseDefContext::EOL() {
  return getTokens(LogicFileParser::EOL);
}

tree::TerminalNode* LogicFileParser::CaseDefContext::EOL(size_t i) {
  return getToken(LogicFileParser::EOL, i);
}

LogicFileParser::ExprContext* LogicFileParser::CaseDefContext::expr() {
  return getRuleContext<LogicFileParser::ExprContext>(0);
}


size_t LogicFileParser::CaseDefContext::getRuleIndex() const {
  return LogicFileParser::RuleCaseDef;
}


antlrcpp::Any LogicFileParser::CaseDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitCaseDef(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::CaseDefContext* LogicFileParser::caseDef() {
  CaseDefContext *_localctx = _tracker.createInstance<CaseDefContext>(_ctx, getState());
  enterRule(_localctx, 20, LogicFileParser::RuleCaseDef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(317);
    match(LogicFileParser::SwitchCaseKW);
    setState(320);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      setState(318);
      value();
      break;
    }

    case 2: {
      setState(319);
      match(LogicFileParser::Ident);
      break;
    }

    default:
      break;
    }
    setState(322);
    match(LogicFileParser::Colon);
    setState(324); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(323);
              match(LogicFileParser::EOL);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(326); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(334);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      setState(328);
      expr(0);
      setState(330); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(329);
                match(LogicFileParser::EOL);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(332); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefaultCaseContext ------------------------------------------------------------------

LogicFileParser::DefaultCaseContext::DefaultCaseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::DefaultCaseContext::SwitchDefaultKW() {
  return getToken(LogicFileParser::SwitchDefaultKW, 0);
}

tree::TerminalNode* LogicFileParser::DefaultCaseContext::Colon() {
  return getToken(LogicFileParser::Colon, 0);
}

LogicFileParser::ExprContext* LogicFileParser::DefaultCaseContext::expr() {
  return getRuleContext<LogicFileParser::ExprContext>(0);
}

std::vector<tree::TerminalNode *> LogicFileParser::DefaultCaseContext::EOL() {
  return getTokens(LogicFileParser::EOL);
}

tree::TerminalNode* LogicFileParser::DefaultCaseContext::EOL(size_t i) {
  return getToken(LogicFileParser::EOL, i);
}


size_t LogicFileParser::DefaultCaseContext::getRuleIndex() const {
  return LogicFileParser::RuleDefaultCase;
}


antlrcpp::Any LogicFileParser::DefaultCaseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitDefaultCase(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::DefaultCaseContext* LogicFileParser::defaultCase() {
  DefaultCaseContext *_localctx = _tracker.createInstance<DefaultCaseContext>(_ctx, getState());
  enterRule(_localctx, 22, LogicFileParser::RuleDefaultCase);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(336);
    match(LogicFileParser::SwitchDefaultKW);
    setState(337);
    match(LogicFileParser::Colon);
    setState(339); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(338);
              match(LogicFileParser::EOL);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(341); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(343);
    expr(0);
    setState(345); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(344);
              match(LogicFileParser::EOL);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(347); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgsContext ------------------------------------------------------------------

LogicFileParser::ArgsContext::ArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LogicFileParser::ArgContext *> LogicFileParser::ArgsContext::arg() {
  return getRuleContexts<LogicFileParser::ArgContext>();
}

LogicFileParser::ArgContext* LogicFileParser::ArgsContext::arg(size_t i) {
  return getRuleContext<LogicFileParser::ArgContext>(i);
}

std::vector<tree::TerminalNode *> LogicFileParser::ArgsContext::Comma() {
  return getTokens(LogicFileParser::Comma);
}

tree::TerminalNode* LogicFileParser::ArgsContext::Comma(size_t i) {
  return getToken(LogicFileParser::Comma, i);
}

std::vector<tree::TerminalNode *> LogicFileParser::ArgsContext::EOL() {
  return getTokens(LogicFileParser::EOL);
}

tree::TerminalNode* LogicFileParser::ArgsContext::EOL(size_t i) {
  return getToken(LogicFileParser::EOL, i);
}


size_t LogicFileParser::ArgsContext::getRuleIndex() const {
  return LogicFileParser::RuleArgs;
}


antlrcpp::Any LogicFileParser::ArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitArgs(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::ArgsContext* LogicFileParser::args() {
  ArgsContext *_localctx = _tracker.createInstance<ArgsContext>(_ctx, getState());
  enterRule(_localctx, 24, LogicFileParser::RuleArgs);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(363);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LogicFileParser::Bool)
      | (1ULL << LogicFileParser::SignedNumber)
      | (1ULL << LogicFileParser::EscapedString)
      | (1ULL << LogicFileParser::OPar)
      | (1ULL << LogicFileParser::NotSymbol)
      | (1ULL << LogicFileParser::OptionCheckKW)
      | (1ULL << LogicFileParser::HelperCallKW)
      | (1ULL << LogicFileParser::ArgCheckKW)
      | (1ULL << LogicFileParser::LogicValCheckKW)
      | (1ULL << LogicFileParser::EventCheckKW)
      | (1ULL << LogicFileParser::CanReachLocKW)
      | (1ULL << LogicFileParser::CanReachEntranceKW)
      | (1ULL << LogicFileParser::CanReachRegionKW)
      | (1ULL << LogicFileParser::HasItemKW)
      | (1ULL << LogicFileParser::CountItemKW)
      | (1ULL << LogicFileParser::IsMQDungeonKW)
      | (1ULL << LogicFileParser::FloorKW)
      | (1ULL << LogicFileParser::CeilKW)
      | (1ULL << LogicFileParser::EntranceRefKW)
      | (1ULL << LogicFileParser::RegionRefKW)
      | (1ULL << LogicFileParser::LocRefKW)
      | (1ULL << LogicFileParser::ItemRefKW)
      | (1ULL << LogicFileParser::IfPrefix)
      | (1ULL << LogicFileParser::SwitchPrefix)
      | (1ULL << LogicFileParser::EOL))) != 0) || _la == LogicFileParser::Ident) {
      setState(349);
      arg();
      setState(360);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == LogicFileParser::Comma) {
        setState(350);
        match(LogicFileParser::Comma);
        setState(351);
        arg();
        setState(355);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == LogicFileParser::EOL) {
          setState(352);
          match(LogicFileParser::EOL);
          setState(357);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(362);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgContext ------------------------------------------------------------------

LogicFileParser::ArgContext::ArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LogicFileParser::ExprContext* LogicFileParser::ArgContext::expr() {
  return getRuleContext<LogicFileParser::ExprContext>(0);
}

std::vector<tree::TerminalNode *> LogicFileParser::ArgContext::Ident() {
  return getTokens(LogicFileParser::Ident);
}

tree::TerminalNode* LogicFileParser::ArgContext::Ident(size_t i) {
  return getToken(LogicFileParser::Ident, i);
}

tree::TerminalNode* LogicFileParser::ArgContext::ArgAssign() {
  return getToken(LogicFileParser::ArgAssign, 0);
}


size_t LogicFileParser::ArgContext::getRuleIndex() const {
  return LogicFileParser::RuleArg;
}


antlrcpp::Any LogicFileParser::ArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitArg(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::ArgContext* LogicFileParser::arg() {
  ArgContext *_localctx = _tracker.createInstance<ArgContext>(_ctx, getState());
  enterRule(_localctx, 26, LogicFileParser::RuleArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(367);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
    case 1: {
      setState(365);
      match(LogicFileParser::Ident);
      setState(366);
      match(LogicFileParser::ArgAssign);
      break;
    }

    default:
      break;
    }
    setState(371);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
    case 1: {
      setState(369);
      expr(0);
      break;
    }

    case 2: {
      setState(370);
      match(LogicFileParser::Ident);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HelperDefContext ------------------------------------------------------------------

LogicFileParser::HelperDefContext::HelperDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::HelperDefContext::HelperPrefix() {
  return getToken(LogicFileParser::HelperPrefix, 0);
}

tree::TerminalNode* LogicFileParser::HelperDefContext::Ident() {
  return getToken(LogicFileParser::Ident, 0);
}

tree::TerminalNode* LogicFileParser::HelperDefContext::OPar() {
  return getToken(LogicFileParser::OPar, 0);
}

LogicFileParser::ArgsContext* LogicFileParser::HelperDefContext::args() {
  return getRuleContext<LogicFileParser::ArgsContext>(0);
}

tree::TerminalNode* LogicFileParser::HelperDefContext::CPar() {
  return getToken(LogicFileParser::CPar, 0);
}

tree::TerminalNode* LogicFileParser::HelperDefContext::OBkt() {
  return getToken(LogicFileParser::OBkt, 0);
}

LogicFileParser::ExprContext* LogicFileParser::HelperDefContext::expr() {
  return getRuleContext<LogicFileParser::ExprContext>(0);
}

tree::TerminalNode* LogicFileParser::HelperDefContext::CBkt() {
  return getToken(LogicFileParser::CBkt, 0);
}

tree::TerminalNode* LogicFileParser::HelperDefContext::Colon() {
  return getToken(LogicFileParser::Colon, 0);
}

std::vector<tree::TerminalNode *> LogicFileParser::HelperDefContext::EOL() {
  return getTokens(LogicFileParser::EOL);
}

tree::TerminalNode* LogicFileParser::HelperDefContext::EOL(size_t i) {
  return getToken(LogicFileParser::EOL, i);
}


size_t LogicFileParser::HelperDefContext::getRuleIndex() const {
  return LogicFileParser::RuleHelperDef;
}


antlrcpp::Any LogicFileParser::HelperDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitHelperDef(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::HelperDefContext* LogicFileParser::helperDef() {
  HelperDefContext *_localctx = _tracker.createInstance<HelperDefContext>(_ctx, getState());
  enterRule(_localctx, 28, LogicFileParser::RuleHelperDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(373);
    match(LogicFileParser::HelperPrefix);
    setState(374);
    match(LogicFileParser::Ident);
    setState(375);
    match(LogicFileParser::OPar);
    setState(376);
    args();
    setState(377);
    match(LogicFileParser::CPar);
    setState(379);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::Colon) {
      setState(378);
      match(LogicFileParser::Colon);
    }
    setState(384);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogicFileParser::EOL) {
      setState(381);
      match(LogicFileParser::EOL);
      setState(386);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(387);
    match(LogicFileParser::OBkt);
    setState(391);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(388);
        match(LogicFileParser::EOL); 
      }
      setState(393);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx);
    }
    setState(394);
    expr(0);
    setState(398);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogicFileParser::EOL) {
      setState(395);
      match(LogicFileParser::EOL);
      setState(400);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(401);
    match(LogicFileParser::CBkt);
    setState(405);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(402);
        match(LogicFileParser::EOL); 
      }
      setState(407);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QuantityDefContext ------------------------------------------------------------------

LogicFileParser::QuantityDefContext::QuantityDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::QuantityDefContext::QuantityPrefix() {
  return getToken(LogicFileParser::QuantityPrefix, 0);
}

LogicFileParser::ExprContext* LogicFileParser::QuantityDefContext::expr() {
  return getRuleContext<LogicFileParser::ExprContext>(0);
}


size_t LogicFileParser::QuantityDefContext::getRuleIndex() const {
  return LogicFileParser::RuleQuantityDef;
}


antlrcpp::Any LogicFileParser::QuantityDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitQuantityDef(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::QuantityDefContext* LogicFileParser::quantityDef() {
  QuantityDefContext *_localctx = _tracker.createInstance<QuantityDefContext>(_ctx, getState());
  enterRule(_localctx, 30, LogicFileParser::RuleQuantityDef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(408);
    match(LogicFileParser::QuantityPrefix);
    setState(409);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicValSetContext ------------------------------------------------------------------

LogicFileParser::LogicValSetContext::LogicValSetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::LogicValSetContext::LogicValSetPrefix() {
  return getToken(LogicFileParser::LogicValSetPrefix, 0);
}

tree::TerminalNode* LogicFileParser::LogicValSetContext::Ident() {
  return getToken(LogicFileParser::Ident, 0);
}


size_t LogicFileParser::LogicValSetContext::getRuleIndex() const {
  return LogicFileParser::RuleLogicValSet;
}


antlrcpp::Any LogicFileParser::LogicValSetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitLogicValSet(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::LogicValSetContext* LogicFileParser::logicValSet() {
  LogicValSetContext *_localctx = _tracker.createInstance<LogicValSetContext>(_ctx, getState());
  enterRule(_localctx, 32, LogicFileParser::RuleLogicValSet);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(411);
    match(LogicFileParser::LogicValSetPrefix);
    setState(412);
    match(LogicFileParser::Ident);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NameDefContext ------------------------------------------------------------------

LogicFileParser::NameDefContext::NameDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::NameDefContext::NamePrefix() {
  return getToken(LogicFileParser::NamePrefix, 0);
}

tree::TerminalNode* LogicFileParser::NameDefContext::EscapedString() {
  return getToken(LogicFileParser::EscapedString, 0);
}


size_t LogicFileParser::NameDefContext::getRuleIndex() const {
  return LogicFileParser::RuleNameDef;
}


antlrcpp::Any LogicFileParser::NameDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitNameDef(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::NameDefContext* LogicFileParser::nameDef() {
  NameDefContext *_localctx = _tracker.createInstance<NameDefContext>(_ctx, getState());
  enterRule(_localctx, 34, LogicFileParser::RuleNameDef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(414);
    match(LogicFileParser::NamePrefix);
    setState(415);
    match(LogicFileParser::EscapedString);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassificationDefContext ------------------------------------------------------------------

LogicFileParser::ClassificationDefContext::ClassificationDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::ClassificationDefContext::ClassPrefix() {
  return getToken(LogicFileParser::ClassPrefix, 0);
}

tree::TerminalNode* LogicFileParser::ClassificationDefContext::Classification() {
  return getToken(LogicFileParser::Classification, 0);
}


size_t LogicFileParser::ClassificationDefContext::getRuleIndex() const {
  return LogicFileParser::RuleClassificationDef;
}


antlrcpp::Any LogicFileParser::ClassificationDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitClassificationDef(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::ClassificationDefContext* LogicFileParser::classificationDef() {
  ClassificationDefContext *_localctx = _tracker.createInstance<ClassificationDefContext>(_ctx, getState());
  enterRule(_localctx, 36, LogicFileParser::RuleClassificationDef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(417);
    match(LogicFileParser::ClassPrefix);
    setState(418);
    match(LogicFileParser::Classification);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ItemDefContext ------------------------------------------------------------------

LogicFileParser::ItemDefContext::ItemDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::ItemDefContext::ItemDefPrefix() {
  return getToken(LogicFileParser::ItemDefPrefix, 0);
}

tree::TerminalNode* LogicFileParser::ItemDefContext::Ident() {
  return getToken(LogicFileParser::Ident, 0);
}

tree::TerminalNode* LogicFileParser::ItemDefContext::OBkt() {
  return getToken(LogicFileParser::OBkt, 0);
}

tree::TerminalNode* LogicFileParser::ItemDefContext::CBkt() {
  return getToken(LogicFileParser::CBkt, 0);
}

tree::TerminalNode* LogicFileParser::ItemDefContext::Colon() {
  return getToken(LogicFileParser::Colon, 0);
}

std::vector<tree::TerminalNode *> LogicFileParser::ItemDefContext::EOL() {
  return getTokens(LogicFileParser::EOL);
}

tree::TerminalNode* LogicFileParser::ItemDefContext::EOL(size_t i) {
  return getToken(LogicFileParser::EOL, i);
}

std::vector<LogicFileParser::LogicValSetContext *> LogicFileParser::ItemDefContext::logicValSet() {
  return getRuleContexts<LogicFileParser::LogicValSetContext>();
}

LogicFileParser::LogicValSetContext* LogicFileParser::ItemDefContext::logicValSet(size_t i) {
  return getRuleContext<LogicFileParser::LogicValSetContext>(i);
}

std::vector<LogicFileParser::NameDefContext *> LogicFileParser::ItemDefContext::nameDef() {
  return getRuleContexts<LogicFileParser::NameDefContext>();
}

LogicFileParser::NameDefContext* LogicFileParser::ItemDefContext::nameDef(size_t i) {
  return getRuleContext<LogicFileParser::NameDefContext>(i);
}

std::vector<LogicFileParser::ClassificationDefContext *> LogicFileParser::ItemDefContext::classificationDef() {
  return getRuleContexts<LogicFileParser::ClassificationDefContext>();
}

LogicFileParser::ClassificationDefContext* LogicFileParser::ItemDefContext::classificationDef(size_t i) {
  return getRuleContext<LogicFileParser::ClassificationDefContext>(i);
}

std::vector<LogicFileParser::QuantityDefContext *> LogicFileParser::ItemDefContext::quantityDef() {
  return getRuleContexts<LogicFileParser::QuantityDefContext>();
}

LogicFileParser::QuantityDefContext* LogicFileParser::ItemDefContext::quantityDef(size_t i) {
  return getRuleContext<LogicFileParser::QuantityDefContext>(i);
}


size_t LogicFileParser::ItemDefContext::getRuleIndex() const {
  return LogicFileParser::RuleItemDef;
}


antlrcpp::Any LogicFileParser::ItemDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitItemDef(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::ItemDefContext* LogicFileParser::itemDef() {
  ItemDefContext *_localctx = _tracker.createInstance<ItemDefContext>(_ctx, getState());
  enterRule(_localctx, 38, LogicFileParser::RuleItemDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(420);
    match(LogicFileParser::ItemDefPrefix);
    setState(421);
    match(LogicFileParser::Ident);
    setState(423);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::Colon) {
      setState(422);
      match(LogicFileParser::Colon);
    }
    setState(428);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogicFileParser::EOL) {
      setState(425);
      match(LogicFileParser::EOL);
      setState(430);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(431);
    match(LogicFileParser::OBkt);
    setState(435);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogicFileParser::EOL) {
      setState(432);
      match(LogicFileParser::EOL);
      setState(437);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(449); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(442);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case LogicFileParser::LogicValSetPrefix: {
          setState(438);
          logicValSet();
          break;
        }

        case LogicFileParser::NamePrefix: {
          setState(439);
          nameDef();
          break;
        }

        case LogicFileParser::ClassPrefix: {
          setState(440);
          classificationDef();
          break;
        }

        case LogicFileParser::QuantityPrefix: {
          setState(441);
          quantityDef();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(445); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(444);
                match(LogicFileParser::EOL);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(447); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      setState(451); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LogicFileParser::QuantityPrefix)
      | (1ULL << LogicFileParser::LogicValSetPrefix)
      | (1ULL << LogicFileParser::NamePrefix)
      | (1ULL << LogicFileParser::ClassPrefix))) != 0));
    setState(456);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogicFileParser::EOL) {
      setState(453);
      match(LogicFileParser::EOL);
      setState(458);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(459);
    match(LogicFileParser::CBkt);
    setState(463);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(460);
        match(LogicFileParser::EOL); 
      }
      setState(465);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PresentWhenDefContext ------------------------------------------------------------------

LogicFileParser::PresentWhenDefContext::PresentWhenDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::PresentWhenDefContext::PresentWhenPrefix() {
  return getToken(LogicFileParser::PresentWhenPrefix, 0);
}

LogicFileParser::ExprContext* LogicFileParser::PresentWhenDefContext::expr() {
  return getRuleContext<LogicFileParser::ExprContext>(0);
}


size_t LogicFileParser::PresentWhenDefContext::getRuleIndex() const {
  return LogicFileParser::RulePresentWhenDef;
}


antlrcpp::Any LogicFileParser::PresentWhenDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitPresentWhenDef(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::PresentWhenDefContext* LogicFileParser::presentWhenDef() {
  PresentWhenDefContext *_localctx = _tracker.createInstance<PresentWhenDefContext>(_ctx, getState());
  enterRule(_localctx, 40, LogicFileParser::RulePresentWhenDef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(466);
    match(LogicFileParser::PresentWhenPrefix);
    setState(467);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RuleDefContext ------------------------------------------------------------------

LogicFileParser::RuleDefContext::RuleDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::RuleDefContext::RulePrefix() {
  return getToken(LogicFileParser::RulePrefix, 0);
}

LogicFileParser::ExprContext* LogicFileParser::RuleDefContext::expr() {
  return getRuleContext<LogicFileParser::ExprContext>(0);
}


size_t LogicFileParser::RuleDefContext::getRuleIndex() const {
  return LogicFileParser::RuleRuleDef;
}


antlrcpp::Any LogicFileParser::RuleDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitRuleDef(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::RuleDefContext* LogicFileParser::ruleDef() {
  RuleDefContext *_localctx = _tracker.createInstance<RuleDefContext>(_ctx, getState());
  enterRule(_localctx, 42, LogicFileParser::RuleRuleDef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(469);
    match(LogicFileParser::RulePrefix);
    setState(470);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DestDefContext ------------------------------------------------------------------

LogicFileParser::DestDefContext::DestDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::DestDefContext::DestPrefix() {
  return getToken(LogicFileParser::DestPrefix, 0);
}

tree::TerminalNode* LogicFileParser::DestDefContext::Ident() {
  return getToken(LogicFileParser::Ident, 0);
}


size_t LogicFileParser::DestDefContext::getRuleIndex() const {
  return LogicFileParser::RuleDestDef;
}


antlrcpp::Any LogicFileParser::DestDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitDestDef(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::DestDefContext* LogicFileParser::destDef() {
  DestDefContext *_localctx = _tracker.createInstance<DestDefContext>(_ctx, getState());
  enterRule(_localctx, 44, LogicFileParser::RuleDestDef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(472);
    match(LogicFileParser::DestPrefix);
    setState(473);
    match(LogicFileParser::Ident);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EntranceDefContext ------------------------------------------------------------------

LogicFileParser::EntranceDefContext::EntranceDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::EntranceDefContext::EntranceDefPrefix() {
  return getToken(LogicFileParser::EntranceDefPrefix, 0);
}

tree::TerminalNode* LogicFileParser::EntranceDefContext::Ident() {
  return getToken(LogicFileParser::Ident, 0);
}

tree::TerminalNode* LogicFileParser::EntranceDefContext::OBkt() {
  return getToken(LogicFileParser::OBkt, 0);
}

tree::TerminalNode* LogicFileParser::EntranceDefContext::CBkt() {
  return getToken(LogicFileParser::CBkt, 0);
}

tree::TerminalNode* LogicFileParser::EntranceDefContext::Colon() {
  return getToken(LogicFileParser::Colon, 0);
}

std::vector<tree::TerminalNode *> LogicFileParser::EntranceDefContext::EOL() {
  return getTokens(LogicFileParser::EOL);
}

tree::TerminalNode* LogicFileParser::EntranceDefContext::EOL(size_t i) {
  return getToken(LogicFileParser::EOL, i);
}

std::vector<LogicFileParser::PresentWhenDefContext *> LogicFileParser::EntranceDefContext::presentWhenDef() {
  return getRuleContexts<LogicFileParser::PresentWhenDefContext>();
}

LogicFileParser::PresentWhenDefContext* LogicFileParser::EntranceDefContext::presentWhenDef(size_t i) {
  return getRuleContext<LogicFileParser::PresentWhenDefContext>(i);
}

std::vector<LogicFileParser::RuleDefContext *> LogicFileParser::EntranceDefContext::ruleDef() {
  return getRuleContexts<LogicFileParser::RuleDefContext>();
}

LogicFileParser::RuleDefContext* LogicFileParser::EntranceDefContext::ruleDef(size_t i) {
  return getRuleContext<LogicFileParser::RuleDefContext>(i);
}

std::vector<LogicFileParser::DestDefContext *> LogicFileParser::EntranceDefContext::destDef() {
  return getRuleContexts<LogicFileParser::DestDefContext>();
}

LogicFileParser::DestDefContext* LogicFileParser::EntranceDefContext::destDef(size_t i) {
  return getRuleContext<LogicFileParser::DestDefContext>(i);
}

std::vector<tree::TerminalNode *> LogicFileParser::EntranceDefContext::CantCrossAdult() {
  return getTokens(LogicFileParser::CantCrossAdult);
}

tree::TerminalNode* LogicFileParser::EntranceDefContext::CantCrossAdult(size_t i) {
  return getToken(LogicFileParser::CantCrossAdult, i);
}

std::vector<tree::TerminalNode *> LogicFileParser::EntranceDefContext::CantCrossChild() {
  return getTokens(LogicFileParser::CantCrossChild);
}

tree::TerminalNode* LogicFileParser::EntranceDefContext::CantCrossChild(size_t i) {
  return getToken(LogicFileParser::CantCrossChild, i);
}


size_t LogicFileParser::EntranceDefContext::getRuleIndex() const {
  return LogicFileParser::RuleEntranceDef;
}


antlrcpp::Any LogicFileParser::EntranceDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitEntranceDef(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::EntranceDefContext* LogicFileParser::entranceDef() {
  EntranceDefContext *_localctx = _tracker.createInstance<EntranceDefContext>(_ctx, getState());
  enterRule(_localctx, 46, LogicFileParser::RuleEntranceDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(475);
    match(LogicFileParser::EntranceDefPrefix);
    setState(476);
    match(LogicFileParser::Ident);
    setState(478);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::Colon) {
      setState(477);
      match(LogicFileParser::Colon);
    }
    setState(483);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogicFileParser::EOL) {
      setState(480);
      match(LogicFileParser::EOL);
      setState(485);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(486);
    match(LogicFileParser::OBkt);
    setState(490);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogicFileParser::EOL) {
      setState(487);
      match(LogicFileParser::EOL);
      setState(492);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(505); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(498);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case LogicFileParser::PresentWhenPrefix: {
          setState(493);
          presentWhenDef();
          break;
        }

        case LogicFileParser::RulePrefix: {
          setState(494);
          ruleDef();
          break;
        }

        case LogicFileParser::DestPrefix: {
          setState(495);
          destDef();
          break;
        }

        case LogicFileParser::CantCrossAdult: {
          setState(496);
          match(LogicFileParser::CantCrossAdult);
          break;
        }

        case LogicFileParser::CantCrossChild: {
          setState(497);
          match(LogicFileParser::CantCrossChild);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(501); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(500);
        match(LogicFileParser::EOL);
        setState(503); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == LogicFileParser::EOL);
      setState(507); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (LogicFileParser::PresentWhenPrefix - 66))
      | (1ULL << (LogicFileParser::RulePrefix - 66))
      | (1ULL << (LogicFileParser::DestPrefix - 66))
      | (1ULL << (LogicFileParser::CantCrossChild - 66))
      | (1ULL << (LogicFileParser::CantCrossAdult - 66)))) != 0));
    setState(509);
    match(LogicFileParser::CBkt);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LocationDefContext ------------------------------------------------------------------

LogicFileParser::LocationDefContext::LocationDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::LocationDefContext::LocationPrefix() {
  return getToken(LogicFileParser::LocationPrefix, 0);
}

tree::TerminalNode* LogicFileParser::LocationDefContext::Ident() {
  return getToken(LogicFileParser::Ident, 0);
}

tree::TerminalNode* LogicFileParser::LocationDefContext::OBkt() {
  return getToken(LogicFileParser::OBkt, 0);
}

tree::TerminalNode* LogicFileParser::LocationDefContext::CBkt() {
  return getToken(LogicFileParser::CBkt, 0);
}

tree::TerminalNode* LogicFileParser::LocationDefContext::Colon() {
  return getToken(LogicFileParser::Colon, 0);
}

std::vector<tree::TerminalNode *> LogicFileParser::LocationDefContext::EOL() {
  return getTokens(LogicFileParser::EOL);
}

tree::TerminalNode* LogicFileParser::LocationDefContext::EOL(size_t i) {
  return getToken(LogicFileParser::EOL, i);
}

std::vector<LogicFileParser::NameDefContext *> LogicFileParser::LocationDefContext::nameDef() {
  return getRuleContexts<LogicFileParser::NameDefContext>();
}

LogicFileParser::NameDefContext* LogicFileParser::LocationDefContext::nameDef(size_t i) {
  return getRuleContext<LogicFileParser::NameDefContext>(i);
}

std::vector<LogicFileParser::RuleDefContext *> LogicFileParser::LocationDefContext::ruleDef() {
  return getRuleContexts<LogicFileParser::RuleDefContext>();
}

LogicFileParser::RuleDefContext* LogicFileParser::LocationDefContext::ruleDef(size_t i) {
  return getRuleContext<LogicFileParser::RuleDefContext>(i);
}

std::vector<tree::TerminalNode *> LogicFileParser::LocationDefContext::LocClassDef() {
  return getTokens(LogicFileParser::LocClassDef);
}

tree::TerminalNode* LogicFileParser::LocationDefContext::LocClassDef(size_t i) {
  return getToken(LogicFileParser::LocClassDef, i);
}

std::vector<LogicFileParser::PresentWhenDefContext *> LogicFileParser::LocationDefContext::presentWhenDef() {
  return getRuleContexts<LogicFileParser::PresentWhenDefContext>();
}

LogicFileParser::PresentWhenDefContext* LogicFileParser::LocationDefContext::presentWhenDef(size_t i) {
  return getRuleContext<LogicFileParser::PresentWhenDefContext>(i);
}


size_t LogicFileParser::LocationDefContext::getRuleIndex() const {
  return LogicFileParser::RuleLocationDef;
}


antlrcpp::Any LogicFileParser::LocationDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitLocationDef(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::LocationDefContext* LogicFileParser::locationDef() {
  LocationDefContext *_localctx = _tracker.createInstance<LocationDefContext>(_ctx, getState());
  enterRule(_localctx, 48, LogicFileParser::RuleLocationDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(511);
    match(LogicFileParser::LocationPrefix);
    setState(512);
    match(LogicFileParser::Ident);
    setState(514);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::Colon) {
      setState(513);
      match(LogicFileParser::Colon);
    }
    setState(519);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogicFileParser::EOL) {
      setState(516);
      match(LogicFileParser::EOL);
      setState(521);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(522);
    match(LogicFileParser::OBkt);
    setState(526);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogicFileParser::EOL) {
      setState(523);
      match(LogicFileParser::EOL);
      setState(528);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(541); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(534);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx)) {
      case 1: {
        setState(529);
        nameDef();
        break;
      }

      case 2: {
        setState(530);
        ruleDef();
        break;
      }

      case 3: {
        setState(531);
        match(LogicFileParser::LocClassDef);
        break;
      }

      case 4: {
        setState(532);
        ruleDef();
        break;
      }

      case 5: {
        setState(533);
        presentWhenDef();
        break;
      }

      default:
        break;
      }
      setState(537); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(536);
        match(LogicFileParser::EOL);
        setState(539); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == LogicFileParser::EOL);
      setState(543); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 62) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 62)) & ((1ULL << (LogicFileParser::NamePrefix - 62))
      | (1ULL << (LogicFileParser::PresentWhenPrefix - 62))
      | (1ULL << (LogicFileParser::RulePrefix - 62))
      | (1ULL << (LogicFileParser::LocClassDef - 62)))) != 0));
    setState(545);
    match(LogicFileParser::CBkt);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EventDefContext ------------------------------------------------------------------

LogicFileParser::EventDefContext::EventDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::EventDefContext::EventDefPrefix() {
  return getToken(LogicFileParser::EventDefPrefix, 0);
}

tree::TerminalNode* LogicFileParser::EventDefContext::Colon() {
  return getToken(LogicFileParser::Colon, 0);
}

LogicFileParser::ExprContext* LogicFileParser::EventDefContext::expr() {
  return getRuleContext<LogicFileParser::ExprContext>(0);
}

tree::TerminalNode* LogicFileParser::EventDefContext::Ident() {
  return getToken(LogicFileParser::Ident, 0);
}


size_t LogicFileParser::EventDefContext::getRuleIndex() const {
  return LogicFileParser::RuleEventDef;
}


antlrcpp::Any LogicFileParser::EventDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitEventDef(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::EventDefContext* LogicFileParser::eventDef() {
  EventDefContext *_localctx = _tracker.createInstance<EventDefContext>(_ctx, getState());
  enterRule(_localctx, 50, LogicFileParser::RuleEventDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(547);
    match(LogicFileParser::EventDefPrefix);
    setState(549);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::Ident) {
      setState(548);
      match(LogicFileParser::Ident);
    }
    setState(551);
    match(LogicFileParser::Colon);
    setState(552);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RegionDefContext ------------------------------------------------------------------

LogicFileParser::RegionDefContext::RegionDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::RegionDefContext::RegionDefPrefix() {
  return getToken(LogicFileParser::RegionDefPrefix, 0);
}

tree::TerminalNode* LogicFileParser::RegionDefContext::Ident() {
  return getToken(LogicFileParser::Ident, 0);
}

tree::TerminalNode* LogicFileParser::RegionDefContext::OBkt() {
  return getToken(LogicFileParser::OBkt, 0);
}

tree::TerminalNode* LogicFileParser::RegionDefContext::CBkt() {
  return getToken(LogicFileParser::CBkt, 0);
}

tree::TerminalNode* LogicFileParser::RegionDefContext::Colon() {
  return getToken(LogicFileParser::Colon, 0);
}

std::vector<tree::TerminalNode *> LogicFileParser::RegionDefContext::EOL() {
  return getTokens(LogicFileParser::EOL);
}

tree::TerminalNode* LogicFileParser::RegionDefContext::EOL(size_t i) {
  return getToken(LogicFileParser::EOL, i);
}

std::vector<LogicFileParser::NameDefContext *> LogicFileParser::RegionDefContext::nameDef() {
  return getRuleContexts<LogicFileParser::NameDefContext>();
}

LogicFileParser::NameDefContext* LogicFileParser::RegionDefContext::nameDef(size_t i) {
  return getRuleContext<LogicFileParser::NameDefContext>(i);
}

std::vector<LogicFileParser::LocationDefContext *> LogicFileParser::RegionDefContext::locationDef() {
  return getRuleContexts<LogicFileParser::LocationDefContext>();
}

LogicFileParser::LocationDefContext* LogicFileParser::RegionDefContext::locationDef(size_t i) {
  return getRuleContext<LogicFileParser::LocationDefContext>(i);
}

std::vector<LogicFileParser::EntranceDefContext *> LogicFileParser::RegionDefContext::entranceDef() {
  return getRuleContexts<LogicFileParser::EntranceDefContext>();
}

LogicFileParser::EntranceDefContext* LogicFileParser::RegionDefContext::entranceDef(size_t i) {
  return getRuleContext<LogicFileParser::EntranceDefContext>(i);
}

std::vector<LogicFileParser::EventDefContext *> LogicFileParser::RegionDefContext::eventDef() {
  return getRuleContexts<LogicFileParser::EventDefContext>();
}

LogicFileParser::EventDefContext* LogicFileParser::RegionDefContext::eventDef(size_t i) {
  return getRuleContext<LogicFileParser::EventDefContext>(i);
}

std::vector<LogicFileParser::PresentWhenDefContext *> LogicFileParser::RegionDefContext::presentWhenDef() {
  return getRuleContexts<LogicFileParser::PresentWhenDefContext>();
}

LogicFileParser::PresentWhenDefContext* LogicFileParser::RegionDefContext::presentWhenDef(size_t i) {
  return getRuleContext<LogicFileParser::PresentWhenDefContext>(i);
}


size_t LogicFileParser::RegionDefContext::getRuleIndex() const {
  return LogicFileParser::RuleRegionDef;
}


antlrcpp::Any LogicFileParser::RegionDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitRegionDef(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::RegionDefContext* LogicFileParser::regionDef() {
  RegionDefContext *_localctx = _tracker.createInstance<RegionDefContext>(_ctx, getState());
  enterRule(_localctx, 52, LogicFileParser::RuleRegionDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(554);
    match(LogicFileParser::RegionDefPrefix);
    setState(555);
    match(LogicFileParser::Ident);
    setState(557);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::Colon) {
      setState(556);
      match(LogicFileParser::Colon);
    }
    setState(562);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogicFileParser::EOL) {
      setState(559);
      match(LogicFileParser::EOL);
      setState(564);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(565);
    match(LogicFileParser::OBkt);
    setState(569);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogicFileParser::EOL) {
      setState(566);
      match(LogicFileParser::EOL);
      setState(571);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(584); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(577);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case LogicFileParser::NamePrefix: {
          setState(572);
          nameDef();
          break;
        }

        case LogicFileParser::LocationPrefix: {
          setState(573);
          locationDef();
          break;
        }

        case LogicFileParser::EntranceDefPrefix: {
          setState(574);
          entranceDef();
          break;
        }

        case LogicFileParser::EventDefPrefix: {
          setState(575);
          eventDef();
          break;
        }

        case LogicFileParser::PresentWhenPrefix: {
          setState(576);
          presentWhenDef();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(580); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(579);
        match(LogicFileParser::EOL);
        setState(582); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == LogicFileParser::EOL);
      setState(586); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 62) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 62)) & ((1ULL << (LogicFileParser::NamePrefix - 62))
      | (1ULL << (LogicFileParser::PresentWhenPrefix - 62))
      | (1ULL << (LogicFileParser::EntranceDefPrefix - 62))
      | (1ULL << (LogicFileParser::LocationPrefix - 62))
      | (1ULL << (LogicFileParser::EventDefPrefix - 62)))) != 0));
    setState(588);
    match(LogicFileParser::CBkt);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicDefContext ------------------------------------------------------------------

LogicFileParser::LogicDefContext::LogicDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::LogicDefContext::LogicPrefix() {
  return getToken(LogicFileParser::LogicPrefix, 0);
}

tree::TerminalNode* LogicFileParser::LogicDefContext::OBkt() {
  return getToken(LogicFileParser::OBkt, 0);
}

tree::TerminalNode* LogicFileParser::LogicDefContext::CBkt() {
  return getToken(LogicFileParser::CBkt, 0);
}

tree::TerminalNode* LogicFileParser::LogicDefContext::Colon() {
  return getToken(LogicFileParser::Colon, 0);
}

std::vector<tree::TerminalNode *> LogicFileParser::LogicDefContext::EOL() {
  return getTokens(LogicFileParser::EOL);
}

tree::TerminalNode* LogicFileParser::LogicDefContext::EOL(size_t i) {
  return getToken(LogicFileParser::EOL, i);
}

std::vector<LogicFileParser::RegionDefContext *> LogicFileParser::LogicDefContext::regionDef() {
  return getRuleContexts<LogicFileParser::RegionDefContext>();
}

LogicFileParser::RegionDefContext* LogicFileParser::LogicDefContext::regionDef(size_t i) {
  return getRuleContext<LogicFileParser::RegionDefContext>(i);
}

std::vector<LogicFileParser::ItemDefContext *> LogicFileParser::LogicDefContext::itemDef() {
  return getRuleContexts<LogicFileParser::ItemDefContext>();
}

LogicFileParser::ItemDefContext* LogicFileParser::LogicDefContext::itemDef(size_t i) {
  return getRuleContext<LogicFileParser::ItemDefContext>(i);
}

std::vector<LogicFileParser::HelperDefContext *> LogicFileParser::LogicDefContext::helperDef() {
  return getRuleContexts<LogicFileParser::HelperDefContext>();
}

LogicFileParser::HelperDefContext* LogicFileParser::LogicDefContext::helperDef(size_t i) {
  return getRuleContext<LogicFileParser::HelperDefContext>(i);
}


size_t LogicFileParser::LogicDefContext::getRuleIndex() const {
  return LogicFileParser::RuleLogicDef;
}


antlrcpp::Any LogicFileParser::LogicDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitLogicDef(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::LogicDefContext* LogicFileParser::logicDef() {
  LogicDefContext *_localctx = _tracker.createInstance<LogicDefContext>(_ctx, getState());
  enterRule(_localctx, 54, LogicFileParser::RuleLogicDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(590);
    match(LogicFileParser::LogicPrefix);
    setState(592);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::Colon) {
      setState(591);
      match(LogicFileParser::Colon);
    }
    setState(597);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogicFileParser::EOL) {
      setState(594);
      match(LogicFileParser::EOL);
      setState(599);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(600);
    match(LogicFileParser::OBkt);
    setState(604);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogicFileParser::EOL) {
      setState(601);
      match(LogicFileParser::EOL);
      setState(606);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(617); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(610);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case LogicFileParser::RegionDefPrefix: {
          setState(607);
          regionDef();
          break;
        }

        case LogicFileParser::ItemDefPrefix: {
          setState(608);
          itemDef();
          break;
        }

        case LogicFileParser::HelperPrefix: {
          setState(609);
          helperDef();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(613); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(612);
        match(LogicFileParser::EOL);
        setState(615); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == LogicFileParser::EOL);
      setState(619); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 59) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 59)) & ((1ULL << (LogicFileParser::HelperPrefix - 59))
      | (1ULL << (LogicFileParser::ItemDefPrefix - 59))
      | (1ULL << (LogicFileParser::RegionDefPrefix - 59)))) != 0));
    setState(621);
    match(LogicFileParser::CBkt);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptionsDefContext ------------------------------------------------------------------

LogicFileParser::OptionsDefContext::OptionsDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::OptionsDefContext::OptionsDefPrefix() {
  return getToken(LogicFileParser::OptionsDefPrefix, 0);
}

tree::TerminalNode* LogicFileParser::OptionsDefContext::OBkt() {
  return getToken(LogicFileParser::OBkt, 0);
}

tree::TerminalNode* LogicFileParser::OptionsDefContext::CBkt() {
  return getToken(LogicFileParser::CBkt, 0);
}

tree::TerminalNode* LogicFileParser::OptionsDefContext::Colon() {
  return getToken(LogicFileParser::Colon, 0);
}

std::vector<tree::TerminalNode *> LogicFileParser::OptionsDefContext::EOL() {
  return getTokens(LogicFileParser::EOL);
}

tree::TerminalNode* LogicFileParser::OptionsDefContext::EOL(size_t i) {
  return getToken(LogicFileParser::EOL, i);
}

std::vector<LogicFileParser::OptionDefStringsContext *> LogicFileParser::OptionsDefContext::optionDefStrings() {
  return getRuleContexts<LogicFileParser::OptionDefStringsContext>();
}

LogicFileParser::OptionDefStringsContext* LogicFileParser::OptionsDefContext::optionDefStrings(size_t i) {
  return getRuleContext<LogicFileParser::OptionDefStringsContext>(i);
}

std::vector<LogicFileParser::OptionDefIntRangeContext *> LogicFileParser::OptionsDefContext::optionDefIntRange() {
  return getRuleContexts<LogicFileParser::OptionDefIntRangeContext>();
}

LogicFileParser::OptionDefIntRangeContext* LogicFileParser::OptionsDefContext::optionDefIntRange(size_t i) {
  return getRuleContext<LogicFileParser::OptionDefIntRangeContext>(i);
}

std::vector<LogicFileParser::OptionDefIntListContext *> LogicFileParser::OptionsDefContext::optionDefIntList() {
  return getRuleContexts<LogicFileParser::OptionDefIntListContext>();
}

LogicFileParser::OptionDefIntListContext* LogicFileParser::OptionsDefContext::optionDefIntList(size_t i) {
  return getRuleContext<LogicFileParser::OptionDefIntListContext>(i);
}

std::vector<LogicFileParser::OptionDefFloatRangeContext *> LogicFileParser::OptionsDefContext::optionDefFloatRange() {
  return getRuleContexts<LogicFileParser::OptionDefFloatRangeContext>();
}

LogicFileParser::OptionDefFloatRangeContext* LogicFileParser::OptionsDefContext::optionDefFloatRange(size_t i) {
  return getRuleContext<LogicFileParser::OptionDefFloatRangeContext>(i);
}

std::vector<LogicFileParser::OptionDefFloatListContext *> LogicFileParser::OptionsDefContext::optionDefFloatList() {
  return getRuleContexts<LogicFileParser::OptionDefFloatListContext>();
}

LogicFileParser::OptionDefFloatListContext* LogicFileParser::OptionsDefContext::optionDefFloatList(size_t i) {
  return getRuleContext<LogicFileParser::OptionDefFloatListContext>(i);
}

std::vector<LogicFileParser::OptionDefIntContext *> LogicFileParser::OptionsDefContext::optionDefInt() {
  return getRuleContexts<LogicFileParser::OptionDefIntContext>();
}

LogicFileParser::OptionDefIntContext* LogicFileParser::OptionsDefContext::optionDefInt(size_t i) {
  return getRuleContext<LogicFileParser::OptionDefIntContext>(i);
}

std::vector<LogicFileParser::OptionDefFloatContext *> LogicFileParser::OptionsDefContext::optionDefFloat() {
  return getRuleContexts<LogicFileParser::OptionDefFloatContext>();
}

LogicFileParser::OptionDefFloatContext* LogicFileParser::OptionsDefContext::optionDefFloat(size_t i) {
  return getRuleContext<LogicFileParser::OptionDefFloatContext>(i);
}

std::vector<LogicFileParser::OptionDefStringContext *> LogicFileParser::OptionsDefContext::optionDefString() {
  return getRuleContexts<LogicFileParser::OptionDefStringContext>();
}

LogicFileParser::OptionDefStringContext* LogicFileParser::OptionsDefContext::optionDefString(size_t i) {
  return getRuleContext<LogicFileParser::OptionDefStringContext>(i);
}

std::vector<LogicFileParser::OptionDefBoolContext *> LogicFileParser::OptionsDefContext::optionDefBool() {
  return getRuleContexts<LogicFileParser::OptionDefBoolContext>();
}

LogicFileParser::OptionDefBoolContext* LogicFileParser::OptionsDefContext::optionDefBool(size_t i) {
  return getRuleContext<LogicFileParser::OptionDefBoolContext>(i);
}


size_t LogicFileParser::OptionsDefContext::getRuleIndex() const {
  return LogicFileParser::RuleOptionsDef;
}


antlrcpp::Any LogicFileParser::OptionsDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitOptionsDef(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::OptionsDefContext* LogicFileParser::optionsDef() {
  OptionsDefContext *_localctx = _tracker.createInstance<OptionsDefContext>(_ctx, getState());
  enterRule(_localctx, 56, LogicFileParser::RuleOptionsDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(623);
    match(LogicFileParser::OptionsDefPrefix);
    setState(625);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::Colon) {
      setState(624);
      match(LogicFileParser::Colon);
    }
    setState(630);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogicFileParser::EOL) {
      setState(627);
      match(LogicFileParser::EOL);
      setState(632);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(633);
    match(LogicFileParser::OBkt);
    setState(637);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogicFileParser::EOL) {
      setState(634);
      match(LogicFileParser::EOL);
      setState(639);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(656); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(649);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 82, _ctx)) {
      case 1: {
        setState(640);
        optionDefStrings();
        break;
      }

      case 2: {
        setState(641);
        optionDefIntRange();
        break;
      }

      case 3: {
        setState(642);
        optionDefIntList();
        break;
      }

      case 4: {
        setState(643);
        optionDefFloatRange();
        break;
      }

      case 5: {
        setState(644);
        optionDefFloatList();
        break;
      }

      case 6: {
        setState(645);
        optionDefInt();
        break;
      }

      case 7: {
        setState(646);
        optionDefFloat();
        break;
      }

      case 8: {
        setState(647);
        optionDefString();
        break;
      }

      case 9: {
        setState(648);
        optionDefBool();
        break;
      }

      default:
        break;
      }
      setState(652); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(651);
        match(LogicFileParser::EOL);
        setState(654); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == LogicFileParser::EOL);
      setState(658); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == LogicFileParser::OptionPrefix);
    setState(660);
    match(LogicFileParser::CBkt);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptionDefStringsContext ------------------------------------------------------------------

LogicFileParser::OptionDefStringsContext::OptionDefStringsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::OptionDefStringsContext::OptionPrefix() {
  return getToken(LogicFileParser::OptionPrefix, 0);
}

tree::TerminalNode* LogicFileParser::OptionDefStringsContext::StringsPrefix() {
  return getToken(LogicFileParser::StringsPrefix, 0);
}

tree::TerminalNode* LogicFileParser::OptionDefStringsContext::Ident() {
  return getToken(LogicFileParser::Ident, 0);
}

tree::TerminalNode* LogicFileParser::OptionDefStringsContext::OBkt() {
  return getToken(LogicFileParser::OBkt, 0);
}

tree::TerminalNode* LogicFileParser::OptionDefStringsContext::CBkt() {
  return getToken(LogicFileParser::CBkt, 0);
}

tree::TerminalNode* LogicFileParser::OptionDefStringsContext::Colon() {
  return getToken(LogicFileParser::Colon, 0);
}

std::vector<tree::TerminalNode *> LogicFileParser::OptionDefStringsContext::EOL() {
  return getTokens(LogicFileParser::EOL);
}

tree::TerminalNode* LogicFileParser::OptionDefStringsContext::EOL(size_t i) {
  return getToken(LogicFileParser::EOL, i);
}

std::vector<tree::TerminalNode *> LogicFileParser::OptionDefStringsContext::EscapedString() {
  return getTokens(LogicFileParser::EscapedString);
}

tree::TerminalNode* LogicFileParser::OptionDefStringsContext::EscapedString(size_t i) {
  return getToken(LogicFileParser::EscapedString, i);
}

std::vector<LogicFileParser::ListSeparatorContext *> LogicFileParser::OptionDefStringsContext::listSeparator() {
  return getRuleContexts<LogicFileParser::ListSeparatorContext>();
}

LogicFileParser::ListSeparatorContext* LogicFileParser::OptionDefStringsContext::listSeparator(size_t i) {
  return getRuleContext<LogicFileParser::ListSeparatorContext>(i);
}


size_t LogicFileParser::OptionDefStringsContext::getRuleIndex() const {
  return LogicFileParser::RuleOptionDefStrings;
}


antlrcpp::Any LogicFileParser::OptionDefStringsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitOptionDefStrings(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::OptionDefStringsContext* LogicFileParser::optionDefStrings() {
  OptionDefStringsContext *_localctx = _tracker.createInstance<OptionDefStringsContext>(_ctx, getState());
  enterRule(_localctx, 58, LogicFileParser::RuleOptionDefStrings);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(662);
    match(LogicFileParser::OptionPrefix);
    setState(663);
    match(LogicFileParser::StringsPrefix);
    setState(664);
    match(LogicFileParser::Ident);
    setState(666);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::Colon) {
      setState(665);
      match(LogicFileParser::Colon);
    }
    setState(671);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogicFileParser::EOL) {
      setState(668);
      match(LogicFileParser::EOL);
      setState(673);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(674);
    match(LogicFileParser::OBkt);
    setState(678);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 87, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(675);
        match(LogicFileParser::EOL); 
      }
      setState(680);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 87, _ctx);
    }
    setState(690);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::EscapedString) {
      setState(681);
      match(LogicFileParser::EscapedString);
      setState(687);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 88, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(682);
          listSeparator();
          setState(683);
          match(LogicFileParser::EscapedString); 
        }
        setState(689);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 88, _ctx);
      }
    }
    setState(695);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogicFileParser::EOL) {
      setState(692);
      match(LogicFileParser::EOL);
      setState(697);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(698);
    match(LogicFileParser::CBkt);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptionDefStringContext ------------------------------------------------------------------

LogicFileParser::OptionDefStringContext::OptionDefStringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::OptionDefStringContext::OptionPrefix() {
  return getToken(LogicFileParser::OptionPrefix, 0);
}

tree::TerminalNode* LogicFileParser::OptionDefStringContext::StringPrefix() {
  return getToken(LogicFileParser::StringPrefix, 0);
}

tree::TerminalNode* LogicFileParser::OptionDefStringContext::Ident() {
  return getToken(LogicFileParser::Ident, 0);
}

tree::TerminalNode* LogicFileParser::OptionDefStringContext::EscapedString() {
  return getToken(LogicFileParser::EscapedString, 0);
}

tree::TerminalNode* LogicFileParser::OptionDefStringContext::Colon() {
  return getToken(LogicFileParser::Colon, 0);
}

std::vector<tree::TerminalNode *> LogicFileParser::OptionDefStringContext::EOL() {
  return getTokens(LogicFileParser::EOL);
}

tree::TerminalNode* LogicFileParser::OptionDefStringContext::EOL(size_t i) {
  return getToken(LogicFileParser::EOL, i);
}


size_t LogicFileParser::OptionDefStringContext::getRuleIndex() const {
  return LogicFileParser::RuleOptionDefString;
}


antlrcpp::Any LogicFileParser::OptionDefStringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitOptionDefString(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::OptionDefStringContext* LogicFileParser::optionDefString() {
  OptionDefStringContext *_localctx = _tracker.createInstance<OptionDefStringContext>(_ctx, getState());
  enterRule(_localctx, 60, LogicFileParser::RuleOptionDefString);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(700);
    match(LogicFileParser::OptionPrefix);
    setState(701);
    match(LogicFileParser::StringPrefix);
    setState(702);
    match(LogicFileParser::Ident);
    setState(704);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::Colon) {
      setState(703);
      match(LogicFileParser::Colon);
    }
    setState(709);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogicFileParser::EOL) {
      setState(706);
      match(LogicFileParser::EOL);
      setState(711);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(712);
    match(LogicFileParser::EscapedString);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptionDefIntListContext ------------------------------------------------------------------

LogicFileParser::OptionDefIntListContext::OptionDefIntListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::OptionDefIntListContext::OptionPrefix() {
  return getToken(LogicFileParser::OptionPrefix, 0);
}

tree::TerminalNode* LogicFileParser::OptionDefIntListContext::IntsPrefix() {
  return getToken(LogicFileParser::IntsPrefix, 0);
}

tree::TerminalNode* LogicFileParser::OptionDefIntListContext::Ident() {
  return getToken(LogicFileParser::Ident, 0);
}

tree::TerminalNode* LogicFileParser::OptionDefIntListContext::OBkt() {
  return getToken(LogicFileParser::OBkt, 0);
}

tree::TerminalNode* LogicFileParser::OptionDefIntListContext::CBkt() {
  return getToken(LogicFileParser::CBkt, 0);
}

tree::TerminalNode* LogicFileParser::OptionDefIntListContext::Colon() {
  return getToken(LogicFileParser::Colon, 0);
}

std::vector<tree::TerminalNode *> LogicFileParser::OptionDefIntListContext::EOL() {
  return getTokens(LogicFileParser::EOL);
}

tree::TerminalNode* LogicFileParser::OptionDefIntListContext::EOL(size_t i) {
  return getToken(LogicFileParser::EOL, i);
}

std::vector<tree::TerminalNode *> LogicFileParser::OptionDefIntListContext::SignedInt() {
  return getTokens(LogicFileParser::SignedInt);
}

tree::TerminalNode* LogicFileParser::OptionDefIntListContext::SignedInt(size_t i) {
  return getToken(LogicFileParser::SignedInt, i);
}

LogicFileParser::ListSeparatorContext* LogicFileParser::OptionDefIntListContext::listSeparator() {
  return getRuleContext<LogicFileParser::ListSeparatorContext>(0);
}


size_t LogicFileParser::OptionDefIntListContext::getRuleIndex() const {
  return LogicFileParser::RuleOptionDefIntList;
}


antlrcpp::Any LogicFileParser::OptionDefIntListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitOptionDefIntList(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::OptionDefIntListContext* LogicFileParser::optionDefIntList() {
  OptionDefIntListContext *_localctx = _tracker.createInstance<OptionDefIntListContext>(_ctx, getState());
  enterRule(_localctx, 62, LogicFileParser::RuleOptionDefIntList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(714);
    match(LogicFileParser::OptionPrefix);
    setState(715);
    match(LogicFileParser::IntsPrefix);
    setState(716);
    match(LogicFileParser::Ident);
    setState(718);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::Colon) {
      setState(717);
      match(LogicFileParser::Colon);
    }
    setState(723);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogicFileParser::EOL) {
      setState(720);
      match(LogicFileParser::EOL);
      setState(725);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(726);
    match(LogicFileParser::OBkt);
    setState(730);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 95, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(727);
        match(LogicFileParser::EOL); 
      }
      setState(732);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 95, _ctx);
    }
    setState(737);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::SignedInt) {
      setState(733);
      match(LogicFileParser::SignedInt);

      setState(734);
      listSeparator();
      setState(735);
      match(LogicFileParser::SignedInt);
    }
    setState(742);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogicFileParser::EOL) {
      setState(739);
      match(LogicFileParser::EOL);
      setState(744);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(745);
    match(LogicFileParser::CBkt);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptionDefIntRangeContext ------------------------------------------------------------------

LogicFileParser::OptionDefIntRangeContext::OptionDefIntRangeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::OptionDefIntRangeContext::OptionPrefix() {
  return getToken(LogicFileParser::OptionPrefix, 0);
}

tree::TerminalNode* LogicFileParser::OptionDefIntRangeContext::IntsPrefix() {
  return getToken(LogicFileParser::IntsPrefix, 0);
}

tree::TerminalNode* LogicFileParser::OptionDefIntRangeContext::Ident() {
  return getToken(LogicFileParser::Ident, 0);
}

tree::TerminalNode* LogicFileParser::OptionDefIntRangeContext::OBkt() {
  return getToken(LogicFileParser::OBkt, 0);
}

tree::TerminalNode* LogicFileParser::OptionDefIntRangeContext::MinKW() {
  return getToken(LogicFileParser::MinKW, 0);
}

std::vector<tree::TerminalNode *> LogicFileParser::OptionDefIntRangeContext::Colon() {
  return getTokens(LogicFileParser::Colon);
}

tree::TerminalNode* LogicFileParser::OptionDefIntRangeContext::Colon(size_t i) {
  return getToken(LogicFileParser::Colon, i);
}

std::vector<tree::TerminalNode *> LogicFileParser::OptionDefIntRangeContext::SignedInt() {
  return getTokens(LogicFileParser::SignedInt);
}

tree::TerminalNode* LogicFileParser::OptionDefIntRangeContext::SignedInt(size_t i) {
  return getToken(LogicFileParser::SignedInt, i);
}

LogicFileParser::ListSeparatorContext* LogicFileParser::OptionDefIntRangeContext::listSeparator() {
  return getRuleContext<LogicFileParser::ListSeparatorContext>(0);
}

tree::TerminalNode* LogicFileParser::OptionDefIntRangeContext::MaxKW() {
  return getToken(LogicFileParser::MaxKW, 0);
}

tree::TerminalNode* LogicFileParser::OptionDefIntRangeContext::CBkt() {
  return getToken(LogicFileParser::CBkt, 0);
}

std::vector<tree::TerminalNode *> LogicFileParser::OptionDefIntRangeContext::EOL() {
  return getTokens(LogicFileParser::EOL);
}

tree::TerminalNode* LogicFileParser::OptionDefIntRangeContext::EOL(size_t i) {
  return getToken(LogicFileParser::EOL, i);
}


size_t LogicFileParser::OptionDefIntRangeContext::getRuleIndex() const {
  return LogicFileParser::RuleOptionDefIntRange;
}


antlrcpp::Any LogicFileParser::OptionDefIntRangeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitOptionDefIntRange(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::OptionDefIntRangeContext* LogicFileParser::optionDefIntRange() {
  OptionDefIntRangeContext *_localctx = _tracker.createInstance<OptionDefIntRangeContext>(_ctx, getState());
  enterRule(_localctx, 64, LogicFileParser::RuleOptionDefIntRange);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(747);
    match(LogicFileParser::OptionPrefix);
    setState(748);
    match(LogicFileParser::IntsPrefix);
    setState(749);
    match(LogicFileParser::Ident);
    setState(751);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::Colon) {
      setState(750);
      match(LogicFileParser::Colon);
    }
    setState(756);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogicFileParser::EOL) {
      setState(753);
      match(LogicFileParser::EOL);
      setState(758);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(759);
    match(LogicFileParser::OBkt);
    setState(763);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogicFileParser::EOL) {
      setState(760);
      match(LogicFileParser::EOL);
      setState(765);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(766);
    match(LogicFileParser::MinKW);
    setState(767);
    match(LogicFileParser::Colon);
    setState(768);
    match(LogicFileParser::SignedInt);
    setState(769);
    listSeparator();
    setState(770);
    match(LogicFileParser::MaxKW);
    setState(771);
    match(LogicFileParser::Colon);
    setState(772);
    match(LogicFileParser::SignedInt);
    setState(776);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogicFileParser::EOL) {
      setState(773);
      match(LogicFileParser::EOL);
      setState(778);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(779);
    match(LogicFileParser::CBkt);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptionDefIntContext ------------------------------------------------------------------

LogicFileParser::OptionDefIntContext::OptionDefIntContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::OptionDefIntContext::OptionPrefix() {
  return getToken(LogicFileParser::OptionPrefix, 0);
}

tree::TerminalNode* LogicFileParser::OptionDefIntContext::IntPrefix() {
  return getToken(LogicFileParser::IntPrefix, 0);
}

tree::TerminalNode* LogicFileParser::OptionDefIntContext::Ident() {
  return getToken(LogicFileParser::Ident, 0);
}

tree::TerminalNode* LogicFileParser::OptionDefIntContext::Colon() {
  return getToken(LogicFileParser::Colon, 0);
}

tree::TerminalNode* LogicFileParser::OptionDefIntContext::SignedInt() {
  return getToken(LogicFileParser::SignedInt, 0);
}

std::vector<tree::TerminalNode *> LogicFileParser::OptionDefIntContext::EOL() {
  return getTokens(LogicFileParser::EOL);
}

tree::TerminalNode* LogicFileParser::OptionDefIntContext::EOL(size_t i) {
  return getToken(LogicFileParser::EOL, i);
}


size_t LogicFileParser::OptionDefIntContext::getRuleIndex() const {
  return LogicFileParser::RuleOptionDefInt;
}


antlrcpp::Any LogicFileParser::OptionDefIntContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitOptionDefInt(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::OptionDefIntContext* LogicFileParser::optionDefInt() {
  OptionDefIntContext *_localctx = _tracker.createInstance<OptionDefIntContext>(_ctx, getState());
  enterRule(_localctx, 66, LogicFileParser::RuleOptionDefInt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(781);
    match(LogicFileParser::OptionPrefix);
    setState(782);
    match(LogicFileParser::IntPrefix);
    setState(783);
    match(LogicFileParser::Ident);
    setState(784);
    match(LogicFileParser::Colon);
    setState(788);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogicFileParser::EOL) {
      setState(785);
      match(LogicFileParser::EOL);
      setState(790);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(791);
    match(LogicFileParser::SignedInt);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptionDefFloatListContext ------------------------------------------------------------------

LogicFileParser::OptionDefFloatListContext::OptionDefFloatListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::OptionDefFloatListContext::OptionPrefix() {
  return getToken(LogicFileParser::OptionPrefix, 0);
}

tree::TerminalNode* LogicFileParser::OptionDefFloatListContext::FloatsPrefix() {
  return getToken(LogicFileParser::FloatsPrefix, 0);
}

tree::TerminalNode* LogicFileParser::OptionDefFloatListContext::Ident() {
  return getToken(LogicFileParser::Ident, 0);
}

tree::TerminalNode* LogicFileParser::OptionDefFloatListContext::OBkt() {
  return getToken(LogicFileParser::OBkt, 0);
}

tree::TerminalNode* LogicFileParser::OptionDefFloatListContext::CBkt() {
  return getToken(LogicFileParser::CBkt, 0);
}

tree::TerminalNode* LogicFileParser::OptionDefFloatListContext::Colon() {
  return getToken(LogicFileParser::Colon, 0);
}

std::vector<tree::TerminalNode *> LogicFileParser::OptionDefFloatListContext::EOL() {
  return getTokens(LogicFileParser::EOL);
}

tree::TerminalNode* LogicFileParser::OptionDefFloatListContext::EOL(size_t i) {
  return getToken(LogicFileParser::EOL, i);
}

std::vector<tree::TerminalNode *> LogicFileParser::OptionDefFloatListContext::SignedNumber() {
  return getTokens(LogicFileParser::SignedNumber);
}

tree::TerminalNode* LogicFileParser::OptionDefFloatListContext::SignedNumber(size_t i) {
  return getToken(LogicFileParser::SignedNumber, i);
}

std::vector<LogicFileParser::ListSeparatorContext *> LogicFileParser::OptionDefFloatListContext::listSeparator() {
  return getRuleContexts<LogicFileParser::ListSeparatorContext>();
}

LogicFileParser::ListSeparatorContext* LogicFileParser::OptionDefFloatListContext::listSeparator(size_t i) {
  return getRuleContext<LogicFileParser::ListSeparatorContext>(i);
}


size_t LogicFileParser::OptionDefFloatListContext::getRuleIndex() const {
  return LogicFileParser::RuleOptionDefFloatList;
}


antlrcpp::Any LogicFileParser::OptionDefFloatListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitOptionDefFloatList(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::OptionDefFloatListContext* LogicFileParser::optionDefFloatList() {
  OptionDefFloatListContext *_localctx = _tracker.createInstance<OptionDefFloatListContext>(_ctx, getState());
  enterRule(_localctx, 68, LogicFileParser::RuleOptionDefFloatList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(793);
    match(LogicFileParser::OptionPrefix);
    setState(794);
    match(LogicFileParser::FloatsPrefix);
    setState(795);
    match(LogicFileParser::Ident);
    setState(797);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::Colon) {
      setState(796);
      match(LogicFileParser::Colon);
    }
    setState(802);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogicFileParser::EOL) {
      setState(799);
      match(LogicFileParser::EOL);
      setState(804);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(805);
    match(LogicFileParser::OBkt);
    setState(809);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 105, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(806);
        match(LogicFileParser::EOL); 
      }
      setState(811);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 105, _ctx);
    }
    setState(821);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::SignedNumber) {
      setState(812);
      match(LogicFileParser::SignedNumber);
      setState(818);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 106, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(813);
          listSeparator();
          setState(814);
          match(LogicFileParser::SignedNumber); 
        }
        setState(820);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 106, _ctx);
      }
    }
    setState(826);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogicFileParser::EOL) {
      setState(823);
      match(LogicFileParser::EOL);
      setState(828);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(829);
    match(LogicFileParser::CBkt);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptionDefFloatRangeContext ------------------------------------------------------------------

LogicFileParser::OptionDefFloatRangeContext::OptionDefFloatRangeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::OptionDefFloatRangeContext::OptionPrefix() {
  return getToken(LogicFileParser::OptionPrefix, 0);
}

tree::TerminalNode* LogicFileParser::OptionDefFloatRangeContext::FloatsPrefix() {
  return getToken(LogicFileParser::FloatsPrefix, 0);
}

tree::TerminalNode* LogicFileParser::OptionDefFloatRangeContext::Ident() {
  return getToken(LogicFileParser::Ident, 0);
}

tree::TerminalNode* LogicFileParser::OptionDefFloatRangeContext::OBkt() {
  return getToken(LogicFileParser::OBkt, 0);
}

tree::TerminalNode* LogicFileParser::OptionDefFloatRangeContext::MinKW() {
  return getToken(LogicFileParser::MinKW, 0);
}

std::vector<tree::TerminalNode *> LogicFileParser::OptionDefFloatRangeContext::Colon() {
  return getTokens(LogicFileParser::Colon);
}

tree::TerminalNode* LogicFileParser::OptionDefFloatRangeContext::Colon(size_t i) {
  return getToken(LogicFileParser::Colon, i);
}

std::vector<tree::TerminalNode *> LogicFileParser::OptionDefFloatRangeContext::SignedNumber() {
  return getTokens(LogicFileParser::SignedNumber);
}

tree::TerminalNode* LogicFileParser::OptionDefFloatRangeContext::SignedNumber(size_t i) {
  return getToken(LogicFileParser::SignedNumber, i);
}

LogicFileParser::ListSeparatorContext* LogicFileParser::OptionDefFloatRangeContext::listSeparator() {
  return getRuleContext<LogicFileParser::ListSeparatorContext>(0);
}

tree::TerminalNode* LogicFileParser::OptionDefFloatRangeContext::MaxKW() {
  return getToken(LogicFileParser::MaxKW, 0);
}

tree::TerminalNode* LogicFileParser::OptionDefFloatRangeContext::CBkt() {
  return getToken(LogicFileParser::CBkt, 0);
}

std::vector<tree::TerminalNode *> LogicFileParser::OptionDefFloatRangeContext::EOL() {
  return getTokens(LogicFileParser::EOL);
}

tree::TerminalNode* LogicFileParser::OptionDefFloatRangeContext::EOL(size_t i) {
  return getToken(LogicFileParser::EOL, i);
}


size_t LogicFileParser::OptionDefFloatRangeContext::getRuleIndex() const {
  return LogicFileParser::RuleOptionDefFloatRange;
}


antlrcpp::Any LogicFileParser::OptionDefFloatRangeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitOptionDefFloatRange(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::OptionDefFloatRangeContext* LogicFileParser::optionDefFloatRange() {
  OptionDefFloatRangeContext *_localctx = _tracker.createInstance<OptionDefFloatRangeContext>(_ctx, getState());
  enterRule(_localctx, 70, LogicFileParser::RuleOptionDefFloatRange);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(831);
    match(LogicFileParser::OptionPrefix);
    setState(832);
    match(LogicFileParser::FloatsPrefix);
    setState(833);
    match(LogicFileParser::Ident);
    setState(835);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::Colon) {
      setState(834);
      match(LogicFileParser::Colon);
    }
    setState(840);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogicFileParser::EOL) {
      setState(837);
      match(LogicFileParser::EOL);
      setState(842);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(843);
    match(LogicFileParser::OBkt);
    setState(847);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogicFileParser::EOL) {
      setState(844);
      match(LogicFileParser::EOL);
      setState(849);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(850);
    match(LogicFileParser::MinKW);
    setState(851);
    match(LogicFileParser::Colon);
    setState(852);
    match(LogicFileParser::SignedNumber);
    setState(853);
    listSeparator();
    setState(854);
    match(LogicFileParser::MaxKW);
    setState(855);
    match(LogicFileParser::Colon);
    setState(856);
    match(LogicFileParser::SignedNumber);
    setState(857);
    match(LogicFileParser::CBkt);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptionDefFloatContext ------------------------------------------------------------------

LogicFileParser::OptionDefFloatContext::OptionDefFloatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::OptionDefFloatContext::OptionPrefix() {
  return getToken(LogicFileParser::OptionPrefix, 0);
}

tree::TerminalNode* LogicFileParser::OptionDefFloatContext::FloatPrefix() {
  return getToken(LogicFileParser::FloatPrefix, 0);
}

tree::TerminalNode* LogicFileParser::OptionDefFloatContext::Ident() {
  return getToken(LogicFileParser::Ident, 0);
}

tree::TerminalNode* LogicFileParser::OptionDefFloatContext::Colon() {
  return getToken(LogicFileParser::Colon, 0);
}

tree::TerminalNode* LogicFileParser::OptionDefFloatContext::SignedNumber() {
  return getToken(LogicFileParser::SignedNumber, 0);
}

std::vector<tree::TerminalNode *> LogicFileParser::OptionDefFloatContext::EOL() {
  return getTokens(LogicFileParser::EOL);
}

tree::TerminalNode* LogicFileParser::OptionDefFloatContext::EOL(size_t i) {
  return getToken(LogicFileParser::EOL, i);
}


size_t LogicFileParser::OptionDefFloatContext::getRuleIndex() const {
  return LogicFileParser::RuleOptionDefFloat;
}


antlrcpp::Any LogicFileParser::OptionDefFloatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitOptionDefFloat(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::OptionDefFloatContext* LogicFileParser::optionDefFloat() {
  OptionDefFloatContext *_localctx = _tracker.createInstance<OptionDefFloatContext>(_ctx, getState());
  enterRule(_localctx, 72, LogicFileParser::RuleOptionDefFloat);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(859);
    match(LogicFileParser::OptionPrefix);
    setState(860);
    match(LogicFileParser::FloatPrefix);
    setState(861);
    match(LogicFileParser::Ident);
    setState(862);
    match(LogicFileParser::Colon);
    setState(866);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogicFileParser::EOL) {
      setState(863);
      match(LogicFileParser::EOL);
      setState(868);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(869);
    match(LogicFileParser::SignedNumber);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptionDefBoolContext ------------------------------------------------------------------

LogicFileParser::OptionDefBoolContext::OptionDefBoolContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::OptionDefBoolContext::OptionPrefix() {
  return getToken(LogicFileParser::OptionPrefix, 0);
}

tree::TerminalNode* LogicFileParser::OptionDefBoolContext::BoolPrefix() {
  return getToken(LogicFileParser::BoolPrefix, 0);
}

tree::TerminalNode* LogicFileParser::OptionDefBoolContext::Ident() {
  return getToken(LogicFileParser::Ident, 0);
}

tree::TerminalNode* LogicFileParser::OptionDefBoolContext::Colon() {
  return getToken(LogicFileParser::Colon, 0);
}

tree::TerminalNode* LogicFileParser::OptionDefBoolContext::Bool() {
  return getToken(LogicFileParser::Bool, 0);
}

std::vector<tree::TerminalNode *> LogicFileParser::OptionDefBoolContext::EOL() {
  return getTokens(LogicFileParser::EOL);
}

tree::TerminalNode* LogicFileParser::OptionDefBoolContext::EOL(size_t i) {
  return getToken(LogicFileParser::EOL, i);
}


size_t LogicFileParser::OptionDefBoolContext::getRuleIndex() const {
  return LogicFileParser::RuleOptionDefBool;
}


antlrcpp::Any LogicFileParser::OptionDefBoolContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitOptionDefBool(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::OptionDefBoolContext* LogicFileParser::optionDefBool() {
  OptionDefBoolContext *_localctx = _tracker.createInstance<OptionDefBoolContext>(_ctx, getState());
  enterRule(_localctx, 74, LogicFileParser::RuleOptionDefBool);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(871);
    match(LogicFileParser::OptionPrefix);
    setState(872);
    match(LogicFileParser::BoolPrefix);
    setState(873);
    match(LogicFileParser::Ident);
    setState(874);
    match(LogicFileParser::Colon);
    setState(878);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LogicFileParser::EOL) {
      setState(875);
      match(LogicFileParser::EOL);
      setState(880);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(881);
    match(LogicFileParser::Bool);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

LogicFileParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LogicFileParser::ExprContext::getRuleIndex() const {
  return LogicFileParser::RuleExpr;
}

void LogicFileParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- SubOperatorContext ------------------------------------------------------------------

std::vector<LogicFileParser::ExprContext *> LogicFileParser::SubOperatorContext::expr() {
  return getRuleContexts<LogicFileParser::ExprContext>();
}

LogicFileParser::ExprContext* LogicFileParser::SubOperatorContext::expr(size_t i) {
  return getRuleContext<LogicFileParser::ExprContext>(i);
}

tree::TerminalNode* LogicFileParser::SubOperatorContext::SubSymbol() {
  return getToken(LogicFileParser::SubSymbol, 0);
}

LogicFileParser::SubOperatorContext::SubOperatorContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any LogicFileParser::SubOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitSubOperator(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LeftShiftOperatorContext ------------------------------------------------------------------

std::vector<LogicFileParser::ExprContext *> LogicFileParser::LeftShiftOperatorContext::expr() {
  return getRuleContexts<LogicFileParser::ExprContext>();
}

LogicFileParser::ExprContext* LogicFileParser::LeftShiftOperatorContext::expr(size_t i) {
  return getRuleContext<LogicFileParser::ExprContext>(i);
}

tree::TerminalNode* LogicFileParser::LeftShiftOperatorContext::LSSymbol() {
  return getToken(LogicFileParser::LSSymbol, 0);
}

LogicFileParser::LeftShiftOperatorContext::LeftShiftOperatorContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any LogicFileParser::LeftShiftOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitLeftShiftOperator(this);
  else
    return visitor->visitChildren(this);
}
//----------------- GeqOperatorContext ------------------------------------------------------------------

std::vector<LogicFileParser::ExprContext *> LogicFileParser::GeqOperatorContext::expr() {
  return getRuleContexts<LogicFileParser::ExprContext>();
}

LogicFileParser::ExprContext* LogicFileParser::GeqOperatorContext::expr(size_t i) {
  return getRuleContext<LogicFileParser::ExprContext>(i);
}

tree::TerminalNode* LogicFileParser::GeqOperatorContext::GeqSymbol() {
  return getToken(LogicFileParser::GeqSymbol, 0);
}

LogicFileParser::GeqOperatorContext::GeqOperatorContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any LogicFileParser::GeqOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitGeqOperator(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EqOperatorContext ------------------------------------------------------------------

std::vector<LogicFileParser::ExprContext *> LogicFileParser::EqOperatorContext::expr() {
  return getRuleContexts<LogicFileParser::ExprContext>();
}

LogicFileParser::ExprContext* LogicFileParser::EqOperatorContext::expr(size_t i) {
  return getRuleContext<LogicFileParser::ExprContext>(i);
}

tree::TerminalNode* LogicFileParser::EqOperatorContext::EqSymbol() {
  return getToken(LogicFileParser::EqSymbol, 0);
}

LogicFileParser::EqOperatorContext::EqOperatorContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any LogicFileParser::EqOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitEqOperator(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BaseFuncContext ------------------------------------------------------------------

LogicFileParser::BasefuncContext* LogicFileParser::BaseFuncContext::basefunc() {
  return getRuleContext<LogicFileParser::BasefuncContext>(0);
}

LogicFileParser::BaseFuncContext::BaseFuncContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any LogicFileParser::BaseFuncContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitBaseFunc(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NeqOperatorContext ------------------------------------------------------------------

std::vector<LogicFileParser::ExprContext *> LogicFileParser::NeqOperatorContext::expr() {
  return getRuleContexts<LogicFileParser::ExprContext>();
}

LogicFileParser::ExprContext* LogicFileParser::NeqOperatorContext::expr(size_t i) {
  return getRuleContext<LogicFileParser::ExprContext>(i);
}

tree::TerminalNode* LogicFileParser::NeqOperatorContext::NeqSymbol() {
  return getToken(LogicFileParser::NeqSymbol, 0);
}

LogicFileParser::NeqOperatorContext::NeqOperatorContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any LogicFileParser::NeqOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitNeqOperator(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LineSkipContext ------------------------------------------------------------------

tree::TerminalNode* LogicFileParser::LineSkipContext::EOL() {
  return getToken(LogicFileParser::EOL, 0);
}

LogicFileParser::ExprContext* LogicFileParser::LineSkipContext::expr() {
  return getRuleContext<LogicFileParser::ExprContext>(0);
}

LogicFileParser::LineSkipContext::LineSkipContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any LogicFileParser::LineSkipContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitLineSkip(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TernaryOperatorContext ------------------------------------------------------------------

tree::TerminalNode* LogicFileParser::TernaryOperatorContext::Colon() {
  return getToken(LogicFileParser::Colon, 0);
}

std::vector<LogicFileParser::ExprContext *> LogicFileParser::TernaryOperatorContext::expr() {
  return getRuleContexts<LogicFileParser::ExprContext>();
}

LogicFileParser::ExprContext* LogicFileParser::TernaryOperatorContext::expr(size_t i) {
  return getRuleContext<LogicFileParser::ExprContext>(i);
}

tree::TerminalNode* LogicFileParser::TernaryOperatorContext::Question() {
  return getToken(LogicFileParser::Question, 0);
}

LogicFileParser::TernaryOperatorContext::TernaryOperatorContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any LogicFileParser::TernaryOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitTernaryOperator(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AndOperatorContext ------------------------------------------------------------------

std::vector<LogicFileParser::ExprContext *> LogicFileParser::AndOperatorContext::expr() {
  return getRuleContexts<LogicFileParser::ExprContext>();
}

LogicFileParser::ExprContext* LogicFileParser::AndOperatorContext::expr(size_t i) {
  return getRuleContext<LogicFileParser::ExprContext>(i);
}

tree::TerminalNode* LogicFileParser::AndOperatorContext::AndSymbol() {
  return getToken(LogicFileParser::AndSymbol, 0);
}

LogicFileParser::AndOperatorContext::AndOperatorContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any LogicFileParser::AndOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitAndOperator(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DivOperatorContext ------------------------------------------------------------------

std::vector<LogicFileParser::ExprContext *> LogicFileParser::DivOperatorContext::expr() {
  return getRuleContexts<LogicFileParser::ExprContext>();
}

LogicFileParser::ExprContext* LogicFileParser::DivOperatorContext::expr(size_t i) {
  return getRuleContext<LogicFileParser::ExprContext>(i);
}

tree::TerminalNode* LogicFileParser::DivOperatorContext::DivSymbol() {
  return getToken(LogicFileParser::DivSymbol, 0);
}

LogicFileParser::DivOperatorContext::DivOperatorContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any LogicFileParser::DivOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitDivOperator(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OrOperatorContext ------------------------------------------------------------------

std::vector<LogicFileParser::ExprContext *> LogicFileParser::OrOperatorContext::expr() {
  return getRuleContexts<LogicFileParser::ExprContext>();
}

LogicFileParser::ExprContext* LogicFileParser::OrOperatorContext::expr(size_t i) {
  return getRuleContext<LogicFileParser::ExprContext>(i);
}

tree::TerminalNode* LogicFileParser::OrOperatorContext::OrSymbol() {
  return getToken(LogicFileParser::OrSymbol, 0);
}

LogicFileParser::OrOperatorContext::OrOperatorContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any LogicFileParser::OrOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitOrOperator(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddOperatorContext ------------------------------------------------------------------

std::vector<LogicFileParser::ExprContext *> LogicFileParser::AddOperatorContext::expr() {
  return getRuleContexts<LogicFileParser::ExprContext>();
}

LogicFileParser::ExprContext* LogicFileParser::AddOperatorContext::expr(size_t i) {
  return getRuleContext<LogicFileParser::ExprContext>(i);
}

tree::TerminalNode* LogicFileParser::AddOperatorContext::AddSymbol() {
  return getToken(LogicFileParser::AddSymbol, 0);
}

LogicFileParser::AddOperatorContext::AddOperatorContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any LogicFileParser::AddOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitAddOperator(this);
  else
    return visitor->visitChildren(this);
}
//----------------- GeOperatorContext ------------------------------------------------------------------

std::vector<LogicFileParser::ExprContext *> LogicFileParser::GeOperatorContext::expr() {
  return getRuleContexts<LogicFileParser::ExprContext>();
}

LogicFileParser::ExprContext* LogicFileParser::GeOperatorContext::expr(size_t i) {
  return getRuleContext<LogicFileParser::ExprContext>(i);
}

tree::TerminalNode* LogicFileParser::GeOperatorContext::GeSymbol() {
  return getToken(LogicFileParser::GeSymbol, 0);
}

LogicFileParser::GeOperatorContext::GeOperatorContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any LogicFileParser::GeOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitGeOperator(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LeqOperatorContext ------------------------------------------------------------------

std::vector<LogicFileParser::ExprContext *> LogicFileParser::LeqOperatorContext::expr() {
  return getRuleContexts<LogicFileParser::ExprContext>();
}

LogicFileParser::ExprContext* LogicFileParser::LeqOperatorContext::expr(size_t i) {
  return getRuleContext<LogicFileParser::ExprContext>(i);
}

tree::TerminalNode* LogicFileParser::LeqOperatorContext::LeqSymbol() {
  return getToken(LogicFileParser::LeqSymbol, 0);
}

LogicFileParser::LeqOperatorContext::LeqOperatorContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any LogicFileParser::LeqOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitLeqOperator(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NotOperatorContext ------------------------------------------------------------------

LogicFileParser::ExprContext* LogicFileParser::NotOperatorContext::expr() {
  return getRuleContext<LogicFileParser::ExprContext>(0);
}

tree::TerminalNode* LogicFileParser::NotOperatorContext::NotSymbol() {
  return getToken(LogicFileParser::NotSymbol, 0);
}

LogicFileParser::NotOperatorContext::NotOperatorContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any LogicFileParser::NotOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitNotOperator(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RightShiftOperatorContext ------------------------------------------------------------------

std::vector<LogicFileParser::ExprContext *> LogicFileParser::RightShiftOperatorContext::expr() {
  return getRuleContexts<LogicFileParser::ExprContext>();
}

LogicFileParser::ExprContext* LogicFileParser::RightShiftOperatorContext::expr(size_t i) {
  return getRuleContext<LogicFileParser::ExprContext>(i);
}

tree::TerminalNode* LogicFileParser::RightShiftOperatorContext::RSSymbol() {
  return getToken(LogicFileParser::RSSymbol, 0);
}

LogicFileParser::RightShiftOperatorContext::RightShiftOperatorContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any LogicFileParser::RightShiftOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitRightShiftOperator(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulOperatorContext ------------------------------------------------------------------

std::vector<LogicFileParser::ExprContext *> LogicFileParser::MulOperatorContext::expr() {
  return getRuleContexts<LogicFileParser::ExprContext>();
}

LogicFileParser::ExprContext* LogicFileParser::MulOperatorContext::expr(size_t i) {
  return getRuleContext<LogicFileParser::ExprContext>(i);
}

tree::TerminalNode* LogicFileParser::MulOperatorContext::MulSymbol() {
  return getToken(LogicFileParser::MulSymbol, 0);
}

LogicFileParser::MulOperatorContext::MulOperatorContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any LogicFileParser::MulOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitMulOperator(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LeOperatorContext ------------------------------------------------------------------

std::vector<LogicFileParser::ExprContext *> LogicFileParser::LeOperatorContext::expr() {
  return getRuleContexts<LogicFileParser::ExprContext>();
}

LogicFileParser::ExprContext* LogicFileParser::LeOperatorContext::expr(size_t i) {
  return getRuleContext<LogicFileParser::ExprContext>(i);
}

tree::TerminalNode* LogicFileParser::LeOperatorContext::LeSymbol() {
  return getToken(LogicFileParser::LeSymbol, 0);
}

LogicFileParser::LeOperatorContext::LeOperatorContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any LogicFileParser::LeOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitLeOperator(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ModOperatorContext ------------------------------------------------------------------

std::vector<LogicFileParser::ExprContext *> LogicFileParser::ModOperatorContext::expr() {
  return getRuleContexts<LogicFileParser::ExprContext>();
}

LogicFileParser::ExprContext* LogicFileParser::ModOperatorContext::expr(size_t i) {
  return getRuleContext<LogicFileParser::ExprContext>(i);
}

tree::TerminalNode* LogicFileParser::ModOperatorContext::ModSymbol() {
  return getToken(LogicFileParser::ModSymbol, 0);
}

LogicFileParser::ModOperatorContext::ModOperatorContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any LogicFileParser::ModOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitModOperator(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::ExprContext* LogicFileParser::expr() {
   return expr(0);
}

LogicFileParser::ExprContext* LogicFileParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  LogicFileParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  LogicFileParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 76;
  enterRecursionRule(_localctx, 76, LogicFileParser::RuleExpr, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(889);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LogicFileParser::Bool:
      case LogicFileParser::SignedNumber:
      case LogicFileParser::EscapedString:
      case LogicFileParser::OPar:
      case LogicFileParser::OptionCheckKW:
      case LogicFileParser::HelperCallKW:
      case LogicFileParser::ArgCheckKW:
      case LogicFileParser::LogicValCheckKW:
      case LogicFileParser::EventCheckKW:
      case LogicFileParser::CanReachLocKW:
      case LogicFileParser::CanReachEntranceKW:
      case LogicFileParser::CanReachRegionKW:
      case LogicFileParser::HasItemKW:
      case LogicFileParser::CountItemKW:
      case LogicFileParser::IsMQDungeonKW:
      case LogicFileParser::FloorKW:
      case LogicFileParser::CeilKW:
      case LogicFileParser::EntranceRefKW:
      case LogicFileParser::RegionRefKW:
      case LogicFileParser::LocRefKW:
      case LogicFileParser::ItemRefKW:
      case LogicFileParser::IfPrefix:
      case LogicFileParser::SwitchPrefix:
      case LogicFileParser::Ident: {
        _localctx = _tracker.createInstance<BaseFuncContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(884);
        basefunc();
        break;
      }

      case LogicFileParser::EOL: {
        _localctx = _tracker.createInstance<LineSkipContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(885);
        match(LogicFileParser::EOL);
        setState(886);
        expr(18);
        break;
      }

      case LogicFileParser::NotSymbol: {
        _localctx = _tracker.createInstance<NotOperatorContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(887);
        antlrcpp::downCast<NotOperatorContext *>(_localctx)->prefix = match(LogicFileParser::NotSymbol);
        setState(888);
        expr(17);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(944);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 116, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(942);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 115, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(891);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(892);
          antlrcpp::downCast<MulOperatorContext *>(_localctx)->op = match(LogicFileParser::MulSymbol);
          setState(893);
          antlrcpp::downCast<MulOperatorContext *>(_localctx)->right = expr(17);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<DivOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(894);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(895);
          antlrcpp::downCast<DivOperatorContext *>(_localctx)->op = match(LogicFileParser::DivSymbol);
          setState(896);
          antlrcpp::downCast<DivOperatorContext *>(_localctx)->right = expr(16);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ModOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(897);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(898);
          antlrcpp::downCast<ModOperatorContext *>(_localctx)->op = match(LogicFileParser::ModSymbol);
          setState(899);
          antlrcpp::downCast<ModOperatorContext *>(_localctx)->right = expr(15);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<AddOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(900);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(901);
          antlrcpp::downCast<AddOperatorContext *>(_localctx)->op = match(LogicFileParser::AddSymbol);
          setState(902);
          antlrcpp::downCast<AddOperatorContext *>(_localctx)->right = expr(14);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<SubOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(903);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(904);
          antlrcpp::downCast<SubOperatorContext *>(_localctx)->op = match(LogicFileParser::SubSymbol);
          setState(905);
          antlrcpp::downCast<SubOperatorContext *>(_localctx)->right = expr(13);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<LeftShiftOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(906);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(907);
          antlrcpp::downCast<LeftShiftOperatorContext *>(_localctx)->op = match(LogicFileParser::LSSymbol);
          setState(908);
          antlrcpp::downCast<LeftShiftOperatorContext *>(_localctx)->right = expr(12);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<RightShiftOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(909);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(910);
          antlrcpp::downCast<RightShiftOperatorContext *>(_localctx)->op = match(LogicFileParser::RSSymbol);
          setState(911);
          antlrcpp::downCast<RightShiftOperatorContext *>(_localctx)->right = expr(11);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<LeOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(912);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(913);
          antlrcpp::downCast<LeOperatorContext *>(_localctx)->op = match(LogicFileParser::LeSymbol);
          setState(914);
          antlrcpp::downCast<LeOperatorContext *>(_localctx)->right = expr(10);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<GeOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(915);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(916);
          antlrcpp::downCast<GeOperatorContext *>(_localctx)->op = match(LogicFileParser::GeSymbol);
          setState(917);
          antlrcpp::downCast<GeOperatorContext *>(_localctx)->right = expr(9);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<GeqOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(918);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(919);
          antlrcpp::downCast<GeqOperatorContext *>(_localctx)->op = match(LogicFileParser::GeqSymbol);
          setState(920);
          antlrcpp::downCast<GeqOperatorContext *>(_localctx)->right = expr(8);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<LeqOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(921);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(922);
          antlrcpp::downCast<LeqOperatorContext *>(_localctx)->op = match(LogicFileParser::LeqSymbol);
          setState(923);
          antlrcpp::downCast<LeqOperatorContext *>(_localctx)->right = expr(7);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<NeqOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(924);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(925);
          antlrcpp::downCast<NeqOperatorContext *>(_localctx)->op = match(LogicFileParser::NeqSymbol);
          setState(926);
          antlrcpp::downCast<NeqOperatorContext *>(_localctx)->right = expr(6);
          break;
        }

        case 13: {
          auto newContext = _tracker.createInstance<EqOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(927);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(928);
          antlrcpp::downCast<EqOperatorContext *>(_localctx)->op = match(LogicFileParser::EqSymbol);
          setState(929);
          antlrcpp::downCast<EqOperatorContext *>(_localctx)->right = expr(5);
          break;
        }

        case 14: {
          auto newContext = _tracker.createInstance<OrOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(930);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(931);
          antlrcpp::downCast<OrOperatorContext *>(_localctx)->op = match(LogicFileParser::OrSymbol);
          setState(932);
          antlrcpp::downCast<OrOperatorContext *>(_localctx)->right = expr(4);
          break;
        }

        case 15: {
          auto newContext = _tracker.createInstance<AndOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(933);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(934);
          antlrcpp::downCast<AndOperatorContext *>(_localctx)->op = match(LogicFileParser::AndSymbol);
          setState(935);
          antlrcpp::downCast<AndOperatorContext *>(_localctx)->right = expr(3);
          break;
        }

        case 16: {
          auto newContext = _tracker.createInstance<TernaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(936);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(937);
          antlrcpp::downCast<TernaryOperatorContext *>(_localctx)->op = match(LogicFileParser::Question);
          setState(938);
          antlrcpp::downCast<TernaryOperatorContext *>(_localctx)->right = expr(0);
          setState(939);
          match(LogicFileParser::Colon);
          setState(940);
          expr(1);
          break;
        }

        default:
          break;
        } 
      }
      setState(946);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 116, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- BasefuncContext ------------------------------------------------------------------

LogicFileParser::BasefuncContext::BasefuncContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LogicFileParser::OptionCheckContext* LogicFileParser::BasefuncContext::optionCheck() {
  return getRuleContext<LogicFileParser::OptionCheckContext>(0);
}

LogicFileParser::HelperCallContext* LogicFileParser::BasefuncContext::helperCall() {
  return getRuleContext<LogicFileParser::HelperCallContext>(0);
}

LogicFileParser::ArgCheckContext* LogicFileParser::BasefuncContext::argCheck() {
  return getRuleContext<LogicFileParser::ArgCheckContext>(0);
}

LogicFileParser::LogicValCheckContext* LogicFileParser::BasefuncContext::logicValCheck() {
  return getRuleContext<LogicFileParser::LogicValCheckContext>(0);
}

LogicFileParser::EventCheckContext* LogicFileParser::BasefuncContext::eventCheck() {
  return getRuleContext<LogicFileParser::EventCheckContext>(0);
}

LogicFileParser::CanReachLocCallContext* LogicFileParser::BasefuncContext::canReachLocCall() {
  return getRuleContext<LogicFileParser::CanReachLocCallContext>(0);
}

LogicFileParser::CanReachEntranceCallContext* LogicFileParser::BasefuncContext::canReachEntranceCall() {
  return getRuleContext<LogicFileParser::CanReachEntranceCallContext>(0);
}

LogicFileParser::CanReachRegionCallContext* LogicFileParser::BasefuncContext::canReachRegionCall() {
  return getRuleContext<LogicFileParser::CanReachRegionCallContext>(0);
}

LogicFileParser::HasItemCallContext* LogicFileParser::BasefuncContext::hasItemCall() {
  return getRuleContext<LogicFileParser::HasItemCallContext>(0);
}

LogicFileParser::CountItemCallContext* LogicFileParser::BasefuncContext::countItemCall() {
  return getRuleContext<LogicFileParser::CountItemCallContext>(0);
}

LogicFileParser::IsDungeonMqCallContext* LogicFileParser::BasefuncContext::isDungeonMqCall() {
  return getRuleContext<LogicFileParser::IsDungeonMqCallContext>(0);
}

LogicFileParser::FloorCallContext* LogicFileParser::BasefuncContext::floorCall() {
  return getRuleContext<LogicFileParser::FloorCallContext>(0);
}

LogicFileParser::CeilCallContext* LogicFileParser::BasefuncContext::ceilCall() {
  return getRuleContext<LogicFileParser::CeilCallContext>(0);
}

LogicFileParser::SwitchExprContext* LogicFileParser::BasefuncContext::switchExpr() {
  return getRuleContext<LogicFileParser::SwitchExprContext>(0);
}

LogicFileParser::IfBlockContext* LogicFileParser::BasefuncContext::ifBlock() {
  return getRuleContext<LogicFileParser::IfBlockContext>(0);
}

LogicFileParser::ValueContext* LogicFileParser::BasefuncContext::value() {
  return getRuleContext<LogicFileParser::ValueContext>(0);
}


size_t LogicFileParser::BasefuncContext::getRuleIndex() const {
  return LogicFileParser::RuleBasefunc;
}


antlrcpp::Any LogicFileParser::BasefuncContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitBasefunc(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::BasefuncContext* LogicFileParser::basefunc() {
  BasefuncContext *_localctx = _tracker.createInstance<BasefuncContext>(_ctx, getState());
  enterRule(_localctx, 78, LogicFileParser::RuleBasefunc);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(963);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LogicFileParser::OptionCheckKW: {
        enterOuterAlt(_localctx, 1);
        setState(947);
        optionCheck();
        break;
      }

      case LogicFileParser::HelperCallKW: {
        enterOuterAlt(_localctx, 2);
        setState(948);
        helperCall();
        break;
      }

      case LogicFileParser::ArgCheckKW: {
        enterOuterAlt(_localctx, 3);
        setState(949);
        argCheck();
        break;
      }

      case LogicFileParser::LogicValCheckKW: {
        enterOuterAlt(_localctx, 4);
        setState(950);
        logicValCheck();
        break;
      }

      case LogicFileParser::EventCheckKW: {
        enterOuterAlt(_localctx, 5);
        setState(951);
        eventCheck();
        break;
      }

      case LogicFileParser::CanReachLocKW: {
        enterOuterAlt(_localctx, 6);
        setState(952);
        canReachLocCall();
        break;
      }

      case LogicFileParser::CanReachEntranceKW: {
        enterOuterAlt(_localctx, 7);
        setState(953);
        canReachEntranceCall();
        break;
      }

      case LogicFileParser::CanReachRegionKW: {
        enterOuterAlt(_localctx, 8);
        setState(954);
        canReachRegionCall();
        break;
      }

      case LogicFileParser::HasItemKW: {
        enterOuterAlt(_localctx, 9);
        setState(955);
        hasItemCall();
        break;
      }

      case LogicFileParser::CountItemKW: {
        enterOuterAlt(_localctx, 10);
        setState(956);
        countItemCall();
        break;
      }

      case LogicFileParser::IsMQDungeonKW: {
        enterOuterAlt(_localctx, 11);
        setState(957);
        isDungeonMqCall();
        break;
      }

      case LogicFileParser::FloorKW: {
        enterOuterAlt(_localctx, 12);
        setState(958);
        floorCall();
        break;
      }

      case LogicFileParser::CeilKW: {
        enterOuterAlt(_localctx, 13);
        setState(959);
        ceilCall();
        break;
      }

      case LogicFileParser::SwitchPrefix: {
        enterOuterAlt(_localctx, 14);
        setState(960);
        switchExpr();
        break;
      }

      case LogicFileParser::IfPrefix: {
        enterOuterAlt(_localctx, 15);
        setState(961);
        ifBlock();
        break;
      }

      case LogicFileParser::Bool:
      case LogicFileParser::SignedNumber:
      case LogicFileParser::EscapedString:
      case LogicFileParser::OPar:
      case LogicFileParser::EntranceRefKW:
      case LogicFileParser::RegionRefKW:
      case LogicFileParser::LocRefKW:
      case LogicFileParser::ItemRefKW:
      case LogicFileParser::Ident: {
        enterOuterAlt(_localctx, 16);
        setState(962);
        value();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Arg_passContext ------------------------------------------------------------------

LogicFileParser::Arg_passContext::Arg_passContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LogicFileParser::ExprContext* LogicFileParser::Arg_passContext::expr() {
  return getRuleContext<LogicFileParser::ExprContext>(0);
}

std::vector<tree::TerminalNode *> LogicFileParser::Arg_passContext::Ident() {
  return getTokens(LogicFileParser::Ident);
}

tree::TerminalNode* LogicFileParser::Arg_passContext::Ident(size_t i) {
  return getToken(LogicFileParser::Ident, i);
}

tree::TerminalNode* LogicFileParser::Arg_passContext::EqSymbol() {
  return getToken(LogicFileParser::EqSymbol, 0);
}


size_t LogicFileParser::Arg_passContext::getRuleIndex() const {
  return LogicFileParser::RuleArg_pass;
}


antlrcpp::Any LogicFileParser::Arg_passContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitArg_pass(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::Arg_passContext* LogicFileParser::arg_pass() {
  Arg_passContext *_localctx = _tracker.createInstance<Arg_passContext>(_ctx, getState());
  enterRule(_localctx, 80, LogicFileParser::RuleArg_pass);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(967);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 118, _ctx)) {
    case 1: {
      setState(965);
      match(LogicFileParser::Ident);
      setState(966);
      match(LogicFileParser::EqSymbol);
      break;
    }

    default:
      break;
    }
    setState(971);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 119, _ctx)) {
    case 1: {
      setState(969);
      expr(0);
      break;
    }

    case 2: {
      setState(970);
      match(LogicFileParser::Ident);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Args_passContext ------------------------------------------------------------------

LogicFileParser::Args_passContext::Args_passContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LogicFileParser::Arg_passContext *> LogicFileParser::Args_passContext::arg_pass() {
  return getRuleContexts<LogicFileParser::Arg_passContext>();
}

LogicFileParser::Arg_passContext* LogicFileParser::Args_passContext::arg_pass(size_t i) {
  return getRuleContext<LogicFileParser::Arg_passContext>(i);
}

std::vector<tree::TerminalNode *> LogicFileParser::Args_passContext::Comma() {
  return getTokens(LogicFileParser::Comma);
}

tree::TerminalNode* LogicFileParser::Args_passContext::Comma(size_t i) {
  return getToken(LogicFileParser::Comma, i);
}


size_t LogicFileParser::Args_passContext::getRuleIndex() const {
  return LogicFileParser::RuleArgs_pass;
}


antlrcpp::Any LogicFileParser::Args_passContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitArgs_pass(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::Args_passContext* LogicFileParser::args_pass() {
  Args_passContext *_localctx = _tracker.createInstance<Args_passContext>(_ctx, getState());
  enterRule(_localctx, 82, LogicFileParser::RuleArgs_pass);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(981);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LogicFileParser::Bool)
      | (1ULL << LogicFileParser::SignedNumber)
      | (1ULL << LogicFileParser::EscapedString)
      | (1ULL << LogicFileParser::OPar)
      | (1ULL << LogicFileParser::NotSymbol)
      | (1ULL << LogicFileParser::OptionCheckKW)
      | (1ULL << LogicFileParser::HelperCallKW)
      | (1ULL << LogicFileParser::ArgCheckKW)
      | (1ULL << LogicFileParser::LogicValCheckKW)
      | (1ULL << LogicFileParser::EventCheckKW)
      | (1ULL << LogicFileParser::CanReachLocKW)
      | (1ULL << LogicFileParser::CanReachEntranceKW)
      | (1ULL << LogicFileParser::CanReachRegionKW)
      | (1ULL << LogicFileParser::HasItemKW)
      | (1ULL << LogicFileParser::CountItemKW)
      | (1ULL << LogicFileParser::IsMQDungeonKW)
      | (1ULL << LogicFileParser::FloorKW)
      | (1ULL << LogicFileParser::CeilKW)
      | (1ULL << LogicFileParser::EntranceRefKW)
      | (1ULL << LogicFileParser::RegionRefKW)
      | (1ULL << LogicFileParser::LocRefKW)
      | (1ULL << LogicFileParser::ItemRefKW)
      | (1ULL << LogicFileParser::IfPrefix)
      | (1ULL << LogicFileParser::SwitchPrefix)
      | (1ULL << LogicFileParser::EOL))) != 0) || _la == LogicFileParser::Ident) {
      setState(973);
      arg_pass();
      setState(978);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == LogicFileParser::Comma) {
        setState(974);
        match(LogicFileParser::Comma);
        setState(975);
        arg_pass();
        setState(980);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptionCheckContext ------------------------------------------------------------------

LogicFileParser::OptionCheckContext::OptionCheckContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::OptionCheckContext::OptionCheckKW() {
  return getToken(LogicFileParser::OptionCheckKW, 0);
}

tree::TerminalNode* LogicFileParser::OptionCheckContext::Ident() {
  return getToken(LogicFileParser::Ident, 0);
}


size_t LogicFileParser::OptionCheckContext::getRuleIndex() const {
  return LogicFileParser::RuleOptionCheck;
}


antlrcpp::Any LogicFileParser::OptionCheckContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitOptionCheck(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::OptionCheckContext* LogicFileParser::optionCheck() {
  OptionCheckContext *_localctx = _tracker.createInstance<OptionCheckContext>(_ctx, getState());
  enterRule(_localctx, 84, LogicFileParser::RuleOptionCheck);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(983);
    match(LogicFileParser::OptionCheckKW);
    setState(984);
    match(LogicFileParser::Ident);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HelperCallContext ------------------------------------------------------------------

LogicFileParser::HelperCallContext::HelperCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::HelperCallContext::HelperCallKW() {
  return getToken(LogicFileParser::HelperCallKW, 0);
}

tree::TerminalNode* LogicFileParser::HelperCallContext::Ident() {
  return getToken(LogicFileParser::Ident, 0);
}

tree::TerminalNode* LogicFileParser::HelperCallContext::OPar() {
  return getToken(LogicFileParser::OPar, 0);
}

LogicFileParser::Args_passContext* LogicFileParser::HelperCallContext::args_pass() {
  return getRuleContext<LogicFileParser::Args_passContext>(0);
}

tree::TerminalNode* LogicFileParser::HelperCallContext::CPar() {
  return getToken(LogicFileParser::CPar, 0);
}


size_t LogicFileParser::HelperCallContext::getRuleIndex() const {
  return LogicFileParser::RuleHelperCall;
}


antlrcpp::Any LogicFileParser::HelperCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitHelperCall(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::HelperCallContext* LogicFileParser::helperCall() {
  HelperCallContext *_localctx = _tracker.createInstance<HelperCallContext>(_ctx, getState());
  enterRule(_localctx, 86, LogicFileParser::RuleHelperCall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(986);
    match(LogicFileParser::HelperCallKW);
    setState(987);
    match(LogicFileParser::Ident);
    setState(988);
    match(LogicFileParser::OPar);
    setState(989);
    args_pass();
    setState(990);
    match(LogicFileParser::CPar);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgCheckContext ------------------------------------------------------------------

LogicFileParser::ArgCheckContext::ArgCheckContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::ArgCheckContext::ArgCheckKW() {
  return getToken(LogicFileParser::ArgCheckKW, 0);
}

tree::TerminalNode* LogicFileParser::ArgCheckContext::Ident() {
  return getToken(LogicFileParser::Ident, 0);
}


size_t LogicFileParser::ArgCheckContext::getRuleIndex() const {
  return LogicFileParser::RuleArgCheck;
}


antlrcpp::Any LogicFileParser::ArgCheckContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitArgCheck(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::ArgCheckContext* LogicFileParser::argCheck() {
  ArgCheckContext *_localctx = _tracker.createInstance<ArgCheckContext>(_ctx, getState());
  enterRule(_localctx, 88, LogicFileParser::RuleArgCheck);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(992);
    match(LogicFileParser::ArgCheckKW);
    setState(993);
    match(LogicFileParser::Ident);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicValCheckContext ------------------------------------------------------------------

LogicFileParser::LogicValCheckContext::LogicValCheckContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::LogicValCheckContext::LogicValCheckKW() {
  return getToken(LogicFileParser::LogicValCheckKW, 0);
}

tree::TerminalNode* LogicFileParser::LogicValCheckContext::Dot() {
  return getToken(LogicFileParser::Dot, 0);
}

tree::TerminalNode* LogicFileParser::LogicValCheckContext::Ident() {
  return getToken(LogicFileParser::Ident, 0);
}


size_t LogicFileParser::LogicValCheckContext::getRuleIndex() const {
  return LogicFileParser::RuleLogicValCheck;
}


antlrcpp::Any LogicFileParser::LogicValCheckContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitLogicValCheck(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::LogicValCheckContext* LogicFileParser::logicValCheck() {
  LogicValCheckContext *_localctx = _tracker.createInstance<LogicValCheckContext>(_ctx, getState());
  enterRule(_localctx, 90, LogicFileParser::RuleLogicValCheck);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(995);
    match(LogicFileParser::LogicValCheckKW);
    setState(996);
    match(LogicFileParser::Dot);
    setState(997);
    match(LogicFileParser::Ident);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EventCheckContext ------------------------------------------------------------------

LogicFileParser::EventCheckContext::EventCheckContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::EventCheckContext::EventCheckKW() {
  return getToken(LogicFileParser::EventCheckKW, 0);
}

tree::TerminalNode* LogicFileParser::EventCheckContext::Ident() {
  return getToken(LogicFileParser::Ident, 0);
}


size_t LogicFileParser::EventCheckContext::getRuleIndex() const {
  return LogicFileParser::RuleEventCheck;
}


antlrcpp::Any LogicFileParser::EventCheckContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitEventCheck(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::EventCheckContext* LogicFileParser::eventCheck() {
  EventCheckContext *_localctx = _tracker.createInstance<EventCheckContext>(_ctx, getState());
  enterRule(_localctx, 92, LogicFileParser::RuleEventCheck);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(999);
    match(LogicFileParser::EventCheckKW);
    setState(1000);
    match(LogicFileParser::Ident);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CanReachLocCallContext ------------------------------------------------------------------

LogicFileParser::CanReachLocCallContext::CanReachLocCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::CanReachLocCallContext::CanReachLocKW() {
  return getToken(LogicFileParser::CanReachLocKW, 0);
}

tree::TerminalNode* LogicFileParser::CanReachLocCallContext::OPar() {
  return getToken(LogicFileParser::OPar, 0);
}

tree::TerminalNode* LogicFileParser::CanReachLocCallContext::Ident() {
  return getToken(LogicFileParser::Ident, 0);
}

tree::TerminalNode* LogicFileParser::CanReachLocCallContext::CPar() {
  return getToken(LogicFileParser::CPar, 0);
}

tree::TerminalNode* LogicFileParser::CanReachLocCallContext::Comma() {
  return getToken(LogicFileParser::Comma, 0);
}

tree::TerminalNode* LogicFileParser::CanReachLocCallContext::Age() {
  return getToken(LogicFileParser::Age, 0);
}


size_t LogicFileParser::CanReachLocCallContext::getRuleIndex() const {
  return LogicFileParser::RuleCanReachLocCall;
}


antlrcpp::Any LogicFileParser::CanReachLocCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitCanReachLocCall(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::CanReachLocCallContext* LogicFileParser::canReachLocCall() {
  CanReachLocCallContext *_localctx = _tracker.createInstance<CanReachLocCallContext>(_ctx, getState());
  enterRule(_localctx, 94, LogicFileParser::RuleCanReachLocCall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1002);
    match(LogicFileParser::CanReachLocKW);
    setState(1003);
    match(LogicFileParser::OPar);
    setState(1004);
    match(LogicFileParser::Ident);
    setState(1007);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::Comma) {
      setState(1005);
      match(LogicFileParser::Comma);
      setState(1006);
      match(LogicFileParser::Age);
    }
    setState(1009);
    match(LogicFileParser::CPar);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CanReachEntranceCallContext ------------------------------------------------------------------

LogicFileParser::CanReachEntranceCallContext::CanReachEntranceCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::CanReachEntranceCallContext::CanReachEntranceKW() {
  return getToken(LogicFileParser::CanReachEntranceKW, 0);
}

tree::TerminalNode* LogicFileParser::CanReachEntranceCallContext::OPar() {
  return getToken(LogicFileParser::OPar, 0);
}

tree::TerminalNode* LogicFileParser::CanReachEntranceCallContext::Ident() {
  return getToken(LogicFileParser::Ident, 0);
}

tree::TerminalNode* LogicFileParser::CanReachEntranceCallContext::CPar() {
  return getToken(LogicFileParser::CPar, 0);
}

tree::TerminalNode* LogicFileParser::CanReachEntranceCallContext::Comma() {
  return getToken(LogicFileParser::Comma, 0);
}

tree::TerminalNode* LogicFileParser::CanReachEntranceCallContext::Age() {
  return getToken(LogicFileParser::Age, 0);
}


size_t LogicFileParser::CanReachEntranceCallContext::getRuleIndex() const {
  return LogicFileParser::RuleCanReachEntranceCall;
}


antlrcpp::Any LogicFileParser::CanReachEntranceCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitCanReachEntranceCall(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::CanReachEntranceCallContext* LogicFileParser::canReachEntranceCall() {
  CanReachEntranceCallContext *_localctx = _tracker.createInstance<CanReachEntranceCallContext>(_ctx, getState());
  enterRule(_localctx, 96, LogicFileParser::RuleCanReachEntranceCall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1011);
    match(LogicFileParser::CanReachEntranceKW);
    setState(1012);
    match(LogicFileParser::OPar);
    setState(1013);
    match(LogicFileParser::Ident);
    setState(1016);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::Comma) {
      setState(1014);
      match(LogicFileParser::Comma);
      setState(1015);
      match(LogicFileParser::Age);
    }
    setState(1018);
    match(LogicFileParser::CPar);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CanReachRegionCallContext ------------------------------------------------------------------

LogicFileParser::CanReachRegionCallContext::CanReachRegionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::CanReachRegionCallContext::CanReachRegionKW() {
  return getToken(LogicFileParser::CanReachRegionKW, 0);
}

tree::TerminalNode* LogicFileParser::CanReachRegionCallContext::OPar() {
  return getToken(LogicFileParser::OPar, 0);
}

tree::TerminalNode* LogicFileParser::CanReachRegionCallContext::Ident() {
  return getToken(LogicFileParser::Ident, 0);
}

tree::TerminalNode* LogicFileParser::CanReachRegionCallContext::CPar() {
  return getToken(LogicFileParser::CPar, 0);
}

tree::TerminalNode* LogicFileParser::CanReachRegionCallContext::Comma() {
  return getToken(LogicFileParser::Comma, 0);
}

tree::TerminalNode* LogicFileParser::CanReachRegionCallContext::Age() {
  return getToken(LogicFileParser::Age, 0);
}


size_t LogicFileParser::CanReachRegionCallContext::getRuleIndex() const {
  return LogicFileParser::RuleCanReachRegionCall;
}


antlrcpp::Any LogicFileParser::CanReachRegionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitCanReachRegionCall(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::CanReachRegionCallContext* LogicFileParser::canReachRegionCall() {
  CanReachRegionCallContext *_localctx = _tracker.createInstance<CanReachRegionCallContext>(_ctx, getState());
  enterRule(_localctx, 98, LogicFileParser::RuleCanReachRegionCall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1020);
    match(LogicFileParser::CanReachRegionKW);
    setState(1021);
    match(LogicFileParser::OPar);
    setState(1022);
    match(LogicFileParser::Ident);
    setState(1025);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::Comma) {
      setState(1023);
      match(LogicFileParser::Comma);
      setState(1024);
      match(LogicFileParser::Age);
    }
    setState(1027);
    match(LogicFileParser::CPar);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HasItemCallContext ------------------------------------------------------------------

LogicFileParser::HasItemCallContext::HasItemCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::HasItemCallContext::HasItemKW() {
  return getToken(LogicFileParser::HasItemKW, 0);
}

tree::TerminalNode* LogicFileParser::HasItemCallContext::OPar() {
  return getToken(LogicFileParser::OPar, 0);
}

tree::TerminalNode* LogicFileParser::HasItemCallContext::Ident() {
  return getToken(LogicFileParser::Ident, 0);
}

tree::TerminalNode* LogicFileParser::HasItemCallContext::CPar() {
  return getToken(LogicFileParser::CPar, 0);
}

tree::TerminalNode* LogicFileParser::HasItemCallContext::Comma() {
  return getToken(LogicFileParser::Comma, 0);
}

LogicFileParser::ExprContext* LogicFileParser::HasItemCallContext::expr() {
  return getRuleContext<LogicFileParser::ExprContext>(0);
}


size_t LogicFileParser::HasItemCallContext::getRuleIndex() const {
  return LogicFileParser::RuleHasItemCall;
}


antlrcpp::Any LogicFileParser::HasItemCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitHasItemCall(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::HasItemCallContext* LogicFileParser::hasItemCall() {
  HasItemCallContext *_localctx = _tracker.createInstance<HasItemCallContext>(_ctx, getState());
  enterRule(_localctx, 100, LogicFileParser::RuleHasItemCall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1029);
    match(LogicFileParser::HasItemKW);
    setState(1030);
    match(LogicFileParser::OPar);
    setState(1031);
    match(LogicFileParser::Ident);
    setState(1034);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::Comma) {
      setState(1032);
      match(LogicFileParser::Comma);
      setState(1033);
      expr(0);
    }
    setState(1036);
    match(LogicFileParser::CPar);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CountItemCallContext ------------------------------------------------------------------

LogicFileParser::CountItemCallContext::CountItemCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::CountItemCallContext::CountItemKW() {
  return getToken(LogicFileParser::CountItemKW, 0);
}

tree::TerminalNode* LogicFileParser::CountItemCallContext::OPar() {
  return getToken(LogicFileParser::OPar, 0);
}

tree::TerminalNode* LogicFileParser::CountItemCallContext::Ident() {
  return getToken(LogicFileParser::Ident, 0);
}

tree::TerminalNode* LogicFileParser::CountItemCallContext::CPar() {
  return getToken(LogicFileParser::CPar, 0);
}


size_t LogicFileParser::CountItemCallContext::getRuleIndex() const {
  return LogicFileParser::RuleCountItemCall;
}


antlrcpp::Any LogicFileParser::CountItemCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitCountItemCall(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::CountItemCallContext* LogicFileParser::countItemCall() {
  CountItemCallContext *_localctx = _tracker.createInstance<CountItemCallContext>(_ctx, getState());
  enterRule(_localctx, 102, LogicFileParser::RuleCountItemCall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1038);
    match(LogicFileParser::CountItemKW);
    setState(1039);
    match(LogicFileParser::OPar);
    setState(1040);
    match(LogicFileParser::Ident);
    setState(1041);
    match(LogicFileParser::CPar);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IsDungeonMqCallContext ------------------------------------------------------------------

LogicFileParser::IsDungeonMqCallContext::IsDungeonMqCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::IsDungeonMqCallContext::IsMQDungeonKW() {
  return getToken(LogicFileParser::IsMQDungeonKW, 0);
}

tree::TerminalNode* LogicFileParser::IsDungeonMqCallContext::OPar() {
  return getToken(LogicFileParser::OPar, 0);
}

tree::TerminalNode* LogicFileParser::IsDungeonMqCallContext::Ident() {
  return getToken(LogicFileParser::Ident, 0);
}

tree::TerminalNode* LogicFileParser::IsDungeonMqCallContext::CPar() {
  return getToken(LogicFileParser::CPar, 0);
}


size_t LogicFileParser::IsDungeonMqCallContext::getRuleIndex() const {
  return LogicFileParser::RuleIsDungeonMqCall;
}


antlrcpp::Any LogicFileParser::IsDungeonMqCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitIsDungeonMqCall(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::IsDungeonMqCallContext* LogicFileParser::isDungeonMqCall() {
  IsDungeonMqCallContext *_localctx = _tracker.createInstance<IsDungeonMqCallContext>(_ctx, getState());
  enterRule(_localctx, 104, LogicFileParser::RuleIsDungeonMqCall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1043);
    match(LogicFileParser::IsMQDungeonKW);
    setState(1044);
    match(LogicFileParser::OPar);
    setState(1045);
    match(LogicFileParser::Ident);
    setState(1046);
    match(LogicFileParser::CPar);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FloorCallContext ------------------------------------------------------------------

LogicFileParser::FloorCallContext::FloorCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::FloorCallContext::FloorKW() {
  return getToken(LogicFileParser::FloorKW, 0);
}

tree::TerminalNode* LogicFileParser::FloorCallContext::OPar() {
  return getToken(LogicFileParser::OPar, 0);
}

LogicFileParser::ExprContext* LogicFileParser::FloorCallContext::expr() {
  return getRuleContext<LogicFileParser::ExprContext>(0);
}

tree::TerminalNode* LogicFileParser::FloorCallContext::CPar() {
  return getToken(LogicFileParser::CPar, 0);
}


size_t LogicFileParser::FloorCallContext::getRuleIndex() const {
  return LogicFileParser::RuleFloorCall;
}


antlrcpp::Any LogicFileParser::FloorCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitFloorCall(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::FloorCallContext* LogicFileParser::floorCall() {
  FloorCallContext *_localctx = _tracker.createInstance<FloorCallContext>(_ctx, getState());
  enterRule(_localctx, 106, LogicFileParser::RuleFloorCall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1048);
    match(LogicFileParser::FloorKW);
    setState(1049);
    match(LogicFileParser::OPar);
    setState(1050);
    expr(0);
    setState(1051);
    match(LogicFileParser::CPar);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CeilCallContext ------------------------------------------------------------------

LogicFileParser::CeilCallContext::CeilCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::CeilCallContext::CeilKW() {
  return getToken(LogicFileParser::CeilKW, 0);
}

tree::TerminalNode* LogicFileParser::CeilCallContext::OPar() {
  return getToken(LogicFileParser::OPar, 0);
}

LogicFileParser::ExprContext* LogicFileParser::CeilCallContext::expr() {
  return getRuleContext<LogicFileParser::ExprContext>(0);
}

tree::TerminalNode* LogicFileParser::CeilCallContext::CPar() {
  return getToken(LogicFileParser::CPar, 0);
}


size_t LogicFileParser::CeilCallContext::getRuleIndex() const {
  return LogicFileParser::RuleCeilCall;
}


antlrcpp::Any LogicFileParser::CeilCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitCeilCall(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::CeilCallContext* LogicFileParser::ceilCall() {
  CeilCallContext *_localctx = _tracker.createInstance<CeilCallContext>(_ctx, getState());
  enterRule(_localctx, 108, LogicFileParser::RuleCeilCall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1053);
    match(LogicFileParser::CeilKW);
    setState(1054);
    match(LogicFileParser::OPar);
    setState(1055);
    expr(0);
    setState(1056);
    match(LogicFileParser::CPar);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueContext ------------------------------------------------------------------

LogicFileParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LogicFileParser::ParenExprContext* LogicFileParser::ValueContext::parenExpr() {
  return getRuleContext<LogicFileParser::ParenExprContext>(0);
}

tree::TerminalNode* LogicFileParser::ValueContext::Bool() {
  return getToken(LogicFileParser::Bool, 0);
}

tree::TerminalNode* LogicFileParser::ValueContext::SignedNumber() {
  return getToken(LogicFileParser::SignedNumber, 0);
}

LogicFileParser::EnumValueRefContext* LogicFileParser::ValueContext::enumValueRef() {
  return getRuleContext<LogicFileParser::EnumValueRefContext>(0);
}

LogicFileParser::EntranceRefContext* LogicFileParser::ValueContext::entranceRef() {
  return getRuleContext<LogicFileParser::EntranceRefContext>(0);
}

LogicFileParser::RegionRefContext* LogicFileParser::ValueContext::regionRef() {
  return getRuleContext<LogicFileParser::RegionRefContext>(0);
}

LogicFileParser::LocRefContext* LogicFileParser::ValueContext::locRef() {
  return getRuleContext<LogicFileParser::LocRefContext>(0);
}

LogicFileParser::ItemRefContext* LogicFileParser::ValueContext::itemRef() {
  return getRuleContext<LogicFileParser::ItemRefContext>(0);
}

tree::TerminalNode* LogicFileParser::ValueContext::EscapedString() {
  return getToken(LogicFileParser::EscapedString, 0);
}


size_t LogicFileParser::ValueContext::getRuleIndex() const {
  return LogicFileParser::RuleValue;
}


antlrcpp::Any LogicFileParser::ValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitValue(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::ValueContext* LogicFileParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 110, LogicFileParser::RuleValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1067);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LogicFileParser::OPar: {
        enterOuterAlt(_localctx, 1);
        setState(1058);
        parenExpr();
        break;
      }

      case LogicFileParser::Bool: {
        enterOuterAlt(_localctx, 2);
        setState(1059);
        match(LogicFileParser::Bool);
        break;
      }

      case LogicFileParser::SignedNumber: {
        enterOuterAlt(_localctx, 3);
        setState(1060);
        match(LogicFileParser::SignedNumber);
        break;
      }

      case LogicFileParser::Ident: {
        enterOuterAlt(_localctx, 4);
        setState(1061);
        enumValueRef();
        break;
      }

      case LogicFileParser::EntranceRefKW: {
        enterOuterAlt(_localctx, 5);
        setState(1062);
        entranceRef();
        break;
      }

      case LogicFileParser::RegionRefKW: {
        enterOuterAlt(_localctx, 6);
        setState(1063);
        regionRef();
        break;
      }

      case LogicFileParser::LocRefKW: {
        enterOuterAlt(_localctx, 7);
        setState(1064);
        locRef();
        break;
      }

      case LogicFileParser::ItemRefKW: {
        enterOuterAlt(_localctx, 8);
        setState(1065);
        itemRef();
        break;
      }

      case LogicFileParser::EscapedString: {
        enterOuterAlt(_localctx, 9);
        setState(1066);
        match(LogicFileParser::EscapedString);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParenExprContext ------------------------------------------------------------------

LogicFileParser::ParenExprContext::ParenExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::ParenExprContext::OPar() {
  return getToken(LogicFileParser::OPar, 0);
}

LogicFileParser::ExprContext* LogicFileParser::ParenExprContext::expr() {
  return getRuleContext<LogicFileParser::ExprContext>(0);
}

tree::TerminalNode* LogicFileParser::ParenExprContext::CPar() {
  return getToken(LogicFileParser::CPar, 0);
}


size_t LogicFileParser::ParenExprContext::getRuleIndex() const {
  return LogicFileParser::RuleParenExpr;
}


antlrcpp::Any LogicFileParser::ParenExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitParenExpr(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::ParenExprContext* LogicFileParser::parenExpr() {
  ParenExprContext *_localctx = _tracker.createInstance<ParenExprContext>(_ctx, getState());
  enterRule(_localctx, 112, LogicFileParser::RuleParenExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1069);
    match(LogicFileParser::OPar);
    setState(1070);
    expr(0);
    setState(1071);
    match(LogicFileParser::CPar);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumValueRefContext ------------------------------------------------------------------

LogicFileParser::EnumValueRefContext::EnumValueRefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> LogicFileParser::EnumValueRefContext::Ident() {
  return getTokens(LogicFileParser::Ident);
}

tree::TerminalNode* LogicFileParser::EnumValueRefContext::Ident(size_t i) {
  return getToken(LogicFileParser::Ident, i);
}

tree::TerminalNode* LogicFileParser::EnumValueRefContext::Colon() {
  return getToken(LogicFileParser::Colon, 0);
}


size_t LogicFileParser::EnumValueRefContext::getRuleIndex() const {
  return LogicFileParser::RuleEnumValueRef;
}


antlrcpp::Any LogicFileParser::EnumValueRefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitEnumValueRef(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::EnumValueRefContext* LogicFileParser::enumValueRef() {
  EnumValueRefContext *_localctx = _tracker.createInstance<EnumValueRefContext>(_ctx, getState());
  enterRule(_localctx, 114, LogicFileParser::RuleEnumValueRef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1073);
    match(LogicFileParser::Ident);
    setState(1074);
    match(LogicFileParser::Colon);
    setState(1075);
    match(LogicFileParser::Ident);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EntranceRefContext ------------------------------------------------------------------

LogicFileParser::EntranceRefContext::EntranceRefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::EntranceRefContext::EntranceRefKW() {
  return getToken(LogicFileParser::EntranceRefKW, 0);
}

tree::TerminalNode* LogicFileParser::EntranceRefContext::Ident() {
  return getToken(LogicFileParser::Ident, 0);
}


size_t LogicFileParser::EntranceRefContext::getRuleIndex() const {
  return LogicFileParser::RuleEntranceRef;
}


antlrcpp::Any LogicFileParser::EntranceRefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitEntranceRef(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::EntranceRefContext* LogicFileParser::entranceRef() {
  EntranceRefContext *_localctx = _tracker.createInstance<EntranceRefContext>(_ctx, getState());
  enterRule(_localctx, 116, LogicFileParser::RuleEntranceRef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1077);
    match(LogicFileParser::EntranceRefKW);
    setState(1078);
    match(LogicFileParser::Ident);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RegionRefContext ------------------------------------------------------------------

LogicFileParser::RegionRefContext::RegionRefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::RegionRefContext::RegionRefKW() {
  return getToken(LogicFileParser::RegionRefKW, 0);
}

tree::TerminalNode* LogicFileParser::RegionRefContext::Ident() {
  return getToken(LogicFileParser::Ident, 0);
}


size_t LogicFileParser::RegionRefContext::getRuleIndex() const {
  return LogicFileParser::RuleRegionRef;
}


antlrcpp::Any LogicFileParser::RegionRefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitRegionRef(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::RegionRefContext* LogicFileParser::regionRef() {
  RegionRefContext *_localctx = _tracker.createInstance<RegionRefContext>(_ctx, getState());
  enterRule(_localctx, 118, LogicFileParser::RuleRegionRef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1080);
    match(LogicFileParser::RegionRefKW);
    setState(1081);
    match(LogicFileParser::Ident);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LocRefContext ------------------------------------------------------------------

LogicFileParser::LocRefContext::LocRefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::LocRefContext::LocRefKW() {
  return getToken(LogicFileParser::LocRefKW, 0);
}

tree::TerminalNode* LogicFileParser::LocRefContext::Ident() {
  return getToken(LogicFileParser::Ident, 0);
}


size_t LogicFileParser::LocRefContext::getRuleIndex() const {
  return LogicFileParser::RuleLocRef;
}


antlrcpp::Any LogicFileParser::LocRefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitLocRef(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::LocRefContext* LogicFileParser::locRef() {
  LocRefContext *_localctx = _tracker.createInstance<LocRefContext>(_ctx, getState());
  enterRule(_localctx, 120, LogicFileParser::RuleLocRef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1083);
    match(LogicFileParser::LocRefKW);
    setState(1084);
    match(LogicFileParser::Ident);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ItemRefContext ------------------------------------------------------------------

LogicFileParser::ItemRefContext::ItemRefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::ItemRefContext::ItemRefKW() {
  return getToken(LogicFileParser::ItemRefKW, 0);
}

tree::TerminalNode* LogicFileParser::ItemRefContext::Ident() {
  return getToken(LogicFileParser::Ident, 0);
}


size_t LogicFileParser::ItemRefContext::getRuleIndex() const {
  return LogicFileParser::RuleItemRef;
}


antlrcpp::Any LogicFileParser::ItemRefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitItemRef(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::ItemRefContext* LogicFileParser::itemRef() {
  ItemRefContext *_localctx = _tracker.createInstance<ItemRefContext>(_ctx, getState());
  enterRule(_localctx, 122, LogicFileParser::RuleItemRef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1086);
    match(LogicFileParser::ItemRefKW);
    setState(1087);
    match(LogicFileParser::Ident);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ListSeparatorContext ------------------------------------------------------------------

LogicFileParser::ListSeparatorContext::ListSeparatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LogicFileParser::ListSeparatorContext::Comma() {
  return getToken(LogicFileParser::Comma, 0);
}

std::vector<tree::TerminalNode *> LogicFileParser::ListSeparatorContext::EOL() {
  return getTokens(LogicFileParser::EOL);
}

tree::TerminalNode* LogicFileParser::ListSeparatorContext::EOL(size_t i) {
  return getToken(LogicFileParser::EOL, i);
}


size_t LogicFileParser::ListSeparatorContext::getRuleIndex() const {
  return LogicFileParser::RuleListSeparator;
}


antlrcpp::Any LogicFileParser::ListSeparatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LogicFileParserVisitor*>(visitor))
    return parserVisitor->visitListSeparator(this);
  else
    return visitor->visitChildren(this);
}

LogicFileParser::ListSeparatorContext* LogicFileParser::listSeparator() {
  ListSeparatorContext *_localctx = _tracker.createInstance<ListSeparatorContext>(_ctx, getState());
  enterRule(_localctx, 124, LogicFileParser::RuleListSeparator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1098);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 129, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1089);
      match(LogicFileParser::Comma);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1091);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == LogicFileParser::Comma) {
        setState(1090);
        match(LogicFileParser::Comma);
      }
      setState(1094); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(1093);
        match(LogicFileParser::EOL);
        setState(1096); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == LogicFileParser::EOL);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool LogicFileParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 38: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool LogicFileParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 16);
    case 1: return precpred(_ctx, 15);
    case 2: return precpred(_ctx, 14);
    case 3: return precpred(_ctx, 13);
    case 4: return precpred(_ctx, 12);
    case 5: return precpred(_ctx, 11);
    case 6: return precpred(_ctx, 10);
    case 7: return precpred(_ctx, 9);
    case 8: return precpred(_ctx, 8);
    case 9: return precpred(_ctx, 7);
    case 10: return precpred(_ctx, 6);
    case 11: return precpred(_ctx, 5);
    case 12: return precpred(_ctx, 4);
    case 13: return precpred(_ctx, 3);
    case 14: return precpred(_ctx, 2);
    case 15: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> LogicFileParser::_decisionToDFA;
atn::PredictionContextCache LogicFileParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN LogicFileParser::_atn;
std::vector<uint16_t> LogicFileParser::_serializedATN;

std::vector<std::string> LogicFileParser::_ruleNames = {
  "fileDef", "enumDef", "enumVals", "ifBlock", "ifContinuation", "elseIfBlock", 
  "elseBlock", "switchExpr", "return_case", "caseList", "caseDef", "defaultCase", 
  "args", "arg", "helperDef", "quantityDef", "logicValSet", "nameDef", "classificationDef", 
  "itemDef", "presentWhenDef", "ruleDef", "destDef", "entranceDef", "locationDef", 
  "eventDef", "regionDef", "logicDef", "optionsDef", "optionDefStrings", 
  "optionDefString", "optionDefIntList", "optionDefIntRange", "optionDefInt", 
  "optionDefFloatList", "optionDefFloatRange", "optionDefFloat", "optionDefBool", 
  "expr", "basefunc", "arg_pass", "args_pass", "optionCheck", "helperCall", 
  "argCheck", "logicValCheck", "eventCheck", "canReachLocCall", "canReachEntranceCall", 
  "canReachRegionCall", "hasItemCall", "countItemCall", "isDungeonMqCall", 
  "floorCall", "ceilCall", "value", "parenExpr", "enumValueRef", "entranceRef", 
  "regionRef", "locRef", "itemRef", "listSeparator"
};

std::vector<std::string> LogicFileParser::_literalNames = {
  "", "", "", "", "", "", "", "", "'enum'", "'{'", "'}'", "'('", "')'", 
  "','", "", "", "", "'!='", "'=='", "'>='", "'<='", "'<'", "'>'", "'+'", 
  "'-'", "'*'", "'/'", "'%'", "'>>'", "'<<'", "'\u003F'", "'='", "'.'", 
  "", "", "", "", "", "", "", "", "", "", "", "'floor'", "'ceil'", "", "", 
  "", "", "'if'", "", "'else'", "'switch'", "'case'", "", "'yields '", "", 
  "", "'helper'", "", "", "", "", "", "'item '", "", "", "", "", "", "'entrance'", 
  "", "'location'", "'event'", "'region'", "'logic'", "'options'", "'option'", 
  "'strings'", "'string'", "'ints'", "'int'", "'floats'", "'float'", "'bool'", 
  "'min'", "'max'", "", "':'"
};

std::vector<std::string> LogicFileParser::_symbolicNames = {
  "", "Comment", "MLComment", "Bool", "Age", "SignedNumber", "SignedInt", 
  "EscapedString", "EnumDecPrefix", "OBkt", "CBkt", "OPar", "CPar", "Comma", 
  "OrSymbol", "AndSymbol", "NotSymbol", "NeqSymbol", "EqSymbol", "GeqSymbol", 
  "LeqSymbol", "LeSymbol", "GeSymbol", "AddSymbol", "SubSymbol", "MulSymbol", 
  "DivSymbol", "ModSymbol", "RSSymbol", "LSSymbol", "Question", "ArgAssign", 
  "Dot", "OptionCheckKW", "HelperCallKW", "ArgCheckKW", "LogicValCheckKW", 
  "EventCheckKW", "CanReachLocKW", "CanReachEntranceKW", "CanReachRegionKW", 
  "HasItemKW", "CountItemKW", "IsMQDungeonKW", "FloorKW", "CeilKW", "EntranceRefKW", 
  "RegionRefKW", "LocRefKW", "ItemRefKW", "IfPrefix", "ElseIfPrefix", "ElsePrefix", 
  "SwitchPrefix", "SwitchCaseKW", "SwitchDefaultKW", "SwitchReturnsKW", 
  "EOL", "WS", "HelperPrefix", "QuantityPrefix", "LogicValSetPrefix", "NamePrefix", 
  "ClassPrefix", "Classification", "ItemDefPrefix", "PresentWhenPrefix", 
  "RulePrefix", "DestPrefix", "CantCrossChild", "CantCrossAdult", "EntranceDefPrefix", 
  "LocClassDef", "LocationPrefix", "EventDefPrefix", "RegionDefPrefix", 
  "LogicPrefix", "OptionsDefPrefix", "OptionPrefix", "StringsPrefix", "StringPrefix", 
  "IntsPrefix", "IntPrefix", "FloatsPrefix", "FloatPrefix", "BoolPrefix", 
  "MinKW", "MaxKW", "Ident", "Colon"
};

dfa::Vocabulary LogicFileParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> LogicFileParser::_tokenNames;

LogicFileParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x5b, 0x44f, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 
       0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 
       0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 
       0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 
       0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 0x9, 0x22, 0x4, 0x23, 
       0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 0x25, 0x4, 0x26, 
       0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 0x4, 0x29, 
       0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 0x2c, 
       0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
       0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 
       0x9, 0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 
       0x9, 0x35, 0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 
       0x9, 0x38, 0x4, 0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 
       0x9, 0x3b, 0x4, 0x3c, 0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 
       0x9, 0x3e, 0x4, 0x3f, 0x9, 0x3f, 0x4, 0x40, 0x9, 0x40, 0x3, 0x2, 
       0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x6, 0x2, 0x85, 0xa, 0x2, 0xd, 0x2, 
       0xe, 0x2, 0x86, 0x6, 0x2, 0x89, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x8a, 
       0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 
       0x3, 0x93, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x96, 0xb, 0x3, 0x3, 0x3, 
       0x6, 0x3, 0x99, 0xa, 0x3, 0xd, 0x3, 0xe, 0x3, 0x9a, 0x3, 0x3, 0x7, 
       0x3, 0x9e, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0xa1, 0xb, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x7, 0x3, 0xa5, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0xa8, 0xb, 
       0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0xae, 0xa, 
       0x4, 0xc, 0x4, 0xe, 0x4, 0xb1, 0xb, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 
       0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0xb8, 0xa, 0x5, 0xc, 0x5, 0xe, 
       0x5, 0xbb, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0xbf, 0xa, 0x5, 
       0xc, 0x5, 0xe, 0x5, 0xc2, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 
       0xc6, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0xc9, 0xb, 0x5, 0x3, 0x5, 0x3, 
       0x5, 0x7, 0x5, 0xcd, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0xd0, 0xb, 0x5, 
       0x3, 0x5, 0x5, 0x5, 0xd3, 0xa, 0x5, 0x3, 0x6, 0x7, 0x6, 0xd6, 0xa, 
       0x6, 0xc, 0x6, 0xe, 0x6, 0xd9, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 
       0x6, 0xdd, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
       0x7, 0x7, 0x7, 0xe4, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0xe7, 0xb, 0x7, 
       0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0xeb, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 
       0xee, 0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0xf3, 0xa, 
       0x7, 0xc, 0x7, 0xe, 0x7, 0xf6, 0xb, 0x7, 0x3, 0x7, 0x5, 0x7, 0xf9, 
       0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0xfd, 0xa, 0x8, 0xc, 0x8, 
       0xe, 0x8, 0x100, 0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x104, 0xa, 
       0x8, 0xc, 0x8, 0xe, 0x8, 0x107, 0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 
       0x8, 0x10b, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x10e, 0xb, 0x8, 0x3, 0x8, 
       0x3, 0x8, 0x7, 0x8, 0x112, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x115, 0xb, 
       0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x11a, 0xa, 0x9, 0x3, 
       0x9, 0x7, 0x9, 0x11d, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x120, 0xb, 0x9, 
       0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x124, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 
       0x127, 0xb, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x12b, 0xa, 0x9, 0xc, 
       0x9, 0xe, 0x9, 0x12e, 0xb, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x132, 
       0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x135, 0xb, 0x9, 0x3, 0xa, 0x3, 0xa, 
       0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x6, 0xb, 0x13c, 0xa, 0xb, 0xd, 0xb, 
       0xe, 0xb, 0x13d, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x143, 0xa, 
       0xc, 0x3, 0xc, 0x3, 0xc, 0x6, 0xc, 0x147, 0xa, 0xc, 0xd, 0xc, 0xe, 
       0xc, 0x148, 0x3, 0xc, 0x3, 0xc, 0x6, 0xc, 0x14d, 0xa, 0xc, 0xd, 0xc, 
       0xe, 0xc, 0x14e, 0x5, 0xc, 0x151, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 
       0xd, 0x6, 0xd, 0x156, 0xa, 0xd, 0xd, 0xd, 0xe, 0xd, 0x157, 0x3, 0xd, 
       0x3, 0xd, 0x6, 0xd, 0x15c, 0xa, 0xd, 0xd, 0xd, 0xe, 0xd, 0x15d, 0x3, 
       0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x164, 0xa, 0xe, 0xc, 
       0xe, 0xe, 0xe, 0x167, 0xb, 0xe, 0x7, 0xe, 0x169, 0xa, 0xe, 0xc, 0xe, 
       0xe, 0xe, 0x16c, 0xb, 0xe, 0x5, 0xe, 0x16e, 0xa, 0xe, 0x3, 0xf, 0x3, 
       0xf, 0x5, 0xf, 0x172, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x176, 
       0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
       0x3, 0x10, 0x5, 0x10, 0x17e, 0xa, 0x10, 0x3, 0x10, 0x7, 0x10, 0x181, 
       0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x184, 0xb, 0x10, 0x3, 0x10, 0x3, 
       0x10, 0x7, 0x10, 0x188, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x18b, 0xb, 
       0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0x18f, 0xa, 0x10, 0xc, 0x10, 
       0xe, 0x10, 0x192, 0xb, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0x196, 
       0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x199, 0xb, 0x10, 0x3, 0x11, 0x3, 
       0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 
       0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 
       0x15, 0x3, 0x15, 0x5, 0x15, 0x1aa, 0xa, 0x15, 0x3, 0x15, 0x7, 0x15, 
       0x1ad, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x1b0, 0xb, 0x15, 0x3, 0x15, 
       0x3, 0x15, 0x7, 0x15, 0x1b4, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x1b7, 
       0xb, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 
       0x1bd, 0xa, 0x15, 0x3, 0x15, 0x6, 0x15, 0x1c0, 0xa, 0x15, 0xd, 0x15, 
       0xe, 0x15, 0x1c1, 0x6, 0x15, 0x1c4, 0xa, 0x15, 0xd, 0x15, 0xe, 0x15, 
       0x1c5, 0x3, 0x15, 0x7, 0x15, 0x1c9, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 
       0x1cc, 0xb, 0x15, 0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 0x1d0, 0xa, 0x15, 
       0xc, 0x15, 0xe, 0x15, 0x1d3, 0xb, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 
       0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 
       0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x1e1, 0xa, 0x19, 
       0x3, 0x19, 0x7, 0x19, 0x1e4, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 0x1e7, 
       0xb, 0x19, 0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 0x1eb, 0xa, 0x19, 0xc, 
       0x19, 0xe, 0x19, 0x1ee, 0xb, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
       0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x1f5, 0xa, 0x19, 0x3, 0x19, 0x6, 
       0x19, 0x1f8, 0xa, 0x19, 0xd, 0x19, 0xe, 0x19, 0x1f9, 0x6, 0x19, 0x1fc, 
       0xa, 0x19, 0xd, 0x19, 0xe, 0x19, 0x1fd, 0x3, 0x19, 0x3, 0x19, 0x3, 
       0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x205, 0xa, 0x1a, 0x3, 0x1a, 
       0x7, 0x1a, 0x208, 0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 0x20b, 0xb, 0x1a, 
       0x3, 0x1a, 0x3, 0x1a, 0x7, 0x1a, 0x20f, 0xa, 0x1a, 0xc, 0x1a, 0xe, 
       0x1a, 0x212, 0xb, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
       0x3, 0x1a, 0x5, 0x1a, 0x219, 0xa, 0x1a, 0x3, 0x1a, 0x6, 0x1a, 0x21c, 
       0xa, 0x1a, 0xd, 0x1a, 0xe, 0x1a, 0x21d, 0x6, 0x1a, 0x220, 0xa, 0x1a, 
       0xd, 0x1a, 0xe, 0x1a, 0x221, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 
       0x1b, 0x5, 0x1b, 0x228, 0xa, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
       0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x230, 0xa, 0x1c, 0x3, 
       0x1c, 0x7, 0x1c, 0x233, 0xa, 0x1c, 0xc, 0x1c, 0xe, 0x1c, 0x236, 0xb, 
       0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x7, 0x1c, 0x23a, 0xa, 0x1c, 0xc, 0x1c, 
       0xe, 0x1c, 0x23d, 0xb, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
       0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x244, 0xa, 0x1c, 0x3, 0x1c, 0x6, 0x1c, 
       0x247, 0xa, 0x1c, 0xd, 0x1c, 0xe, 0x1c, 0x248, 0x6, 0x1c, 0x24b, 
       0xa, 0x1c, 0xd, 0x1c, 0xe, 0x1c, 0x24c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
       0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x253, 0xa, 0x1d, 0x3, 0x1d, 0x7, 0x1d, 
       0x256, 0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 0x259, 0xb, 0x1d, 0x3, 0x1d, 
       0x3, 0x1d, 0x7, 0x1d, 0x25d, 0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 0x260, 
       0xb, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x265, 0xa, 
       0x1d, 0x3, 0x1d, 0x6, 0x1d, 0x268, 0xa, 0x1d, 0xd, 0x1d, 0xe, 0x1d, 
       0x269, 0x6, 0x1d, 0x26c, 0xa, 0x1d, 0xd, 0x1d, 0xe, 0x1d, 0x26d, 
       0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x274, 0xa, 
       0x1e, 0x3, 0x1e, 0x7, 0x1e, 0x277, 0xa, 0x1e, 0xc, 0x1e, 0xe, 0x1e, 
       0x27a, 0xb, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x7, 0x1e, 0x27e, 0xa, 0x1e, 
       0xc, 0x1e, 0xe, 0x1e, 0x281, 0xb, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
       0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
       0x1e, 0x5, 0x1e, 0x28c, 0xa, 0x1e, 0x3, 0x1e, 0x6, 0x1e, 0x28f, 0xa, 
       0x1e, 0xd, 0x1e, 0xe, 0x1e, 0x290, 0x6, 0x1e, 0x293, 0xa, 0x1e, 0xd, 
       0x1e, 0xe, 0x1e, 0x294, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 
       0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x29d, 0xa, 0x1f, 0x3, 0x1f, 0x7, 
       0x1f, 0x2a0, 0xa, 0x1f, 0xc, 0x1f, 0xe, 0x1f, 0x2a3, 0xb, 0x1f, 0x3, 
       0x1f, 0x3, 0x1f, 0x7, 0x1f, 0x2a7, 0xa, 0x1f, 0xc, 0x1f, 0xe, 0x1f, 
       0x2aa, 0xb, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x7, 
       0x1f, 0x2b0, 0xa, 0x1f, 0xc, 0x1f, 0xe, 0x1f, 0x2b3, 0xb, 0x1f, 0x5, 
       0x1f, 0x2b5, 0xa, 0x1f, 0x3, 0x1f, 0x7, 0x1f, 0x2b8, 0xa, 0x1f, 0xc, 
       0x1f, 0xe, 0x1f, 0x2bb, 0xb, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 
       0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x5, 0x20, 0x2c3, 0xa, 0x20, 0x3, 
       0x20, 0x7, 0x20, 0x2c6, 0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 0x2c9, 0xb, 
       0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 
       0x21, 0x5, 0x21, 0x2d1, 0xa, 0x21, 0x3, 0x21, 0x7, 0x21, 0x2d4, 0xa, 
       0x21, 0xc, 0x21, 0xe, 0x21, 0x2d7, 0xb, 0x21, 0x3, 0x21, 0x3, 0x21, 
       0x7, 0x21, 0x2db, 0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 0x2de, 0xb, 0x21, 
       0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0x2e4, 0xa, 
       0x21, 0x3, 0x21, 0x7, 0x21, 0x2e7, 0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 
       0x2ea, 0xb, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 
       0x22, 0x3, 0x22, 0x5, 0x22, 0x2f2, 0xa, 0x22, 0x3, 0x22, 0x7, 0x22, 
       0x2f5, 0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 0x2f8, 0xb, 0x22, 0x3, 0x22, 
       0x3, 0x22, 0x7, 0x22, 0x2fc, 0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 0x2ff, 
       0xb, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
       0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x7, 0x22, 0x309, 0xa, 0x22, 0xc, 
       0x22, 0xe, 0x22, 0x30c, 0xb, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 
       0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x7, 0x23, 0x315, 0xa, 
       0x23, 0xc, 0x23, 0xe, 0x23, 0x318, 0xb, 0x23, 0x3, 0x23, 0x3, 0x23, 
       0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 0x320, 0xa, 
       0x24, 0x3, 0x24, 0x7, 0x24, 0x323, 0xa, 0x24, 0xc, 0x24, 0xe, 0x24, 
       0x326, 0xb, 0x24, 0x3, 0x24, 0x3, 0x24, 0x7, 0x24, 0x32a, 0xa, 0x24, 
       0xc, 0x24, 0xe, 0x24, 0x32d, 0xb, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 
       0x24, 0x3, 0x24, 0x7, 0x24, 0x333, 0xa, 0x24, 0xc, 0x24, 0xe, 0x24, 
       0x336, 0xb, 0x24, 0x5, 0x24, 0x338, 0xa, 0x24, 0x3, 0x24, 0x7, 0x24, 
       0x33b, 0xa, 0x24, 0xc, 0x24, 0xe, 0x24, 0x33e, 0xb, 0x24, 0x3, 0x24, 
       0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x5, 0x25, 
       0x346, 0xa, 0x25, 0x3, 0x25, 0x7, 0x25, 0x349, 0xa, 0x25, 0xc, 0x25, 
       0xe, 0x25, 0x34c, 0xb, 0x25, 0x3, 0x25, 0x3, 0x25, 0x7, 0x25, 0x350, 
       0xa, 0x25, 0xc, 0x25, 0xe, 0x25, 0x353, 0xb, 0x25, 0x3, 0x25, 0x3, 
       0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 
       0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 
       0x26, 0x7, 0x26, 0x363, 0xa, 0x26, 0xc, 0x26, 0xe, 0x26, 0x366, 0xb, 
       0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 
       0x27, 0x3, 0x27, 0x7, 0x27, 0x36f, 0xa, 0x27, 0xc, 0x27, 0xe, 0x27, 
       0x372, 0xb, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 
       0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 0x37c, 0xa, 0x28, 
       0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 
       0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 
       0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 
       0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 
       0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 
       0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 
       0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 
       0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 
       0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x7, 0x28, 0x3b1, 0xa, 0x28, 0xc, 
       0x28, 0xe, 0x28, 0x3b4, 0xb, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
       0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
       0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
       0x3, 0x29, 0x5, 0x29, 0x3c6, 0xa, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x5, 
       0x2a, 0x3ca, 0xa, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x3ce, 0xa, 
       0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x7, 0x2b, 0x3d3, 0xa, 0x2b, 
       0xc, 0x2b, 0xe, 0x2b, 0x3d6, 0xb, 0x2b, 0x5, 0x2b, 0x3d8, 0xa, 0x2b, 
       0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 
       0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 
       0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x30, 0x3, 0x30, 
       0x3, 0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 
       0x5, 0x31, 0x3f2, 0xa, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x32, 0x3, 
       0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x3fb, 0xa, 0x32, 
       0x3, 0x32, 0x3, 0x32, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 
       0x3, 0x33, 0x5, 0x33, 0x404, 0xa, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 
       0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x5, 0x34, 0x40d, 
       0xa, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 
       0x3, 0x35, 0x3, 0x35, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 
       0x3, 0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 
       0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x39, 
       0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 
       0x3, 0x39, 0x3, 0x39, 0x5, 0x39, 0x42e, 0xa, 0x39, 0x3, 0x3a, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 
       0x3b, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 
       0x3d, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 0x3, 
       0x3f, 0x3, 0x40, 0x3, 0x40, 0x5, 0x40, 0x446, 0xa, 0x40, 0x3, 0x40, 
       0x6, 0x40, 0x449, 0xa, 0x40, 0xd, 0x40, 0xe, 0x40, 0x44a, 0x5, 0x40, 
       0x44d, 0xa, 0x40, 0x3, 0x40, 0x2, 0x3, 0x4e, 0x41, 0x2, 0x4, 0x6, 
       0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 
       0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 
       0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 
       0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 
       0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 
       0x78, 0x7a, 0x7c, 0x7e, 0x2, 0x2, 0x2, 0x4ca, 0x2, 0x88, 0x3, 0x2, 
       0x2, 0x2, 0x4, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x6, 0xa9, 0x3, 0x2, 0x2, 
       0x2, 0x8, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xa, 0xd7, 0x3, 0x2, 0x2, 0x2, 
       0xc, 0xde, 0x3, 0x2, 0x2, 0x2, 0xe, 0xfa, 0x3, 0x2, 0x2, 0x2, 0x10, 
       0x116, 0x3, 0x2, 0x2, 0x2, 0x12, 0x136, 0x3, 0x2, 0x2, 0x2, 0x14, 
       0x13b, 0x3, 0x2, 0x2, 0x2, 0x16, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x18, 
       0x152, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x1c, 
       0x171, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x177, 0x3, 0x2, 0x2, 0x2, 0x20, 
       0x19a, 0x3, 0x2, 0x2, 0x2, 0x22, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x24, 
       0x1a0, 0x3, 0x2, 0x2, 0x2, 0x26, 0x1a3, 0x3, 0x2, 0x2, 0x2, 0x28, 
       0x1a6, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x1d4, 0x3, 0x2, 0x2, 0x2, 0x2c, 
       0x1d7, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x1da, 0x3, 0x2, 0x2, 0x2, 0x30, 
       0x1dd, 0x3, 0x2, 0x2, 0x2, 0x32, 0x201, 0x3, 0x2, 0x2, 0x2, 0x34, 
       0x225, 0x3, 0x2, 0x2, 0x2, 0x36, 0x22c, 0x3, 0x2, 0x2, 0x2, 0x38, 
       0x250, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x271, 0x3, 0x2, 0x2, 0x2, 0x3c, 
       0x298, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x2be, 0x3, 0x2, 0x2, 0x2, 0x40, 
       0x2cc, 0x3, 0x2, 0x2, 0x2, 0x42, 0x2ed, 0x3, 0x2, 0x2, 0x2, 0x44, 
       0x30f, 0x3, 0x2, 0x2, 0x2, 0x46, 0x31b, 0x3, 0x2, 0x2, 0x2, 0x48, 
       0x341, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x35d, 0x3, 0x2, 0x2, 0x2, 0x4c, 
       0x369, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x37b, 0x3, 0x2, 0x2, 0x2, 0x50, 
       0x3c5, 0x3, 0x2, 0x2, 0x2, 0x52, 0x3c9, 0x3, 0x2, 0x2, 0x2, 0x54, 
       0x3d7, 0x3, 0x2, 0x2, 0x2, 0x56, 0x3d9, 0x3, 0x2, 0x2, 0x2, 0x58, 
       0x3dc, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x3e2, 0x3, 0x2, 0x2, 0x2, 0x5c, 
       0x3e5, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x3e9, 0x3, 0x2, 0x2, 0x2, 0x60, 
       0x3ec, 0x3, 0x2, 0x2, 0x2, 0x62, 0x3f5, 0x3, 0x2, 0x2, 0x2, 0x64, 
       0x3fe, 0x3, 0x2, 0x2, 0x2, 0x66, 0x407, 0x3, 0x2, 0x2, 0x2, 0x68, 
       0x410, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x415, 0x3, 0x2, 0x2, 0x2, 0x6c, 
       0x41a, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x41f, 0x3, 0x2, 0x2, 0x2, 0x70, 
       0x42d, 0x3, 0x2, 0x2, 0x2, 0x72, 0x42f, 0x3, 0x2, 0x2, 0x2, 0x74, 
       0x433, 0x3, 0x2, 0x2, 0x2, 0x76, 0x437, 0x3, 0x2, 0x2, 0x2, 0x78, 
       0x43a, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x43d, 0x3, 0x2, 0x2, 0x2, 0x7c, 
       0x440, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x44c, 0x3, 0x2, 0x2, 0x2, 0x80, 
       0x89, 0x5, 0x38, 0x1d, 0x2, 0x81, 0x89, 0x5, 0x3a, 0x1e, 0x2, 0x82, 
       0x89, 0x5, 0x4, 0x3, 0x2, 0x83, 0x85, 0x7, 0x3b, 0x2, 0x2, 0x84, 
       0x83, 0x3, 0x2, 0x2, 0x2, 0x85, 0x86, 0x3, 0x2, 0x2, 0x2, 0x86, 0x84, 
       0x3, 0x2, 0x2, 0x2, 0x86, 0x87, 0x3, 0x2, 0x2, 0x2, 0x87, 0x89, 0x3, 
       0x2, 0x2, 0x2, 0x88, 0x80, 0x3, 0x2, 0x2, 0x2, 0x88, 0x81, 0x3, 0x2, 
       0x2, 0x2, 0x88, 0x82, 0x3, 0x2, 0x2, 0x2, 0x88, 0x84, 0x3, 0x2, 0x2, 
       0x2, 0x89, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x88, 0x3, 0x2, 0x2, 0x2, 
       0x8a, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8c, 
       0x8d, 0x7, 0x2, 0x2, 0x3, 0x8d, 0x3, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8f, 
       0x7, 0xa, 0x2, 0x2, 0x8f, 0x90, 0x7, 0x5a, 0x2, 0x2, 0x90, 0x94, 
       0x7, 0xb, 0x2, 0x2, 0x91, 0x93, 0x7, 0x3b, 0x2, 0x2, 0x92, 0x91, 
       0x3, 0x2, 0x2, 0x2, 0x93, 0x96, 0x3, 0x2, 0x2, 0x2, 0x94, 0x92, 0x3, 
       0x2, 0x2, 0x2, 0x94, 0x95, 0x3, 0x2, 0x2, 0x2, 0x95, 0x98, 0x3, 0x2, 
       0x2, 0x2, 0x96, 0x94, 0x3, 0x2, 0x2, 0x2, 0x97, 0x99, 0x5, 0x6, 0x4, 
       0x2, 0x98, 0x97, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9a, 0x3, 0x2, 0x2, 0x2, 
       0x9a, 0x98, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x9b, 
       0x9f, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9e, 0x7, 0x3b, 0x2, 0x2, 0x9d, 
       0x9c, 0x3, 0x2, 0x2, 0x2, 0x9e, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x9f, 0x9d, 
       0x3, 0x2, 0x2, 0x2, 0x9f, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa2, 0x3, 
       0x2, 0x2, 0x2, 0xa1, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa6, 0x7, 0xc, 
       0x2, 0x2, 0xa3, 0xa5, 0x7, 0x3b, 0x2, 0x2, 0xa4, 0xa3, 0x3, 0x2, 
       0x2, 0x2, 0xa5, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa4, 0x3, 0x2, 0x2, 
       0x2, 0xa6, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xa7, 0x5, 0x3, 0x2, 0x2, 0x2, 
       0xa8, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xaf, 0x7, 0x5a, 0x2, 0x2, 
       0xaa, 0xab, 0x5, 0x7e, 0x40, 0x2, 0xab, 0xac, 0x7, 0x5a, 0x2, 0x2, 
       0xac, 0xae, 0x3, 0x2, 0x2, 0x2, 0xad, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xae, 
       0xb1, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xad, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb0, 
       0x3, 0x2, 0x2, 0x2, 0xb0, 0x7, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xaf, 0x3, 
       0x2, 0x2, 0x2, 0xb2, 0xb3, 0x7, 0x34, 0x2, 0x2, 0xb3, 0xb4, 0x7, 
       0xd, 0x2, 0x2, 0xb4, 0xb5, 0x5, 0x4e, 0x28, 0x2, 0xb5, 0xb9, 0x7, 
       0xe, 0x2, 0x2, 0xb6, 0xb8, 0x7, 0x3b, 0x2, 0x2, 0xb7, 0xb6, 0x3, 
       0x2, 0x2, 0x2, 0xb8, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xb7, 0x3, 0x2, 
       0x2, 0x2, 0xb9, 0xba, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbc, 0x3, 0x2, 0x2, 
       0x2, 0xbb, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xc0, 0x7, 0xb, 0x2, 0x2, 
       0xbd, 0xbf, 0x7, 0x3b, 0x2, 0x2, 0xbe, 0xbd, 0x3, 0x2, 0x2, 0x2, 
       0xbf, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xc0, 
       0xc1, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc0, 
       0x3, 0x2, 0x2, 0x2, 0xc3, 0xc7, 0x5, 0x4e, 0x28, 0x2, 0xc4, 0xc6, 
       0x7, 0x3b, 0x2, 0x2, 0xc5, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc9, 
       0x3, 0x2, 0x2, 0x2, 0xc7, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 0x3, 
       0x2, 0x2, 0x2, 0xc8, 0xca, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xc7, 0x3, 0x2, 
       0x2, 0x2, 0xca, 0xce, 0x7, 0xc, 0x2, 0x2, 0xcb, 0xcd, 0x7, 0x3b, 
       0x2, 0x2, 0xcc, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xd0, 0x3, 0x2, 0x2, 
       0x2, 0xce, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x3, 0x2, 0x2, 0x2, 
       0xcf, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xce, 0x3, 0x2, 0x2, 0x2, 0xd1, 
       0xd3, 0x5, 0xa, 0x6, 0x2, 0xd2, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd3, 
       0x3, 0x2, 0x2, 0x2, 0xd3, 0x9, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd6, 0x7, 
       0x3b, 0x2, 0x2, 0xd5, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd9, 0x3, 
       0x2, 0x2, 0x2, 0xd7, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd8, 0x3, 0x2, 
       0x2, 0x2, 0xd8, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xd7, 0x3, 0x2, 0x2, 
       0x2, 0xda, 0xdd, 0x5, 0xe, 0x8, 0x2, 0xdb, 0xdd, 0x5, 0xc, 0x7, 0x2, 
       0xdc, 0xda, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xdd, 
       0xb, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdf, 0x7, 0x35, 0x2, 0x2, 0xdf, 0xe0, 
       0x7, 0xd, 0x2, 0x2, 0xe0, 0xe1, 0x5, 0x4e, 0x28, 0x2, 0xe1, 0xe5, 
       0x7, 0xe, 0x2, 0x2, 0xe2, 0xe4, 0x7, 0x3b, 0x2, 0x2, 0xe3, 0xe2, 
       0x3, 0x2, 0x2, 0x2, 0xe4, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe3, 0x3, 
       0x2, 0x2, 0x2, 0xe5, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe8, 0x3, 0x2, 
       0x2, 0x2, 0xe7, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xec, 0x7, 0xb, 0x2, 
       0x2, 0xe9, 0xeb, 0x7, 0x3b, 0x2, 0x2, 0xea, 0xe9, 0x3, 0x2, 0x2, 
       0x2, 0xeb, 0xee, 0x3, 0x2, 0x2, 0x2, 0xec, 0xea, 0x3, 0x2, 0x2, 0x2, 
       0xec, 0xed, 0x3, 0x2, 0x2, 0x2, 0xed, 0xef, 0x3, 0x2, 0x2, 0x2, 0xee, 
       0xec, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf0, 0x5, 0x4e, 0x28, 0x2, 0xf0, 
       0xf4, 0x7, 0xc, 0x2, 0x2, 0xf1, 0xf3, 0x7, 0x3b, 0x2, 0x2, 0xf2, 
       0xf1, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf2, 
       0x3, 0x2, 0x2, 0x2, 0xf4, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf8, 0x3, 
       0x2, 0x2, 0x2, 0xf6, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf9, 0x5, 0xa, 
       0x6, 0x2, 0xf8, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf9, 0x3, 0x2, 0x2, 
       0x2, 0xf9, 0xd, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xfe, 0x7, 0x36, 0x2, 0x2, 
       0xfb, 0xfd, 0x7, 0x3b, 0x2, 0x2, 0xfc, 0xfb, 0x3, 0x2, 0x2, 0x2, 
       0xfd, 0x100, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xfc, 0x3, 0x2, 0x2, 0x2, 
       0xfe, 0xff, 0x3, 0x2, 0x2, 0x2, 0xff, 0x101, 0x3, 0x2, 0x2, 0x2, 
       0x100, 0xfe, 0x3, 0x2, 0x2, 0x2, 0x101, 0x105, 0x7, 0xb, 0x2, 0x2, 
       0x102, 0x104, 0x7, 0x3b, 0x2, 0x2, 0x103, 0x102, 0x3, 0x2, 0x2, 0x2, 
       0x104, 0x107, 0x3, 0x2, 0x2, 0x2, 0x105, 0x103, 0x3, 0x2, 0x2, 0x2, 
       0x105, 0x106, 0x3, 0x2, 0x2, 0x2, 0x106, 0x108, 0x3, 0x2, 0x2, 0x2, 
       0x107, 0x105, 0x3, 0x2, 0x2, 0x2, 0x108, 0x10c, 0x5, 0x4e, 0x28, 
       0x2, 0x109, 0x10b, 0x7, 0x3b, 0x2, 0x2, 0x10a, 0x109, 0x3, 0x2, 0x2, 
       0x2, 0x10b, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10a, 0x3, 0x2, 0x2, 
       0x2, 0x10c, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10f, 0x3, 0x2, 0x2, 
       0x2, 0x10e, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x113, 0x7, 0xc, 0x2, 
       0x2, 0x110, 0x112, 0x7, 0x3b, 0x2, 0x2, 0x111, 0x110, 0x3, 0x2, 0x2, 
       0x2, 0x112, 0x115, 0x3, 0x2, 0x2, 0x2, 0x113, 0x111, 0x3, 0x2, 0x2, 
       0x2, 0x113, 0x114, 0x3, 0x2, 0x2, 0x2, 0x114, 0xf, 0x3, 0x2, 0x2, 
       0x2, 0x115, 0x113, 0x3, 0x2, 0x2, 0x2, 0x116, 0x117, 0x7, 0x37, 0x2, 
       0x2, 0x117, 0x119, 0x5, 0x4e, 0x28, 0x2, 0x118, 0x11a, 0x5, 0x12, 
       0xa, 0x2, 0x119, 0x118, 0x3, 0x2, 0x2, 0x2, 0x119, 0x11a, 0x3, 0x2, 
       0x2, 0x2, 0x11a, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x11d, 0x7, 0x3b, 
       0x2, 0x2, 0x11c, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x120, 0x3, 0x2, 
       0x2, 0x2, 0x11e, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x11f, 0x3, 0x2, 
       0x2, 0x2, 0x11f, 0x121, 0x3, 0x2, 0x2, 0x2, 0x120, 0x11e, 0x3, 0x2, 
       0x2, 0x2, 0x121, 0x125, 0x7, 0xb, 0x2, 0x2, 0x122, 0x124, 0x7, 0x3b, 
       0x2, 0x2, 0x123, 0x122, 0x3, 0x2, 0x2, 0x2, 0x124, 0x127, 0x3, 0x2, 
       0x2, 0x2, 0x125, 0x123, 0x3, 0x2, 0x2, 0x2, 0x125, 0x126, 0x3, 0x2, 
       0x2, 0x2, 0x126, 0x128, 0x3, 0x2, 0x2, 0x2, 0x127, 0x125, 0x3, 0x2, 
       0x2, 0x2, 0x128, 0x12c, 0x5, 0x14, 0xb, 0x2, 0x129, 0x12b, 0x7, 0x3b, 
       0x2, 0x2, 0x12a, 0x129, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x12e, 0x3, 0x2, 
       0x2, 0x2, 0x12c, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12d, 0x3, 0x2, 
       0x2, 0x2, 0x12d, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x12c, 0x3, 0x2, 
       0x2, 0x2, 0x12f, 0x133, 0x7, 0xc, 0x2, 0x2, 0x130, 0x132, 0x7, 0x3b, 
       0x2, 0x2, 0x131, 0x130, 0x3, 0x2, 0x2, 0x2, 0x132, 0x135, 0x3, 0x2, 
       0x2, 0x2, 0x133, 0x131, 0x3, 0x2, 0x2, 0x2, 0x133, 0x134, 0x3, 0x2, 
       0x2, 0x2, 0x134, 0x11, 0x3, 0x2, 0x2, 0x2, 0x135, 0x133, 0x3, 0x2, 
       0x2, 0x2, 0x136, 0x137, 0x7, 0x3a, 0x2, 0x2, 0x137, 0x138, 0x7, 0x5, 
       0x2, 0x2, 0x138, 0x13, 0x3, 0x2, 0x2, 0x2, 0x139, 0x13c, 0x5, 0x16, 
       0xc, 0x2, 0x13a, 0x13c, 0x5, 0x18, 0xd, 0x2, 0x13b, 0x139, 0x3, 0x2, 
       0x2, 0x2, 0x13b, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x13d, 0x3, 0x2, 
       0x2, 0x2, 0x13d, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x13e, 0x3, 0x2, 
       0x2, 0x2, 0x13e, 0x15, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x142, 0x7, 0x38, 
       0x2, 0x2, 0x140, 0x143, 0x5, 0x70, 0x39, 0x2, 0x141, 0x143, 0x7, 
       0x5a, 0x2, 0x2, 0x142, 0x140, 0x3, 0x2, 0x2, 0x2, 0x142, 0x141, 0x3, 
       0x2, 0x2, 0x2, 0x143, 0x144, 0x3, 0x2, 0x2, 0x2, 0x144, 0x146, 0x7, 
       0x5b, 0x2, 0x2, 0x145, 0x147, 0x7, 0x3b, 0x2, 0x2, 0x146, 0x145, 
       0x3, 0x2, 0x2, 0x2, 0x147, 0x148, 0x3, 0x2, 0x2, 0x2, 0x148, 0x146, 
       0x3, 0x2, 0x2, 0x2, 0x148, 0x149, 0x3, 0x2, 0x2, 0x2, 0x149, 0x150, 
       0x3, 0x2, 0x2, 0x2, 0x14a, 0x14c, 0x5, 0x4e, 0x28, 0x2, 0x14b, 0x14d, 
       0x7, 0x3b, 0x2, 0x2, 0x14c, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x14e, 
       0x3, 0x2, 0x2, 0x2, 0x14e, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x14f, 
       0x3, 0x2, 0x2, 0x2, 0x14f, 0x151, 0x3, 0x2, 0x2, 0x2, 0x150, 0x14a, 
       0x3, 0x2, 0x2, 0x2, 0x150, 0x151, 0x3, 0x2, 0x2, 0x2, 0x151, 0x17, 
       0x3, 0x2, 0x2, 0x2, 0x152, 0x153, 0x7, 0x39, 0x2, 0x2, 0x153, 0x155, 
       0x7, 0x5b, 0x2, 0x2, 0x154, 0x156, 0x7, 0x3b, 0x2, 0x2, 0x155, 0x154, 
       0x3, 0x2, 0x2, 0x2, 0x156, 0x157, 0x3, 0x2, 0x2, 0x2, 0x157, 0x155, 
       0x3, 0x2, 0x2, 0x2, 0x157, 0x158, 0x3, 0x2, 0x2, 0x2, 0x158, 0x159, 
       0x3, 0x2, 0x2, 0x2, 0x159, 0x15b, 0x5, 0x4e, 0x28, 0x2, 0x15a, 0x15c, 
       0x7, 0x3b, 0x2, 0x2, 0x15b, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x15d, 
       0x3, 0x2, 0x2, 0x2, 0x15d, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x15e, 
       0x3, 0x2, 0x2, 0x2, 0x15e, 0x19, 0x3, 0x2, 0x2, 0x2, 0x15f, 0x16a, 
       0x5, 0x1c, 0xf, 0x2, 0x160, 0x161, 0x7, 0xf, 0x2, 0x2, 0x161, 0x165, 
       0x5, 0x1c, 0xf, 0x2, 0x162, 0x164, 0x7, 0x3b, 0x2, 0x2, 0x163, 0x162, 
       0x3, 0x2, 0x2, 0x2, 0x164, 0x167, 0x3, 0x2, 0x2, 0x2, 0x165, 0x163, 
       0x3, 0x2, 0x2, 0x2, 0x165, 0x166, 0x3, 0x2, 0x2, 0x2, 0x166, 0x169, 
       0x3, 0x2, 0x2, 0x2, 0x167, 0x165, 0x3, 0x2, 0x2, 0x2, 0x168, 0x160, 
       0x3, 0x2, 0x2, 0x2, 0x169, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x168, 
       0x3, 0x2, 0x2, 0x2, 0x16a, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x16e, 
       0x3, 0x2, 0x2, 0x2, 0x16c, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x15f, 
       0x3, 0x2, 0x2, 0x2, 0x16d, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x1b, 
       0x3, 0x2, 0x2, 0x2, 0x16f, 0x170, 0x7, 0x5a, 0x2, 0x2, 0x170, 0x172, 
       0x7, 0x21, 0x2, 0x2, 0x171, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x171, 0x172, 
       0x3, 0x2, 0x2, 0x2, 0x172, 0x175, 0x3, 0x2, 0x2, 0x2, 0x173, 0x176, 
       0x5, 0x4e, 0x28, 0x2, 0x174, 0x176, 0x7, 0x5a, 0x2, 0x2, 0x175, 0x173, 
       0x3, 0x2, 0x2, 0x2, 0x175, 0x174, 0x3, 0x2, 0x2, 0x2, 0x176, 0x1d, 
       0x3, 0x2, 0x2, 0x2, 0x177, 0x178, 0x7, 0x3d, 0x2, 0x2, 0x178, 0x179, 
       0x7, 0x5a, 0x2, 0x2, 0x179, 0x17a, 0x7, 0xd, 0x2, 0x2, 0x17a, 0x17b, 
       0x5, 0x1a, 0xe, 0x2, 0x17b, 0x17d, 0x7, 0xe, 0x2, 0x2, 0x17c, 0x17e, 
       0x7, 0x5b, 0x2, 0x2, 0x17d, 0x17c, 0x3, 0x2, 0x2, 0x2, 0x17d, 0x17e, 
       0x3, 0x2, 0x2, 0x2, 0x17e, 0x182, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x181, 
       0x7, 0x3b, 0x2, 0x2, 0x180, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x181, 0x184, 
       0x3, 0x2, 0x2, 0x2, 0x182, 0x180, 0x3, 0x2, 0x2, 0x2, 0x182, 0x183, 
       0x3, 0x2, 0x2, 0x2, 0x183, 0x185, 0x3, 0x2, 0x2, 0x2, 0x184, 0x182, 
       0x3, 0x2, 0x2, 0x2, 0x185, 0x189, 0x7, 0xb, 0x2, 0x2, 0x186, 0x188, 
       0x7, 0x3b, 0x2, 0x2, 0x187, 0x186, 0x3, 0x2, 0x2, 0x2, 0x188, 0x18b, 
       0x3, 0x2, 0x2, 0x2, 0x189, 0x187, 0x3, 0x2, 0x2, 0x2, 0x189, 0x18a, 
       0x3, 0x2, 0x2, 0x2, 0x18a, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x18b, 0x189, 
       0x3, 0x2, 0x2, 0x2, 0x18c, 0x190, 0x5, 0x4e, 0x28, 0x2, 0x18d, 0x18f, 
       0x7, 0x3b, 0x2, 0x2, 0x18e, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x192, 
       0x3, 0x2, 0x2, 0x2, 0x190, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x190, 0x191, 
       0x3, 0x2, 0x2, 0x2, 0x191, 0x193, 0x3, 0x2, 0x2, 0x2, 0x192, 0x190, 
       0x3, 0x2, 0x2, 0x2, 0x193, 0x197, 0x7, 0xc, 0x2, 0x2, 0x194, 0x196, 
       0x7, 0x3b, 0x2, 0x2, 0x195, 0x194, 0x3, 0x2, 0x2, 0x2, 0x196, 0x199, 
       0x3, 0x2, 0x2, 0x2, 0x197, 0x195, 0x3, 0x2, 0x2, 0x2, 0x197, 0x198, 
       0x3, 0x2, 0x2, 0x2, 0x198, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x199, 0x197, 
       0x3, 0x2, 0x2, 0x2, 0x19a, 0x19b, 0x7, 0x3e, 0x2, 0x2, 0x19b, 0x19c, 
       0x5, 0x4e, 0x28, 0x2, 0x19c, 0x21, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x19e, 
       0x7, 0x3f, 0x2, 0x2, 0x19e, 0x19f, 0x7, 0x5a, 0x2, 0x2, 0x19f, 0x23, 
       0x3, 0x2, 0x2, 0x2, 0x1a0, 0x1a1, 0x7, 0x40, 0x2, 0x2, 0x1a1, 0x1a2, 
       0x7, 0x9, 0x2, 0x2, 0x1a2, 0x25, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1a4, 
       0x7, 0x41, 0x2, 0x2, 0x1a4, 0x1a5, 0x7, 0x42, 0x2, 0x2, 0x1a5, 0x27, 
       0x3, 0x2, 0x2, 0x2, 0x1a6, 0x1a7, 0x7, 0x43, 0x2, 0x2, 0x1a7, 0x1a9, 
       0x7, 0x5a, 0x2, 0x2, 0x1a8, 0x1aa, 0x7, 0x5b, 0x2, 0x2, 0x1a9, 0x1a8, 
       0x3, 0x2, 0x2, 0x2, 0x1a9, 0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0x1ae, 
       0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1ad, 0x7, 0x3b, 0x2, 0x2, 0x1ac, 0x1ab, 
       0x3, 0x2, 0x2, 0x2, 0x1ad, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1ac, 
       0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x1af, 0x1b1, 
       0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1ae, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1b5, 
       0x7, 0xb, 0x2, 0x2, 0x1b2, 0x1b4, 0x7, 0x3b, 0x2, 0x2, 0x1b3, 0x1b2, 
       0x3, 0x2, 0x2, 0x2, 0x1b4, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x1b5, 0x1b3, 
       0x3, 0x2, 0x2, 0x2, 0x1b5, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0x1c3, 
       0x3, 0x2, 0x2, 0x2, 0x1b7, 0x1b5, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1bd, 
       0x5, 0x22, 0x12, 0x2, 0x1b9, 0x1bd, 0x5, 0x24, 0x13, 0x2, 0x1ba, 
       0x1bd, 0x5, 0x26, 0x14, 0x2, 0x1bb, 0x1bd, 0x5, 0x20, 0x11, 0x2, 
       0x1bc, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x1bc, 0x1b9, 0x3, 0x2, 0x2, 0x2, 
       0x1bc, 0x1ba, 0x3, 0x2, 0x2, 0x2, 0x1bc, 0x1bb, 0x3, 0x2, 0x2, 0x2, 
       0x1bd, 0x1bf, 0x3, 0x2, 0x2, 0x2, 0x1be, 0x1c0, 0x7, 0x3b, 0x2, 0x2, 
       0x1bf, 0x1be, 0x3, 0x2, 0x2, 0x2, 0x1c0, 0x1c1, 0x3, 0x2, 0x2, 0x2, 
       0x1c1, 0x1bf, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1c2, 0x3, 0x2, 0x2, 0x2, 
       0x1c2, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0x1c3, 0x1bc, 0x3, 0x2, 0x2, 0x2, 
       0x1c4, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x1c5, 0x1c3, 0x3, 0x2, 0x2, 0x2, 
       0x1c5, 0x1c6, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1ca, 0x3, 0x2, 0x2, 0x2, 
       0x1c7, 0x1c9, 0x7, 0x3b, 0x2, 0x2, 0x1c8, 0x1c7, 0x3, 0x2, 0x2, 0x2, 
       0x1c9, 0x1cc, 0x3, 0x2, 0x2, 0x2, 0x1ca, 0x1c8, 0x3, 0x2, 0x2, 0x2, 
       0x1ca, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1cd, 0x3, 0x2, 0x2, 0x2, 
       0x1cc, 0x1ca, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1d1, 0x7, 0xc, 0x2, 0x2, 
       0x1ce, 0x1d0, 0x7, 0x3b, 0x2, 0x2, 0x1cf, 0x1ce, 0x3, 0x2, 0x2, 0x2, 
       0x1d0, 0x1d3, 0x3, 0x2, 0x2, 0x2, 0x1d1, 0x1cf, 0x3, 0x2, 0x2, 0x2, 
       0x1d1, 0x1d2, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0x29, 0x3, 0x2, 0x2, 0x2, 
       0x1d3, 0x1d1, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1d5, 0x7, 0x44, 0x2, 0x2, 
       0x1d5, 0x1d6, 0x5, 0x4e, 0x28, 0x2, 0x1d6, 0x2b, 0x3, 0x2, 0x2, 0x2, 
       0x1d7, 0x1d8, 0x7, 0x45, 0x2, 0x2, 0x1d8, 0x1d9, 0x5, 0x4e, 0x28, 
       0x2, 0x1d9, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x1da, 0x1db, 0x7, 0x46, 0x2, 
       0x2, 0x1db, 0x1dc, 0x7, 0x5a, 0x2, 0x2, 0x1dc, 0x2f, 0x3, 0x2, 0x2, 
       0x2, 0x1dd, 0x1de, 0x7, 0x49, 0x2, 0x2, 0x1de, 0x1e0, 0x7, 0x5a, 
       0x2, 0x2, 0x1df, 0x1e1, 0x7, 0x5b, 0x2, 0x2, 0x1e0, 0x1df, 0x3, 0x2, 
       0x2, 0x2, 0x1e0, 0x1e1, 0x3, 0x2, 0x2, 0x2, 0x1e1, 0x1e5, 0x3, 0x2, 
       0x2, 0x2, 0x1e2, 0x1e4, 0x7, 0x3b, 0x2, 0x2, 0x1e3, 0x1e2, 0x3, 0x2, 
       0x2, 0x2, 0x1e4, 0x1e7, 0x3, 0x2, 0x2, 0x2, 0x1e5, 0x1e3, 0x3, 0x2, 
       0x2, 0x2, 0x1e5, 0x1e6, 0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1e8, 0x3, 0x2, 
       0x2, 0x2, 0x1e7, 0x1e5, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1ec, 0x7, 0xb, 
       0x2, 0x2, 0x1e9, 0x1eb, 0x7, 0x3b, 0x2, 0x2, 0x1ea, 0x1e9, 0x3, 0x2, 
       0x2, 0x2, 0x1eb, 0x1ee, 0x3, 0x2, 0x2, 0x2, 0x1ec, 0x1ea, 0x3, 0x2, 
       0x2, 0x2, 0x1ec, 0x1ed, 0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1fb, 0x3, 0x2, 
       0x2, 0x2, 0x1ee, 0x1ec, 0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1f5, 0x5, 0x2a, 
       0x16, 0x2, 0x1f0, 0x1f5, 0x5, 0x2c, 0x17, 0x2, 0x1f1, 0x1f5, 0x5, 
       0x2e, 0x18, 0x2, 0x1f2, 0x1f5, 0x7, 0x48, 0x2, 0x2, 0x1f3, 0x1f5, 
       0x7, 0x47, 0x2, 0x2, 0x1f4, 0x1ef, 0x3, 0x2, 0x2, 0x2, 0x1f4, 0x1f0, 
       0x3, 0x2, 0x2, 0x2, 0x1f4, 0x1f1, 0x3, 0x2, 0x2, 0x2, 0x1f4, 0x1f2, 
       0x3, 0x2, 0x2, 0x2, 0x1f4, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1f5, 0x1f7, 
       0x3, 0x2, 0x2, 0x2, 0x1f6, 0x1f8, 0x7, 0x3b, 0x2, 0x2, 0x1f7, 0x1f6, 
       0x3, 0x2, 0x2, 0x2, 0x1f8, 0x1f9, 0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1f7, 
       0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x1fa, 0x1fc, 
       0x3, 0x2, 0x2, 0x2, 0x1fb, 0x1f4, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1fd, 
       0x3, 0x2, 0x2, 0x2, 0x1fd, 0x1fb, 0x3, 0x2, 0x2, 0x2, 0x1fd, 0x1fe, 
       0x3, 0x2, 0x2, 0x2, 0x1fe, 0x1ff, 0x3, 0x2, 0x2, 0x2, 0x1ff, 0x200, 
       0x7, 0xc, 0x2, 0x2, 0x200, 0x31, 0x3, 0x2, 0x2, 0x2, 0x201, 0x202, 
       0x7, 0x4b, 0x2, 0x2, 0x202, 0x204, 0x7, 0x5a, 0x2, 0x2, 0x203, 0x205, 
       0x7, 0x5b, 0x2, 0x2, 0x204, 0x203, 0x3, 0x2, 0x2, 0x2, 0x204, 0x205, 
       0x3, 0x2, 0x2, 0x2, 0x205, 0x209, 0x3, 0x2, 0x2, 0x2, 0x206, 0x208, 
       0x7, 0x3b, 0x2, 0x2, 0x207, 0x206, 0x3, 0x2, 0x2, 0x2, 0x208, 0x20b, 
       0x3, 0x2, 0x2, 0x2, 0x209, 0x207, 0x3, 0x2, 0x2, 0x2, 0x209, 0x20a, 
       0x3, 0x2, 0x2, 0x2, 0x20a, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x209, 
       0x3, 0x2, 0x2, 0x2, 0x20c, 0x210, 0x7, 0xb, 0x2, 0x2, 0x20d, 0x20f, 
       0x7, 0x3b, 0x2, 0x2, 0x20e, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x20f, 0x212, 
       0x3, 0x2, 0x2, 0x2, 0x210, 0x20e, 0x3, 0x2, 0x2, 0x2, 0x210, 0x211, 
       0x3, 0x2, 0x2, 0x2, 0x211, 0x21f, 0x3, 0x2, 0x2, 0x2, 0x212, 0x210, 
       0x3, 0x2, 0x2, 0x2, 0x213, 0x219, 0x5, 0x24, 0x13, 0x2, 0x214, 0x219, 
       0x5, 0x2c, 0x17, 0x2, 0x215, 0x219, 0x7, 0x4a, 0x2, 0x2, 0x216, 0x219, 
       0x5, 0x2c, 0x17, 0x2, 0x217, 0x219, 0x5, 0x2a, 0x16, 0x2, 0x218, 
       0x213, 0x3, 0x2, 0x2, 0x2, 0x218, 0x214, 0x3, 0x2, 0x2, 0x2, 0x218, 
       0x215, 0x3, 0x2, 0x2, 0x2, 0x218, 0x216, 0x3, 0x2, 0x2, 0x2, 0x218, 
       0x217, 0x3, 0x2, 0x2, 0x2, 0x219, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x21a, 
       0x21c, 0x7, 0x3b, 0x2, 0x2, 0x21b, 0x21a, 0x3, 0x2, 0x2, 0x2, 0x21c, 
       0x21d, 0x3, 0x2, 0x2, 0x2, 0x21d, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x21d, 
       0x21e, 0x3, 0x2, 0x2, 0x2, 0x21e, 0x220, 0x3, 0x2, 0x2, 0x2, 0x21f, 
       0x218, 0x3, 0x2, 0x2, 0x2, 0x220, 0x221, 0x3, 0x2, 0x2, 0x2, 0x221, 
       0x21f, 0x3, 0x2, 0x2, 0x2, 0x221, 0x222, 0x3, 0x2, 0x2, 0x2, 0x222, 
       0x223, 0x3, 0x2, 0x2, 0x2, 0x223, 0x224, 0x7, 0xc, 0x2, 0x2, 0x224, 
       0x33, 0x3, 0x2, 0x2, 0x2, 0x225, 0x227, 0x7, 0x4c, 0x2, 0x2, 0x226, 
       0x228, 0x7, 0x5a, 0x2, 0x2, 0x227, 0x226, 0x3, 0x2, 0x2, 0x2, 0x227, 
       0x228, 0x3, 0x2, 0x2, 0x2, 0x228, 0x229, 0x3, 0x2, 0x2, 0x2, 0x229, 
       0x22a, 0x7, 0x5b, 0x2, 0x2, 0x22a, 0x22b, 0x5, 0x4e, 0x28, 0x2, 0x22b, 
       0x35, 0x3, 0x2, 0x2, 0x2, 0x22c, 0x22d, 0x7, 0x4d, 0x2, 0x2, 0x22d, 
       0x22f, 0x7, 0x5a, 0x2, 0x2, 0x22e, 0x230, 0x7, 0x5b, 0x2, 0x2, 0x22f, 
       0x22e, 0x3, 0x2, 0x2, 0x2, 0x22f, 0x230, 0x3, 0x2, 0x2, 0x2, 0x230, 
       0x234, 0x3, 0x2, 0x2, 0x2, 0x231, 0x233, 0x7, 0x3b, 0x2, 0x2, 0x232, 
       0x231, 0x3, 0x2, 0x2, 0x2, 0x233, 0x236, 0x3, 0x2, 0x2, 0x2, 0x234, 
       0x232, 0x3, 0x2, 0x2, 0x2, 0x234, 0x235, 0x3, 0x2, 0x2, 0x2, 0x235, 
       0x237, 0x3, 0x2, 0x2, 0x2, 0x236, 0x234, 0x3, 0x2, 0x2, 0x2, 0x237, 
       0x23b, 0x7, 0xb, 0x2, 0x2, 0x238, 0x23a, 0x7, 0x3b, 0x2, 0x2, 0x239, 
       0x238, 0x3, 0x2, 0x2, 0x2, 0x23a, 0x23d, 0x3, 0x2, 0x2, 0x2, 0x23b, 
       0x239, 0x3, 0x2, 0x2, 0x2, 0x23b, 0x23c, 0x3, 0x2, 0x2, 0x2, 0x23c, 
       0x24a, 0x3, 0x2, 0x2, 0x2, 0x23d, 0x23b, 0x3, 0x2, 0x2, 0x2, 0x23e, 
       0x244, 0x5, 0x24, 0x13, 0x2, 0x23f, 0x244, 0x5, 0x32, 0x1a, 0x2, 
       0x240, 0x244, 0x5, 0x30, 0x19, 0x2, 0x241, 0x244, 0x5, 0x34, 0x1b, 
       0x2, 0x242, 0x244, 0x5, 0x2a, 0x16, 0x2, 0x243, 0x23e, 0x3, 0x2, 
       0x2, 0x2, 0x243, 0x23f, 0x3, 0x2, 0x2, 0x2, 0x243, 0x240, 0x3, 0x2, 
       0x2, 0x2, 0x243, 0x241, 0x3, 0x2, 0x2, 0x2, 0x243, 0x242, 0x3, 0x2, 
       0x2, 0x2, 0x244, 0x246, 0x3, 0x2, 0x2, 0x2, 0x245, 0x247, 0x7, 0x3b, 
       0x2, 0x2, 0x246, 0x245, 0x3, 0x2, 0x2, 0x2, 0x247, 0x248, 0x3, 0x2, 
       0x2, 0x2, 0x248, 0x246, 0x3, 0x2, 0x2, 0x2, 0x248, 0x249, 0x3, 0x2, 
       0x2, 0x2, 0x249, 0x24b, 0x3, 0x2, 0x2, 0x2, 0x24a, 0x243, 0x3, 0x2, 
       0x2, 0x2, 0x24b, 0x24c, 0x3, 0x2, 0x2, 0x2, 0x24c, 0x24a, 0x3, 0x2, 
       0x2, 0x2, 0x24c, 0x24d, 0x3, 0x2, 0x2, 0x2, 0x24d, 0x24e, 0x3, 0x2, 
       0x2, 0x2, 0x24e, 0x24f, 0x7, 0xc, 0x2, 0x2, 0x24f, 0x37, 0x3, 0x2, 
       0x2, 0x2, 0x250, 0x252, 0x7, 0x4e, 0x2, 0x2, 0x251, 0x253, 0x7, 0x5b, 
       0x2, 0x2, 0x252, 0x251, 0x3, 0x2, 0x2, 0x2, 0x252, 0x253, 0x3, 0x2, 
       0x2, 0x2, 0x253, 0x257, 0x3, 0x2, 0x2, 0x2, 0x254, 0x256, 0x7, 0x3b, 
       0x2, 0x2, 0x255, 0x254, 0x3, 0x2, 0x2, 0x2, 0x256, 0x259, 0x3, 0x2, 
       0x2, 0x2, 0x257, 0x255, 0x3, 0x2, 0x2, 0x2, 0x257, 0x258, 0x3, 0x2, 
       0x2, 0x2, 0x258, 0x25a, 0x3, 0x2, 0x2, 0x2, 0x259, 0x257, 0x3, 0x2, 
       0x2, 0x2, 0x25a, 0x25e, 0x7, 0xb, 0x2, 0x2, 0x25b, 0x25d, 0x7, 0x3b, 
       0x2, 0x2, 0x25c, 0x25b, 0x3, 0x2, 0x2, 0x2, 0x25d, 0x260, 0x3, 0x2, 
       0x2, 0x2, 0x25e, 0x25c, 0x3, 0x2, 0x2, 0x2, 0x25e, 0x25f, 0x3, 0x2, 
       0x2, 0x2, 0x25f, 0x26b, 0x3, 0x2, 0x2, 0x2, 0x260, 0x25e, 0x3, 0x2, 
       0x2, 0x2, 0x261, 0x265, 0x5, 0x36, 0x1c, 0x2, 0x262, 0x265, 0x5, 
       0x28, 0x15, 0x2, 0x263, 0x265, 0x5, 0x1e, 0x10, 0x2, 0x264, 0x261, 
       0x3, 0x2, 0x2, 0x2, 0x264, 0x262, 0x3, 0x2, 0x2, 0x2, 0x264, 0x263, 
       0x3, 0x2, 0x2, 0x2, 0x265, 0x267, 0x3, 0x2, 0x2, 0x2, 0x266, 0x268, 
       0x7, 0x3b, 0x2, 0x2, 0x267, 0x266, 0x3, 0x2, 0x2, 0x2, 0x268, 0x269, 
       0x3, 0x2, 0x2, 0x2, 0x269, 0x267, 0x3, 0x2, 0x2, 0x2, 0x269, 0x26a, 
       0x3, 0x2, 0x2, 0x2, 0x26a, 0x26c, 0x3, 0x2, 0x2, 0x2, 0x26b, 0x264, 
       0x3, 0x2, 0x2, 0x2, 0x26c, 0x26d, 0x3, 0x2, 0x2, 0x2, 0x26d, 0x26b, 
       0x3, 0x2, 0x2, 0x2, 0x26d, 0x26e, 0x3, 0x2, 0x2, 0x2, 0x26e, 0x26f, 
       0x3, 0x2, 0x2, 0x2, 0x26f, 0x270, 0x7, 0xc, 0x2, 0x2, 0x270, 0x39, 
       0x3, 0x2, 0x2, 0x2, 0x271, 0x273, 0x7, 0x4f, 0x2, 0x2, 0x272, 0x274, 
       0x7, 0x5b, 0x2, 0x2, 0x273, 0x272, 0x3, 0x2, 0x2, 0x2, 0x273, 0x274, 
       0x3, 0x2, 0x2, 0x2, 0x274, 0x278, 0x3, 0x2, 0x2, 0x2, 0x275, 0x277, 
       0x7, 0x3b, 0x2, 0x2, 0x276, 0x275, 0x3, 0x2, 0x2, 0x2, 0x277, 0x27a, 
       0x3, 0x2, 0x2, 0x2, 0x278, 0x276, 0x3, 0x2, 0x2, 0x2, 0x278, 0x279, 
       0x3, 0x2, 0x2, 0x2, 0x279, 0x27b, 0x3, 0x2, 0x2, 0x2, 0x27a, 0x278, 
       0x3, 0x2, 0x2, 0x2, 0x27b, 0x27f, 0x7, 0xb, 0x2, 0x2, 0x27c, 0x27e, 
       0x7, 0x3b, 0x2, 0x2, 0x27d, 0x27c, 0x3, 0x2, 0x2, 0x2, 0x27e, 0x281, 
       0x3, 0x2, 0x2, 0x2, 0x27f, 0x27d, 0x3, 0x2, 0x2, 0x2, 0x27f, 0x280, 
       0x3, 0x2, 0x2, 0x2, 0x280, 0x292, 0x3, 0x2, 0x2, 0x2, 0x281, 0x27f, 
       0x3, 0x2, 0x2, 0x2, 0x282, 0x28c, 0x5, 0x3c, 0x1f, 0x2, 0x283, 0x28c, 
       0x5, 0x42, 0x22, 0x2, 0x284, 0x28c, 0x5, 0x40, 0x21, 0x2, 0x285, 
       0x28c, 0x5, 0x48, 0x25, 0x2, 0x286, 0x28c, 0x5, 0x46, 0x24, 0x2, 
       0x287, 0x28c, 0x5, 0x44, 0x23, 0x2, 0x288, 0x28c, 0x5, 0x4a, 0x26, 
       0x2, 0x289, 0x28c, 0x5, 0x3e, 0x20, 0x2, 0x28a, 0x28c, 0x5, 0x4c, 
       0x27, 0x2, 0x28b, 0x282, 0x3, 0x2, 0x2, 0x2, 0x28b, 0x283, 0x3, 0x2, 
       0x2, 0x2, 0x28b, 0x284, 0x3, 0x2, 0x2, 0x2, 0x28b, 0x285, 0x3, 0x2, 
       0x2, 0x2, 0x28b, 0x286, 0x3, 0x2, 0x2, 0x2, 0x28b, 0x287, 0x3, 0x2, 
       0x2, 0x2, 0x28b, 0x288, 0x3, 0x2, 0x2, 0x2, 0x28b, 0x289, 0x3, 0x2, 
       0x2, 0x2, 0x28b, 0x28a, 0x3, 0x2, 0x2, 0x2, 0x28c, 0x28e, 0x3, 0x2, 
       0x2, 0x2, 0x28d, 0x28f, 0x7, 0x3b, 0x2, 0x2, 0x28e, 0x28d, 0x3, 0x2, 
       0x2, 0x2, 0x28f, 0x290, 0x3, 0x2, 0x2, 0x2, 0x290, 0x28e, 0x3, 0x2, 
       0x2, 0x2, 0x290, 0x291, 0x3, 0x2, 0x2, 0x2, 0x291, 0x293, 0x3, 0x2, 
       0x2, 0x2, 0x292, 0x28b, 0x3, 0x2, 0x2, 0x2, 0x293, 0x294, 0x3, 0x2, 
       0x2, 0x2, 0x294, 0x292, 0x3, 0x2, 0x2, 0x2, 0x294, 0x295, 0x3, 0x2, 
       0x2, 0x2, 0x295, 0x296, 0x3, 0x2, 0x2, 0x2, 0x296, 0x297, 0x7, 0xc, 
       0x2, 0x2, 0x297, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x298, 0x299, 0x7, 0x50, 
       0x2, 0x2, 0x299, 0x29a, 0x7, 0x51, 0x2, 0x2, 0x29a, 0x29c, 0x7, 0x5a, 
       0x2, 0x2, 0x29b, 0x29d, 0x7, 0x5b, 0x2, 0x2, 0x29c, 0x29b, 0x3, 0x2, 
       0x2, 0x2, 0x29c, 0x29d, 0x3, 0x2, 0x2, 0x2, 0x29d, 0x2a1, 0x3, 0x2, 
       0x2, 0x2, 0x29e, 0x2a0, 0x7, 0x3b, 0x2, 0x2, 0x29f, 0x29e, 0x3, 0x2, 
       0x2, 0x2, 0x2a0, 0x2a3, 0x3, 0x2, 0x2, 0x2, 0x2a1, 0x29f, 0x3, 0x2, 
       0x2, 0x2, 0x2a1, 0x2a2, 0x3, 0x2, 0x2, 0x2, 0x2a2, 0x2a4, 0x3, 0x2, 
       0x2, 0x2, 0x2a3, 0x2a1, 0x3, 0x2, 0x2, 0x2, 0x2a4, 0x2a8, 0x7, 0xb, 
       0x2, 0x2, 0x2a5, 0x2a7, 0x7, 0x3b, 0x2, 0x2, 0x2a6, 0x2a5, 0x3, 0x2, 
       0x2, 0x2, 0x2a7, 0x2aa, 0x3, 0x2, 0x2, 0x2, 0x2a8, 0x2a6, 0x3, 0x2, 
       0x2, 0x2, 0x2a8, 0x2a9, 0x3, 0x2, 0x2, 0x2, 0x2a9, 0x2b4, 0x3, 0x2, 
       0x2, 0x2, 0x2aa, 0x2a8, 0x3, 0x2, 0x2, 0x2, 0x2ab, 0x2b1, 0x7, 0x9, 
       0x2, 0x2, 0x2ac, 0x2ad, 0x5, 0x7e, 0x40, 0x2, 0x2ad, 0x2ae, 0x7, 
       0x9, 0x2, 0x2, 0x2ae, 0x2b0, 0x3, 0x2, 0x2, 0x2, 0x2af, 0x2ac, 0x3, 
       0x2, 0x2, 0x2, 0x2b0, 0x2b3, 0x3, 0x2, 0x2, 0x2, 0x2b1, 0x2af, 0x3, 
       0x2, 0x2, 0x2, 0x2b1, 0x2b2, 0x3, 0x2, 0x2, 0x2, 0x2b2, 0x2b5, 0x3, 
       0x2, 0x2, 0x2, 0x2b3, 0x2b1, 0x3, 0x2, 0x2, 0x2, 0x2b4, 0x2ab, 0x3, 
       0x2, 0x2, 0x2, 0x2b4, 0x2b5, 0x3, 0x2, 0x2, 0x2, 0x2b5, 0x2b9, 0x3, 
       0x2, 0x2, 0x2, 0x2b6, 0x2b8, 0x7, 0x3b, 0x2, 0x2, 0x2b7, 0x2b6, 0x3, 
       0x2, 0x2, 0x2, 0x2b8, 0x2bb, 0x3, 0x2, 0x2, 0x2, 0x2b9, 0x2b7, 0x3, 
       0x2, 0x2, 0x2, 0x2b9, 0x2ba, 0x3, 0x2, 0x2, 0x2, 0x2ba, 0x2bc, 0x3, 
       0x2, 0x2, 0x2, 0x2bb, 0x2b9, 0x3, 0x2, 0x2, 0x2, 0x2bc, 0x2bd, 0x7, 
       0xc, 0x2, 0x2, 0x2bd, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x2be, 0x2bf, 0x7, 
       0x50, 0x2, 0x2, 0x2bf, 0x2c0, 0x7, 0x52, 0x2, 0x2, 0x2c0, 0x2c2, 
       0x7, 0x5a, 0x2, 0x2, 0x2c1, 0x2c3, 0x7, 0x5b, 0x2, 0x2, 0x2c2, 0x2c1, 
       0x3, 0x2, 0x2, 0x2, 0x2c2, 0x2c3, 0x3, 0x2, 0x2, 0x2, 0x2c3, 0x2c7, 
       0x3, 0x2, 0x2, 0x2, 0x2c4, 0x2c6, 0x7, 0x3b, 0x2, 0x2, 0x2c5, 0x2c4, 
       0x3, 0x2, 0x2, 0x2, 0x2c6, 0x2c9, 0x3, 0x2, 0x2, 0x2, 0x2c7, 0x2c5, 
       0x3, 0x2, 0x2, 0x2, 0x2c7, 0x2c8, 0x3, 0x2, 0x2, 0x2, 0x2c8, 0x2ca, 
       0x3, 0x2, 0x2, 0x2, 0x2c9, 0x2c7, 0x3, 0x2, 0x2, 0x2, 0x2ca, 0x2cb, 
       0x7, 0x9, 0x2, 0x2, 0x2cb, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x2cc, 0x2cd, 
       0x7, 0x50, 0x2, 0x2, 0x2cd, 0x2ce, 0x7, 0x53, 0x2, 0x2, 0x2ce, 0x2d0, 
       0x7, 0x5a, 0x2, 0x2, 0x2cf, 0x2d1, 0x7, 0x5b, 0x2, 0x2, 0x2d0, 0x2cf, 
       0x3, 0x2, 0x2, 0x2, 0x2d0, 0x2d1, 0x3, 0x2, 0x2, 0x2, 0x2d1, 0x2d5, 
       0x3, 0x2, 0x2, 0x2, 0x2d2, 0x2d4, 0x7, 0x3b, 0x2, 0x2, 0x2d3, 0x2d2, 
       0x3, 0x2, 0x2, 0x2, 0x2d4, 0x2d7, 0x3, 0x2, 0x2, 0x2, 0x2d5, 0x2d3, 
       0x3, 0x2, 0x2, 0x2, 0x2d5, 0x2d6, 0x3, 0x2, 0x2, 0x2, 0x2d6, 0x2d8, 
       0x3, 0x2, 0x2, 0x2, 0x2d7, 0x2d5, 0x3, 0x2, 0x2, 0x2, 0x2d8, 0x2dc, 
       0x7, 0xb, 0x2, 0x2, 0x2d9, 0x2db, 0x7, 0x3b, 0x2, 0x2, 0x2da, 0x2d9, 
       0x3, 0x2, 0x2, 0x2, 0x2db, 0x2de, 0x3, 0x2, 0x2, 0x2, 0x2dc, 0x2da, 
       0x3, 0x2, 0x2, 0x2, 0x2dc, 0x2dd, 0x3, 0x2, 0x2, 0x2, 0x2dd, 0x2e3, 
       0x3, 0x2, 0x2, 0x2, 0x2de, 0x2dc, 0x3, 0x2, 0x2, 0x2, 0x2df, 0x2e0, 
       0x7, 0x8, 0x2, 0x2, 0x2e0, 0x2e1, 0x5, 0x7e, 0x40, 0x2, 0x2e1, 0x2e2, 
       0x7, 0x8, 0x2, 0x2, 0x2e2, 0x2e4, 0x3, 0x2, 0x2, 0x2, 0x2e3, 0x2df, 
       0x3, 0x2, 0x2, 0x2, 0x2e3, 0x2e4, 0x3, 0x2, 0x2, 0x2, 0x2e4, 0x2e8, 
       0x3, 0x2, 0x2, 0x2, 0x2e5, 0x2e7, 0x7, 0x3b, 0x2, 0x2, 0x2e6, 0x2e5, 
       0x3, 0x2, 0x2, 0x2, 0x2e7, 0x2ea, 0x3, 0x2, 0x2, 0x2, 0x2e8, 0x2e6, 
       0x3, 0x2, 0x2, 0x2, 0x2e8, 0x2e9, 0x3, 0x2, 0x2, 0x2, 0x2e9, 0x2eb, 
       0x3, 0x2, 0x2, 0x2, 0x2ea, 0x2e8, 0x3, 0x2, 0x2, 0x2, 0x2eb, 0x2ec, 
       0x7, 0xc, 0x2, 0x2, 0x2ec, 0x41, 0x3, 0x2, 0x2, 0x2, 0x2ed, 0x2ee, 
       0x7, 0x50, 0x2, 0x2, 0x2ee, 0x2ef, 0x7, 0x53, 0x2, 0x2, 0x2ef, 0x2f1, 
       0x7, 0x5a, 0x2, 0x2, 0x2f0, 0x2f2, 0x7, 0x5b, 0x2, 0x2, 0x2f1, 0x2f0, 
       0x3, 0x2, 0x2, 0x2, 0x2f1, 0x2f2, 0x3, 0x2, 0x2, 0x2, 0x2f2, 0x2f6, 
       0x3, 0x2, 0x2, 0x2, 0x2f3, 0x2f5, 0x7, 0x3b, 0x2, 0x2, 0x2f4, 0x2f3, 
       0x3, 0x2, 0x2, 0x2, 0x2f5, 0x2f8, 0x3, 0x2, 0x2, 0x2, 0x2f6, 0x2f4, 
       0x3, 0x2, 0x2, 0x2, 0x2f6, 0x2f7, 0x3, 0x2, 0x2, 0x2, 0x2f7, 0x2f9, 
       0x3, 0x2, 0x2, 0x2, 0x2f8, 0x2f6, 0x3, 0x2, 0x2, 0x2, 0x2f9, 0x2fd, 
       0x7, 0xb, 0x2, 0x2, 0x2fa, 0x2fc, 0x7, 0x3b, 0x2, 0x2, 0x2fb, 0x2fa, 
       0x3, 0x2, 0x2, 0x2, 0x2fc, 0x2ff, 0x3, 0x2, 0x2, 0x2, 0x2fd, 0x2fb, 
       0x3, 0x2, 0x2, 0x2, 0x2fd, 0x2fe, 0x3, 0x2, 0x2, 0x2, 0x2fe, 0x300, 
       0x3, 0x2, 0x2, 0x2, 0x2ff, 0x2fd, 0x3, 0x2, 0x2, 0x2, 0x300, 0x301, 
       0x7, 0x58, 0x2, 0x2, 0x301, 0x302, 0x7, 0x5b, 0x2, 0x2, 0x302, 0x303, 
       0x7, 0x8, 0x2, 0x2, 0x303, 0x304, 0x5, 0x7e, 0x40, 0x2, 0x304, 0x305, 
       0x7, 0x59, 0x2, 0x2, 0x305, 0x306, 0x7, 0x5b, 0x2, 0x2, 0x306, 0x30a, 
       0x7, 0x8, 0x2, 0x2, 0x307, 0x309, 0x7, 0x3b, 0x2, 0x2, 0x308, 0x307, 
       0x3, 0x2, 0x2, 0x2, 0x309, 0x30c, 0x3, 0x2, 0x2, 0x2, 0x30a, 0x308, 
       0x3, 0x2, 0x2, 0x2, 0x30a, 0x30b, 0x3, 0x2, 0x2, 0x2, 0x30b, 0x30d, 
       0x3, 0x2, 0x2, 0x2, 0x30c, 0x30a, 0x3, 0x2, 0x2, 0x2, 0x30d, 0x30e, 
       0x7, 0xc, 0x2, 0x2, 0x30e, 0x43, 0x3, 0x2, 0x2, 0x2, 0x30f, 0x310, 
       0x7, 0x50, 0x2, 0x2, 0x310, 0x311, 0x7, 0x54, 0x2, 0x2, 0x311, 0x312, 
       0x7, 0x5a, 0x2, 0x2, 0x312, 0x316, 0x7, 0x5b, 0x2, 0x2, 0x313, 0x315, 
       0x7, 0x3b, 0x2, 0x2, 0x314, 0x313, 0x3, 0x2, 0x2, 0x2, 0x315, 0x318, 
       0x3, 0x2, 0x2, 0x2, 0x316, 0x314, 0x3, 0x2, 0x2, 0x2, 0x316, 0x317, 
       0x3, 0x2, 0x2, 0x2, 0x317, 0x319, 0x3, 0x2, 0x2, 0x2, 0x318, 0x316, 
       0x3, 0x2, 0x2, 0x2, 0x319, 0x31a, 0x7, 0x8, 0x2, 0x2, 0x31a, 0x45, 
       0x3, 0x2, 0x2, 0x2, 0x31b, 0x31c, 0x7, 0x50, 0x2, 0x2, 0x31c, 0x31d, 
       0x7, 0x55, 0x2, 0x2, 0x31d, 0x31f, 0x7, 0x5a, 0x2, 0x2, 0x31e, 0x320, 
       0x7, 0x5b, 0x2, 0x2, 0x31f, 0x31e, 0x3, 0x2, 0x2, 0x2, 0x31f, 0x320, 
       0x3, 0x2, 0x2, 0x2, 0x320, 0x324, 0x3, 0x2, 0x2, 0x2, 0x321, 0x323, 
       0x7, 0x3b, 0x2, 0x2, 0x322, 0x321, 0x3, 0x2, 0x2, 0x2, 0x323, 0x326, 
       0x3, 0x2, 0x2, 0x2, 0x324, 0x322, 0x3, 0x2, 0x2, 0x2, 0x324, 0x325, 
       0x3, 0x2, 0x2, 0x2, 0x325, 0x327, 0x3, 0x2, 0x2, 0x2, 0x326, 0x324, 
       0x3, 0x2, 0x2, 0x2, 0x327, 0x32b, 0x7, 0xb, 0x2, 0x2, 0x328, 0x32a, 
       0x7, 0x3b, 0x2, 0x2, 0x329, 0x328, 0x3, 0x2, 0x2, 0x2, 0x32a, 0x32d, 
       0x3, 0x2, 0x2, 0x2, 0x32b, 0x329, 0x3, 0x2, 0x2, 0x2, 0x32b, 0x32c, 
       0x3, 0x2, 0x2, 0x2, 0x32c, 0x337, 0x3, 0x2, 0x2, 0x2, 0x32d, 0x32b, 
       0x3, 0x2, 0x2, 0x2, 0x32e, 0x334, 0x7, 0x7, 0x2, 0x2, 0x32f, 0x330, 
       0x5, 0x7e, 0x40, 0x2, 0x330, 0x331, 0x7, 0x7, 0x2, 0x2, 0x331, 0x333, 
       0x3, 0x2, 0x2, 0x2, 0x332, 0x32f, 0x3, 0x2, 0x2, 0x2, 0x333, 0x336, 
       0x3, 0x2, 0x2, 0x2, 0x334, 0x332, 0x3, 0x2, 0x2, 0x2, 0x334, 0x335, 
       0x3, 0x2, 0x2, 0x2, 0x335, 0x338, 0x3, 0x2, 0x2, 0x2, 0x336, 0x334, 
       0x3, 0x2, 0x2, 0x2, 0x337, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x337, 0x338, 
       0x3, 0x2, 0x2, 0x2, 0x338, 0x33c, 0x3, 0x2, 0x2, 0x2, 0x339, 0x33b, 
       0x7, 0x3b, 0x2, 0x2, 0x33a, 0x339, 0x3, 0x2, 0x2, 0x2, 0x33b, 0x33e, 
       0x3, 0x2, 0x2, 0x2, 0x33c, 0x33a, 0x3, 0x2, 0x2, 0x2, 0x33c, 0x33d, 
       0x3, 0x2, 0x2, 0x2, 0x33d, 0x33f, 0x3, 0x2, 0x2, 0x2, 0x33e, 0x33c, 
       0x3, 0x2, 0x2, 0x2, 0x33f, 0x340, 0x7, 0xc, 0x2, 0x2, 0x340, 0x47, 
       0x3, 0x2, 0x2, 0x2, 0x341, 0x342, 0x7, 0x50, 0x2, 0x2, 0x342, 0x343, 
       0x7, 0x55, 0x2, 0x2, 0x343, 0x345, 0x7, 0x5a, 0x2, 0x2, 0x344, 0x346, 
       0x7, 0x5b, 0x2, 0x2, 0x345, 0x344, 0x3, 0x2, 0x2, 0x2, 0x345, 0x346, 
       0x3, 0x2, 0x2, 0x2, 0x346, 0x34a, 0x3, 0x2, 0x2, 0x2, 0x347, 0x349, 
       0x7, 0x3b, 0x2, 0x2, 0x348, 0x347, 0x3, 0x2, 0x2, 0x2, 0x349, 0x34c, 
       0x3, 0x2, 0x2, 0x2, 0x34a, 0x348, 0x3, 0x2, 0x2, 0x2, 0x34a, 0x34b, 
       0x3, 0x2, 0x2, 0x2, 0x34b, 0x34d, 0x3, 0x2, 0x2, 0x2, 0x34c, 0x34a, 
       0x3, 0x2, 0x2, 0x2, 0x34d, 0x351, 0x7, 0xb, 0x2, 0x2, 0x34e, 0x350, 
       0x7, 0x3b, 0x2, 0x2, 0x34f, 0x34e, 0x3, 0x2, 0x2, 0x2, 0x350, 0x353, 
       0x3, 0x2, 0x2, 0x2, 0x351, 0x34f, 0x3, 0x2, 0x2, 0x2, 0x351, 0x352, 
       0x3, 0x2, 0x2, 0x2, 0x352, 0x354, 0x3, 0x2, 0x2, 0x2, 0x353, 0x351, 
       0x3, 0x2, 0x2, 0x2, 0x354, 0x355, 0x7, 0x58, 0x2, 0x2, 0x355, 0x356, 
       0x7, 0x5b, 0x2, 0x2, 0x356, 0x357, 0x7, 0x7, 0x2, 0x2, 0x357, 0x358, 
       0x5, 0x7e, 0x40, 0x2, 0x358, 0x359, 0x7, 0x59, 0x2, 0x2, 0x359, 0x35a, 
       0x7, 0x5b, 0x2, 0x2, 0x35a, 0x35b, 0x7, 0x7, 0x2, 0x2, 0x35b, 0x35c, 
       0x7, 0xc, 0x2, 0x2, 0x35c, 0x49, 0x3, 0x2, 0x2, 0x2, 0x35d, 0x35e, 
       0x7, 0x50, 0x2, 0x2, 0x35e, 0x35f, 0x7, 0x56, 0x2, 0x2, 0x35f, 0x360, 
       0x7, 0x5a, 0x2, 0x2, 0x360, 0x364, 0x7, 0x5b, 0x2, 0x2, 0x361, 0x363, 
       0x7, 0x3b, 0x2, 0x2, 0x362, 0x361, 0x3, 0x2, 0x2, 0x2, 0x363, 0x366, 
       0x3, 0x2, 0x2, 0x2, 0x364, 0x362, 0x3, 0x2, 0x2, 0x2, 0x364, 0x365, 
       0x3, 0x2, 0x2, 0x2, 0x365, 0x367, 0x3, 0x2, 0x2, 0x2, 0x366, 0x364, 
       0x3, 0x2, 0x2, 0x2, 0x367, 0x368, 0x7, 0x7, 0x2, 0x2, 0x368, 0x4b, 
       0x3, 0x2, 0x2, 0x2, 0x369, 0x36a, 0x7, 0x50, 0x2, 0x2, 0x36a, 0x36b, 
       0x7, 0x57, 0x2, 0x2, 0x36b, 0x36c, 0x7, 0x5a, 0x2, 0x2, 0x36c, 0x370, 
       0x7, 0x5b, 0x2, 0x2, 0x36d, 0x36f, 0x7, 0x3b, 0x2, 0x2, 0x36e, 0x36d, 
       0x3, 0x2, 0x2, 0x2, 0x36f, 0x372, 0x3, 0x2, 0x2, 0x2, 0x370, 0x36e, 
       0x3, 0x2, 0x2, 0x2, 0x370, 0x371, 0x3, 0x2, 0x2, 0x2, 0x371, 0x373, 
       0x3, 0x2, 0x2, 0x2, 0x372, 0x370, 0x3, 0x2, 0x2, 0x2, 0x373, 0x374, 
       0x7, 0x5, 0x2, 0x2, 0x374, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x375, 0x376, 
       0x8, 0x28, 0x1, 0x2, 0x376, 0x37c, 0x5, 0x50, 0x29, 0x2, 0x377, 0x378, 
       0x7, 0x3b, 0x2, 0x2, 0x378, 0x37c, 0x5, 0x4e, 0x28, 0x14, 0x379, 
       0x37a, 0x7, 0x12, 0x2, 0x2, 0x37a, 0x37c, 0x5, 0x4e, 0x28, 0x13, 
       0x37b, 0x375, 0x3, 0x2, 0x2, 0x2, 0x37b, 0x377, 0x3, 0x2, 0x2, 0x2, 
       0x37b, 0x379, 0x3, 0x2, 0x2, 0x2, 0x37c, 0x3b2, 0x3, 0x2, 0x2, 0x2, 
       0x37d, 0x37e, 0xc, 0x12, 0x2, 0x2, 0x37e, 0x37f, 0x7, 0x1b, 0x2, 
       0x2, 0x37f, 0x3b1, 0x5, 0x4e, 0x28, 0x13, 0x380, 0x381, 0xc, 0x11, 
       0x2, 0x2, 0x381, 0x382, 0x7, 0x1c, 0x2, 0x2, 0x382, 0x3b1, 0x5, 0x4e, 
       0x28, 0x12, 0x383, 0x384, 0xc, 0x10, 0x2, 0x2, 0x384, 0x385, 0x7, 
       0x1d, 0x2, 0x2, 0x385, 0x3b1, 0x5, 0x4e, 0x28, 0x11, 0x386, 0x387, 
       0xc, 0xf, 0x2, 0x2, 0x387, 0x388, 0x7, 0x19, 0x2, 0x2, 0x388, 0x3b1, 
       0x5, 0x4e, 0x28, 0x10, 0x389, 0x38a, 0xc, 0xe, 0x2, 0x2, 0x38a, 0x38b, 
       0x7, 0x1a, 0x2, 0x2, 0x38b, 0x3b1, 0x5, 0x4e, 0x28, 0xf, 0x38c, 0x38d, 
       0xc, 0xd, 0x2, 0x2, 0x38d, 0x38e, 0x7, 0x1f, 0x2, 0x2, 0x38e, 0x3b1, 
       0x5, 0x4e, 0x28, 0xe, 0x38f, 0x390, 0xc, 0xc, 0x2, 0x2, 0x390, 0x391, 
       0x7, 0x1e, 0x2, 0x2, 0x391, 0x3b1, 0x5, 0x4e, 0x28, 0xd, 0x392, 0x393, 
       0xc, 0xb, 0x2, 0x2, 0x393, 0x394, 0x7, 0x17, 0x2, 0x2, 0x394, 0x3b1, 
       0x5, 0x4e, 0x28, 0xc, 0x395, 0x396, 0xc, 0xa, 0x2, 0x2, 0x396, 0x397, 
       0x7, 0x18, 0x2, 0x2, 0x397, 0x3b1, 0x5, 0x4e, 0x28, 0xb, 0x398, 0x399, 
       0xc, 0x9, 0x2, 0x2, 0x399, 0x39a, 0x7, 0x15, 0x2, 0x2, 0x39a, 0x3b1, 
       0x5, 0x4e, 0x28, 0xa, 0x39b, 0x39c, 0xc, 0x8, 0x2, 0x2, 0x39c, 0x39d, 
       0x7, 0x16, 0x2, 0x2, 0x39d, 0x3b1, 0x5, 0x4e, 0x28, 0x9, 0x39e, 0x39f, 
       0xc, 0x7, 0x2, 0x2, 0x39f, 0x3a0, 0x7, 0x13, 0x2, 0x2, 0x3a0, 0x3b1, 
       0x5, 0x4e, 0x28, 0x8, 0x3a1, 0x3a2, 0xc, 0x6, 0x2, 0x2, 0x3a2, 0x3a3, 
       0x7, 0x14, 0x2, 0x2, 0x3a3, 0x3b1, 0x5, 0x4e, 0x28, 0x7, 0x3a4, 0x3a5, 
       0xc, 0x5, 0x2, 0x2, 0x3a5, 0x3a6, 0x7, 0x10, 0x2, 0x2, 0x3a6, 0x3b1, 
       0x5, 0x4e, 0x28, 0x6, 0x3a7, 0x3a8, 0xc, 0x4, 0x2, 0x2, 0x3a8, 0x3a9, 
       0x7, 0x11, 0x2, 0x2, 0x3a9, 0x3b1, 0x5, 0x4e, 0x28, 0x5, 0x3aa, 0x3ab, 
       0xc, 0x3, 0x2, 0x2, 0x3ab, 0x3ac, 0x7, 0x20, 0x2, 0x2, 0x3ac, 0x3ad, 
       0x5, 0x4e, 0x28, 0x2, 0x3ad, 0x3ae, 0x7, 0x5b, 0x2, 0x2, 0x3ae, 0x3af, 
       0x5, 0x4e, 0x28, 0x3, 0x3af, 0x3b1, 0x3, 0x2, 0x2, 0x2, 0x3b0, 0x37d, 
       0x3, 0x2, 0x2, 0x2, 0x3b0, 0x380, 0x3, 0x2, 0x2, 0x2, 0x3b0, 0x383, 
       0x3, 0x2, 0x2, 0x2, 0x3b0, 0x386, 0x3, 0x2, 0x2, 0x2, 0x3b0, 0x389, 
       0x3, 0x2, 0x2, 0x2, 0x3b0, 0x38c, 0x3, 0x2, 0x2, 0x2, 0x3b0, 0x38f, 
       0x3, 0x2, 0x2, 0x2, 0x3b0, 0x392, 0x3, 0x2, 0x2, 0x2, 0x3b0, 0x395, 
       0x3, 0x2, 0x2, 0x2, 0x3b0, 0x398, 0x3, 0x2, 0x2, 0x2, 0x3b0, 0x39b, 
       0x3, 0x2, 0x2, 0x2, 0x3b0, 0x39e, 0x3, 0x2, 0x2, 0x2, 0x3b0, 0x3a1, 
       0x3, 0x2, 0x2, 0x2, 0x3b0, 0x3a4, 0x3, 0x2, 0x2, 0x2, 0x3b0, 0x3a7, 
       0x3, 0x2, 0x2, 0x2, 0x3b0, 0x3aa, 0x3, 0x2, 0x2, 0x2, 0x3b1, 0x3b4, 
       0x3, 0x2, 0x2, 0x2, 0x3b2, 0x3b0, 0x3, 0x2, 0x2, 0x2, 0x3b2, 0x3b3, 
       0x3, 0x2, 0x2, 0x2, 0x3b3, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x3b4, 0x3b2, 
       0x3, 0x2, 0x2, 0x2, 0x3b5, 0x3c6, 0x5, 0x56, 0x2c, 0x2, 0x3b6, 0x3c6, 
       0x5, 0x58, 0x2d, 0x2, 0x3b7, 0x3c6, 0x5, 0x5a, 0x2e, 0x2, 0x3b8, 
       0x3c6, 0x5, 0x5c, 0x2f, 0x2, 0x3b9, 0x3c6, 0x5, 0x5e, 0x30, 0x2, 
       0x3ba, 0x3c6, 0x5, 0x60, 0x31, 0x2, 0x3bb, 0x3c6, 0x5, 0x62, 0x32, 
       0x2, 0x3bc, 0x3c6, 0x5, 0x64, 0x33, 0x2, 0x3bd, 0x3c6, 0x5, 0x66, 
       0x34, 0x2, 0x3be, 0x3c6, 0x5, 0x68, 0x35, 0x2, 0x3bf, 0x3c6, 0x5, 
       0x6a, 0x36, 0x2, 0x3c0, 0x3c6, 0x5, 0x6c, 0x37, 0x2, 0x3c1, 0x3c6, 
       0x5, 0x6e, 0x38, 0x2, 0x3c2, 0x3c6, 0x5, 0x10, 0x9, 0x2, 0x3c3, 0x3c6, 
       0x5, 0x8, 0x5, 0x2, 0x3c4, 0x3c6, 0x5, 0x70, 0x39, 0x2, 0x3c5, 0x3b5, 
       0x3, 0x2, 0x2, 0x2, 0x3c5, 0x3b6, 0x3, 0x2, 0x2, 0x2, 0x3c5, 0x3b7, 
       0x3, 0x2, 0x2, 0x2, 0x3c5, 0x3b8, 0x3, 0x2, 0x2, 0x2, 0x3c5, 0x3b9, 
       0x3, 0x2, 0x2, 0x2, 0x3c5, 0x3ba, 0x3, 0x2, 0x2, 0x2, 0x3c5, 0x3bb, 
       0x3, 0x2, 0x2, 0x2, 0x3c5, 0x3bc, 0x3, 0x2, 0x2, 0x2, 0x3c5, 0x3bd, 
       0x3, 0x2, 0x2, 0x2, 0x3c5, 0x3be, 0x3, 0x2, 0x2, 0x2, 0x3c5, 0x3bf, 
       0x3, 0x2, 0x2, 0x2, 0x3c5, 0x3c0, 0x3, 0x2, 0x2, 0x2, 0x3c5, 0x3c1, 
       0x3, 0x2, 0x2, 0x2, 0x3c5, 0x3c2, 0x3, 0x2, 0x2, 0x2, 0x3c5, 0x3c3, 
       0x3, 0x2, 0x2, 0x2, 0x3c5, 0x3c4, 0x3, 0x2, 0x2, 0x2, 0x3c6, 0x51, 
       0x3, 0x2, 0x2, 0x2, 0x3c7, 0x3c8, 0x7, 0x5a, 0x2, 0x2, 0x3c8, 0x3ca, 
       0x7, 0x14, 0x2, 0x2, 0x3c9, 0x3c7, 0x3, 0x2, 0x2, 0x2, 0x3c9, 0x3ca, 
       0x3, 0x2, 0x2, 0x2, 0x3ca, 0x3cd, 0x3, 0x2, 0x2, 0x2, 0x3cb, 0x3ce, 
       0x5, 0x4e, 0x28, 0x2, 0x3cc, 0x3ce, 0x7, 0x5a, 0x2, 0x2, 0x3cd, 0x3cb, 
       0x3, 0x2, 0x2, 0x2, 0x3cd, 0x3cc, 0x3, 0x2, 0x2, 0x2, 0x3ce, 0x53, 
       0x3, 0x2, 0x2, 0x2, 0x3cf, 0x3d4, 0x5, 0x52, 0x2a, 0x2, 0x3d0, 0x3d1, 
       0x7, 0xf, 0x2, 0x2, 0x3d1, 0x3d3, 0x5, 0x52, 0x2a, 0x2, 0x3d2, 0x3d0, 
       0x3, 0x2, 0x2, 0x2, 0x3d3, 0x3d6, 0x3, 0x2, 0x2, 0x2, 0x3d4, 0x3d2, 
       0x3, 0x2, 0x2, 0x2, 0x3d4, 0x3d5, 0x3, 0x2, 0x2, 0x2, 0x3d5, 0x3d8, 
       0x3, 0x2, 0x2, 0x2, 0x3d6, 0x3d4, 0x3, 0x2, 0x2, 0x2, 0x3d7, 0x3cf, 
       0x3, 0x2, 0x2, 0x2, 0x3d7, 0x3d8, 0x3, 0x2, 0x2, 0x2, 0x3d8, 0x55, 
       0x3, 0x2, 0x2, 0x2, 0x3d9, 0x3da, 0x7, 0x23, 0x2, 0x2, 0x3da, 0x3db, 
       0x7, 0x5a, 0x2, 0x2, 0x3db, 0x57, 0x3, 0x2, 0x2, 0x2, 0x3dc, 0x3dd, 
       0x7, 0x24, 0x2, 0x2, 0x3dd, 0x3de, 0x7, 0x5a, 0x2, 0x2, 0x3de, 0x3df, 
       0x7, 0xd, 0x2, 0x2, 0x3df, 0x3e0, 0x5, 0x54, 0x2b, 0x2, 0x3e0, 0x3e1, 
       0x7, 0xe, 0x2, 0x2, 0x3e1, 0x59, 0x3, 0x2, 0x2, 0x2, 0x3e2, 0x3e3, 
       0x7, 0x25, 0x2, 0x2, 0x3e3, 0x3e4, 0x7, 0x5a, 0x2, 0x2, 0x3e4, 0x5b, 
       0x3, 0x2, 0x2, 0x2, 0x3e5, 0x3e6, 0x7, 0x26, 0x2, 0x2, 0x3e6, 0x3e7, 
       0x7, 0x22, 0x2, 0x2, 0x3e7, 0x3e8, 0x7, 0x5a, 0x2, 0x2, 0x3e8, 0x5d, 
       0x3, 0x2, 0x2, 0x2, 0x3e9, 0x3ea, 0x7, 0x27, 0x2, 0x2, 0x3ea, 0x3eb, 
       0x7, 0x5a, 0x2, 0x2, 0x3eb, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x3ec, 0x3ed, 
       0x7, 0x28, 0x2, 0x2, 0x3ed, 0x3ee, 0x7, 0xd, 0x2, 0x2, 0x3ee, 0x3f1, 
       0x7, 0x5a, 0x2, 0x2, 0x3ef, 0x3f0, 0x7, 0xf, 0x2, 0x2, 0x3f0, 0x3f2, 
       0x7, 0x6, 0x2, 0x2, 0x3f1, 0x3ef, 0x3, 0x2, 0x2, 0x2, 0x3f1, 0x3f2, 
       0x3, 0x2, 0x2, 0x2, 0x3f2, 0x3f3, 0x3, 0x2, 0x2, 0x2, 0x3f3, 0x3f4, 
       0x7, 0xe, 0x2, 0x2, 0x3f4, 0x61, 0x3, 0x2, 0x2, 0x2, 0x3f5, 0x3f6, 
       0x7, 0x29, 0x2, 0x2, 0x3f6, 0x3f7, 0x7, 0xd, 0x2, 0x2, 0x3f7, 0x3fa, 
       0x7, 0x5a, 0x2, 0x2, 0x3f8, 0x3f9, 0x7, 0xf, 0x2, 0x2, 0x3f9, 0x3fb, 
       0x7, 0x6, 0x2, 0x2, 0x3fa, 0x3f8, 0x3, 0x2, 0x2, 0x2, 0x3fa, 0x3fb, 
       0x3, 0x2, 0x2, 0x2, 0x3fb, 0x3fc, 0x3, 0x2, 0x2, 0x2, 0x3fc, 0x3fd, 
       0x7, 0xe, 0x2, 0x2, 0x3fd, 0x63, 0x3, 0x2, 0x2, 0x2, 0x3fe, 0x3ff, 
       0x7, 0x2a, 0x2, 0x2, 0x3ff, 0x400, 0x7, 0xd, 0x2, 0x2, 0x400, 0x403, 
       0x7, 0x5a, 0x2, 0x2, 0x401, 0x402, 0x7, 0xf, 0x2, 0x2, 0x402, 0x404, 
       0x7, 0x6, 0x2, 0x2, 0x403, 0x401, 0x3, 0x2, 0x2, 0x2, 0x403, 0x404, 
       0x3, 0x2, 0x2, 0x2, 0x404, 0x405, 0x3, 0x2, 0x2, 0x2, 0x405, 0x406, 
       0x7, 0xe, 0x2, 0x2, 0x406, 0x65, 0x3, 0x2, 0x2, 0x2, 0x407, 0x408, 
       0x7, 0x2b, 0x2, 0x2, 0x408, 0x409, 0x7, 0xd, 0x2, 0x2, 0x409, 0x40c, 
       0x7, 0x5a, 0x2, 0x2, 0x40a, 0x40b, 0x7, 0xf, 0x2, 0x2, 0x40b, 0x40d, 
       0x5, 0x4e, 0x28, 0x2, 0x40c, 0x40a, 0x3, 0x2, 0x2, 0x2, 0x40c, 0x40d, 
       0x3, 0x2, 0x2, 0x2, 0x40d, 0x40e, 0x3, 0x2, 0x2, 0x2, 0x40e, 0x40f, 
       0x7, 0xe, 0x2, 0x2, 0x40f, 0x67, 0x3, 0x2, 0x2, 0x2, 0x410, 0x411, 
       0x7, 0x2c, 0x2, 0x2, 0x411, 0x412, 0x7, 0xd, 0x2, 0x2, 0x412, 0x413, 
       0x7, 0x5a, 0x2, 0x2, 0x413, 0x414, 0x7, 0xe, 0x2, 0x2, 0x414, 0x69, 
       0x3, 0x2, 0x2, 0x2, 0x415, 0x416, 0x7, 0x2d, 0x2, 0x2, 0x416, 0x417, 
       0x7, 0xd, 0x2, 0x2, 0x417, 0x418, 0x7, 0x5a, 0x2, 0x2, 0x418, 0x419, 
       0x7, 0xe, 0x2, 0x2, 0x419, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x41a, 0x41b, 
       0x7, 0x2e, 0x2, 0x2, 0x41b, 0x41c, 0x7, 0xd, 0x2, 0x2, 0x41c, 0x41d, 
       0x5, 0x4e, 0x28, 0x2, 0x41d, 0x41e, 0x7, 0xe, 0x2, 0x2, 0x41e, 0x6d, 
       0x3, 0x2, 0x2, 0x2, 0x41f, 0x420, 0x7, 0x2f, 0x2, 0x2, 0x420, 0x421, 
       0x7, 0xd, 0x2, 0x2, 0x421, 0x422, 0x5, 0x4e, 0x28, 0x2, 0x422, 0x423, 
       0x7, 0xe, 0x2, 0x2, 0x423, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x424, 0x42e, 
       0x5, 0x72, 0x3a, 0x2, 0x425, 0x42e, 0x7, 0x5, 0x2, 0x2, 0x426, 0x42e, 
       0x7, 0x7, 0x2, 0x2, 0x427, 0x42e, 0x5, 0x74, 0x3b, 0x2, 0x428, 0x42e, 
       0x5, 0x76, 0x3c, 0x2, 0x429, 0x42e, 0x5, 0x78, 0x3d, 0x2, 0x42a, 
       0x42e, 0x5, 0x7a, 0x3e, 0x2, 0x42b, 0x42e, 0x5, 0x7c, 0x3f, 0x2, 
       0x42c, 0x42e, 0x7, 0x9, 0x2, 0x2, 0x42d, 0x424, 0x3, 0x2, 0x2, 0x2, 
       0x42d, 0x425, 0x3, 0x2, 0x2, 0x2, 0x42d, 0x426, 0x3, 0x2, 0x2, 0x2, 
       0x42d, 0x427, 0x3, 0x2, 0x2, 0x2, 0x42d, 0x428, 0x3, 0x2, 0x2, 0x2, 
       0x42d, 0x429, 0x3, 0x2, 0x2, 0x2, 0x42d, 0x42a, 0x3, 0x2, 0x2, 0x2, 
       0x42d, 0x42b, 0x3, 0x2, 0x2, 0x2, 0x42d, 0x42c, 0x3, 0x2, 0x2, 0x2, 
       0x42e, 0x71, 0x3, 0x2, 0x2, 0x2, 0x42f, 0x430, 0x7, 0xd, 0x2, 0x2, 
       0x430, 0x431, 0x5, 0x4e, 0x28, 0x2, 0x431, 0x432, 0x7, 0xe, 0x2, 
       0x2, 0x432, 0x73, 0x3, 0x2, 0x2, 0x2, 0x433, 0x434, 0x7, 0x5a, 0x2, 
       0x2, 0x434, 0x435, 0x7, 0x5b, 0x2, 0x2, 0x435, 0x436, 0x7, 0x5a, 
       0x2, 0x2, 0x436, 0x75, 0x3, 0x2, 0x2, 0x2, 0x437, 0x438, 0x7, 0x30, 
       0x2, 0x2, 0x438, 0x439, 0x7, 0x5a, 0x2, 0x2, 0x439, 0x77, 0x3, 0x2, 
       0x2, 0x2, 0x43a, 0x43b, 0x7, 0x31, 0x2, 0x2, 0x43b, 0x43c, 0x7, 0x5a, 
       0x2, 0x2, 0x43c, 0x79, 0x3, 0x2, 0x2, 0x2, 0x43d, 0x43e, 0x7, 0x32, 
       0x2, 0x2, 0x43e, 0x43f, 0x7, 0x5a, 0x2, 0x2, 0x43f, 0x7b, 0x3, 0x2, 
       0x2, 0x2, 0x440, 0x441, 0x7, 0x33, 0x2, 0x2, 0x441, 0x442, 0x7, 0x5a, 
       0x2, 0x2, 0x442, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x443, 0x44d, 0x7, 0xf, 
       0x2, 0x2, 0x444, 0x446, 0x7, 0xf, 0x2, 0x2, 0x445, 0x444, 0x3, 0x2, 
       0x2, 0x2, 0x445, 0x446, 0x3, 0x2, 0x2, 0x2, 0x446, 0x448, 0x3, 0x2, 
       0x2, 0x2, 0x447, 0x449, 0x7, 0x3b, 0x2, 0x2, 0x448, 0x447, 0x3, 0x2, 
       0x2, 0x2, 0x449, 0x44a, 0x3, 0x2, 0x2, 0x2, 0x44a, 0x448, 0x3, 0x2, 
       0x2, 0x2, 0x44a, 0x44b, 0x3, 0x2, 0x2, 0x2, 0x44b, 0x44d, 0x3, 0x2, 
       0x2, 0x2, 0x44c, 0x443, 0x3, 0x2, 0x2, 0x2, 0x44c, 0x445, 0x3, 0x2, 
       0x2, 0x2, 0x44d, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x84, 0x86, 0x88, 0x8a, 
       0x94, 0x9a, 0x9f, 0xa6, 0xaf, 0xb9, 0xc0, 0xc7, 0xce, 0xd2, 0xd7, 
       0xdc, 0xe5, 0xec, 0xf4, 0xf8, 0xfe, 0x105, 0x10c, 0x113, 0x119, 0x11e, 
       0x125, 0x12c, 0x133, 0x13b, 0x13d, 0x142, 0x148, 0x14e, 0x150, 0x157, 
       0x15d, 0x165, 0x16a, 0x16d, 0x171, 0x175, 0x17d, 0x182, 0x189, 0x190, 
       0x197, 0x1a9, 0x1ae, 0x1b5, 0x1bc, 0x1c1, 0x1c5, 0x1ca, 0x1d1, 0x1e0, 
       0x1e5, 0x1ec, 0x1f4, 0x1f9, 0x1fd, 0x204, 0x209, 0x210, 0x218, 0x21d, 
       0x221, 0x227, 0x22f, 0x234, 0x23b, 0x243, 0x248, 0x24c, 0x252, 0x257, 
       0x25e, 0x264, 0x269, 0x26d, 0x273, 0x278, 0x27f, 0x28b, 0x290, 0x294, 
       0x29c, 0x2a1, 0x2a8, 0x2b1, 0x2b4, 0x2b9, 0x2c2, 0x2c7, 0x2d0, 0x2d5, 
       0x2dc, 0x2e3, 0x2e8, 0x2f1, 0x2f6, 0x2fd, 0x30a, 0x316, 0x31f, 0x324, 
       0x32b, 0x334, 0x337, 0x33c, 0x345, 0x34a, 0x351, 0x364, 0x370, 0x37b, 
       0x3b0, 0x3b2, 0x3c5, 0x3c9, 0x3cd, 0x3d4, 0x3d7, 0x3f1, 0x3fa, 0x403, 
       0x40c, 0x42d, 0x445, 0x44a, 0x44c, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

LogicFileParser::Initializer LogicFileParser::_init;

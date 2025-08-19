
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
  enterRule(_localctx, 0, LogicFileParser::RuleEnumDef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(120);
    match(LogicFileParser::EnumDecPrefix);
    setState(121);
    match(LogicFileParser::Ident);
    setState(122);
    match(LogicFileParser::OBkt);
    setState(123);
    match(LogicFileParser::CBkt);
   
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

std::vector<tree::TerminalNode *> LogicFileParser::EnumValsContext::EOL() {
  return getTokens(LogicFileParser::EOL);
}

tree::TerminalNode* LogicFileParser::EnumValsContext::EOL(size_t i) {
  return getToken(LogicFileParser::EOL, i);
}

std::vector<tree::TerminalNode *> LogicFileParser::EnumValsContext::Comma() {
  return getTokens(LogicFileParser::Comma);
}

tree::TerminalNode* LogicFileParser::EnumValsContext::Comma(size_t i) {
  return getToken(LogicFileParser::Comma, i);
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
  enterRule(_localctx, 2, LogicFileParser::RuleEnumVals);
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
    setState(130); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(125);
      match(LogicFileParser::Ident);
      setState(127);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == LogicFileParser::Comma) {
        setState(126);
        match(LogicFileParser::Comma);
      }
      setState(129);
      match(LogicFileParser::EOL);
      setState(132); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == LogicFileParser::Ident);
   
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

tree::TerminalNode* LogicFileParser::IfBlockContext::AnyWS() {
  return getToken(LogicFileParser::AnyWS, 0);
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
  enterRule(_localctx, 4, LogicFileParser::RuleIfBlock);
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
    setState(134);
    match(LogicFileParser::IfPrefix);
    setState(135);
    expr(0);
    setState(136);
    match(LogicFileParser::CPar);
    setState(138);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::AnyWS) {
      setState(137);
      match(LogicFileParser::AnyWS);
    }
    setState(140);
    match(LogicFileParser::OBkt);
    setState(141);
    expr(0);
    setState(142);
    match(LogicFileParser::CBkt);
    setState(144);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      setState(143);
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
  enterRule(_localctx, 6, LogicFileParser::RuleIfContinuation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(148);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LogicFileParser::ElsePrefix: {
        enterOuterAlt(_localctx, 1);
        setState(146);
        elseBlock();
        break;
      }

      case LogicFileParser::ElseIfPrefix: {
        enterOuterAlt(_localctx, 2);
        setState(147);
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

tree::TerminalNode* LogicFileParser::ElseIfBlockContext::AnyWS() {
  return getToken(LogicFileParser::AnyWS, 0);
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
  enterRule(_localctx, 8, LogicFileParser::RuleElseIfBlock);
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
    setState(150);
    match(LogicFileParser::ElseIfPrefix);
    setState(151);
    expr(0);
    setState(152);
    match(LogicFileParser::CPar);
    setState(154);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::AnyWS) {
      setState(153);
      match(LogicFileParser::AnyWS);
    }
    setState(156);
    match(LogicFileParser::OBkt);
    setState(157);
    expr(0);
    setState(158);
    match(LogicFileParser::CBkt);
    setState(160);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      setState(159);
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

LogicFileParser::ExprContext* LogicFileParser::ElseBlockContext::expr() {
  return getRuleContext<LogicFileParser::ExprContext>(0);
}

tree::TerminalNode* LogicFileParser::ElseBlockContext::CBkt() {
  return getToken(LogicFileParser::CBkt, 0);
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
  enterRule(_localctx, 10, LogicFileParser::RuleElseBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(162);
    match(LogicFileParser::ElsePrefix);
    setState(163);
    expr(0);
    setState(164);
    match(LogicFileParser::CBkt);
   
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
  enterRule(_localctx, 12, LogicFileParser::RuleSwitchExpr);
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
    setState(166);
    match(LogicFileParser::SwitchPrefix);
    setState(167);
    expr(0);
    setState(169);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::SwitchReturnsKW) {
      setState(168);
      return_case();
    }
    setState(171);
    match(LogicFileParser::OBkt);
    setState(172);
    caseList();
    setState(173);
    match(LogicFileParser::CBkt);
   
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
  enterRule(_localctx, 14, LogicFileParser::RuleReturn_case);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(175);
    match(LogicFileParser::SwitchReturnsKW);
    setState(176);
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
  enterRule(_localctx, 16, LogicFileParser::RuleCaseList);
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
    setState(180); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(180);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case LogicFileParser::SwitchCaseKW: {
          setState(178);
          caseDef();
          break;
        }

        case LogicFileParser::SwitchDefaultKW: {
          setState(179);
          defaultCase();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(182); 
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

LogicFileParser::ValueContext* LogicFileParser::CaseDefContext::value() {
  return getRuleContext<LogicFileParser::ValueContext>(0);
}

tree::TerminalNode* LogicFileParser::CaseDefContext::Colon() {
  return getToken(LogicFileParser::Colon, 0);
}

LogicFileParser::ExprContext* LogicFileParser::CaseDefContext::expr() {
  return getRuleContext<LogicFileParser::ExprContext>(0);
}

std::vector<tree::TerminalNode *> LogicFileParser::CaseDefContext::EOL() {
  return getTokens(LogicFileParser::EOL);
}

tree::TerminalNode* LogicFileParser::CaseDefContext::EOL(size_t i) {
  return getToken(LogicFileParser::EOL, i);
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
  enterRule(_localctx, 18, LogicFileParser::RuleCaseDef);
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
    setState(184);
    match(LogicFileParser::SwitchCaseKW);
    setState(185);
    value();
    setState(186);
    match(LogicFileParser::Colon);
    setState(188);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::EOL) {
      setState(187);
      match(LogicFileParser::EOL);
    }
    setState(190);
    expr(0);
    setState(191);
    match(LogicFileParser::EOL);
   
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
  enterRule(_localctx, 20, LogicFileParser::RuleDefaultCase);
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
    setState(193);
    match(LogicFileParser::SwitchDefaultKW);
    setState(194);
    match(LogicFileParser::Colon);
    setState(196);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::EOL) {
      setState(195);
      match(LogicFileParser::EOL);
    }
    setState(198);
    expr(0);
    setState(199);
    match(LogicFileParser::EOL);
   
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

std::vector<tree::TerminalNode *> LogicFileParser::ArgsContext::D() {
  return getTokens(LogicFileParser::D);
}

tree::TerminalNode* LogicFileParser::ArgsContext::D(size_t i) {
  return getToken(LogicFileParser::D, i);
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
  enterRule(_localctx, 22, LogicFileParser::RuleArgs);
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
    setState(212);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << LogicFileParser::Ident)
      | (1ULL << LogicFileParser::Bool)
      | (1ULL << LogicFileParser::SignedNumber)
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
      | (1ULL << LogicFileParser::SwitchPrefix))) != 0)) {
      setState(201);
      arg();
      setState(209);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == LogicFileParser::Comma) {
        setState(202);
        match(LogicFileParser::Comma);
        setState(204);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == LogicFileParser::D) {
          setState(203);
          match(LogicFileParser::D);
        }
        setState(206);
        arg();
        setState(211);
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
  enterRule(_localctx, 24, LogicFileParser::RuleArg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(216);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      setState(214);
      match(LogicFileParser::Ident);
      setState(215);
      match(LogicFileParser::ArgAssign);
      break;
    }

    default:
      break;
    }
    setState(220);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      setState(218);
      expr(0);
      break;
    }

    case 2: {
      setState(219);
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

std::vector<tree::TerminalNode *> LogicFileParser::HelperDefContext::AnyWS() {
  return getTokens(LogicFileParser::AnyWS);
}

tree::TerminalNode* LogicFileParser::HelperDefContext::AnyWS(size_t i) {
  return getToken(LogicFileParser::AnyWS, i);
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
  enterRule(_localctx, 26, LogicFileParser::RuleHelperDef);
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
    setState(222);
    match(LogicFileParser::HelperPrefix);
    setState(223);
    match(LogicFileParser::Ident);
    setState(224);
    match(LogicFileParser::OPar);
    setState(225);
    args();
    setState(226);
    match(LogicFileParser::CPar);
    setState(228);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::Colon) {
      setState(227);
      match(LogicFileParser::Colon);
    }
    setState(231);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::AnyWS) {
      setState(230);
      match(LogicFileParser::AnyWS);
    }
    setState(233);
    match(LogicFileParser::OBkt);
    setState(235);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::AnyWS) {
      setState(234);
      match(LogicFileParser::AnyWS);
    }
    setState(237);
    expr(0);
    setState(239);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::AnyWS) {
      setState(238);
      match(LogicFileParser::AnyWS);
    }
    setState(241);
    match(LogicFileParser::CBkt);
   
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
  enterRule(_localctx, 28, LogicFileParser::RuleQuantityDef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(243);
    match(LogicFileParser::QuantityPrefix);
    setState(244);
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
  enterRule(_localctx, 30, LogicFileParser::RuleLogicValSet);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(246);
    match(LogicFileParser::LogicValSetPrefix);
    setState(247);
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
  enterRule(_localctx, 32, LogicFileParser::RuleNameDef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(249);
    match(LogicFileParser::NamePrefix);
    setState(250);
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
  enterRule(_localctx, 34, LogicFileParser::RuleClassificationDef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(252);
    match(LogicFileParser::ClassPrefix);
    setState(253);
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

std::vector<tree::TerminalNode *> LogicFileParser::ItemDefContext::AnyWS() {
  return getTokens(LogicFileParser::AnyWS);
}

tree::TerminalNode* LogicFileParser::ItemDefContext::AnyWS(size_t i) {
  return getToken(LogicFileParser::AnyWS, i);
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
  enterRule(_localctx, 36, LogicFileParser::RuleItemDef);
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
    setState(255);
    match(LogicFileParser::ItemDefPrefix);
    setState(256);
    match(LogicFileParser::Ident);
    setState(258);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::Colon) {
      setState(257);
      match(LogicFileParser::Colon);
    }
    setState(261);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::AnyWS) {
      setState(260);
      match(LogicFileParser::AnyWS);
    }
    setState(263);
    match(LogicFileParser::OBkt);
    setState(269); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(269);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case LogicFileParser::LogicValSetPrefix: {
          setState(264);
          logicValSet();
          break;
        }

        case LogicFileParser::NamePrefix: {
          setState(265);
          nameDef();
          break;
        }

        case LogicFileParser::ClassPrefix: {
          setState(266);
          classificationDef();
          break;
        }

        case LogicFileParser::QuantityPrefix: {
          setState(267);
          quantityDef();
          break;
        }

        case LogicFileParser::AnyWS: {
          setState(268);
          match(LogicFileParser::AnyWS);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(271); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 60) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 60)) & ((1ULL << (LogicFileParser::AnyWS - 60))
      | (1ULL << (LogicFileParser::QuantityPrefix - 60))
      | (1ULL << (LogicFileParser::LogicValSetPrefix - 60))
      | (1ULL << (LogicFileParser::NamePrefix - 60))
      | (1ULL << (LogicFileParser::ClassPrefix - 60)))) != 0));
    setState(273);
    match(LogicFileParser::CBkt);
   
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
  enterRule(_localctx, 38, LogicFileParser::RulePresentWhenDef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(275);
    match(LogicFileParser::PresentWhenPrefix);
    setState(276);
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
  enterRule(_localctx, 40, LogicFileParser::RuleRuleDef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(278);
    match(LogicFileParser::RulePrefix);
    setState(279);
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
  enterRule(_localctx, 42, LogicFileParser::RuleDestDef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(281);
    match(LogicFileParser::DestPrefix);
    setState(282);
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

std::vector<tree::TerminalNode *> LogicFileParser::EntranceDefContext::AnyWS() {
  return getTokens(LogicFileParser::AnyWS);
}

tree::TerminalNode* LogicFileParser::EntranceDefContext::AnyWS(size_t i) {
  return getToken(LogicFileParser::AnyWS, i);
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
  enterRule(_localctx, 44, LogicFileParser::RuleEntranceDef);
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
    setState(284);
    match(LogicFileParser::EntranceDefPrefix);
    setState(285);
    match(LogicFileParser::Ident);
    setState(287);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::Colon) {
      setState(286);
      match(LogicFileParser::Colon);
    }
    setState(290);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::AnyWS) {
      setState(289);
      match(LogicFileParser::AnyWS);
    }
    setState(292);
    match(LogicFileParser::OBkt);
    setState(299); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(299);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case LogicFileParser::PresentWhenPrefix: {
          setState(293);
          presentWhenDef();
          break;
        }

        case LogicFileParser::RulePrefix: {
          setState(294);
          ruleDef();
          break;
        }

        case LogicFileParser::DestPrefix: {
          setState(295);
          destDef();
          break;
        }

        case LogicFileParser::CantCrossAdult: {
          setState(296);
          match(LogicFileParser::CantCrossAdult);
          break;
        }

        case LogicFileParser::CantCrossChild: {
          setState(297);
          match(LogicFileParser::CantCrossChild);
          break;
        }

        case LogicFileParser::AnyWS: {
          setState(298);
          match(LogicFileParser::AnyWS);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(301); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 60) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 60)) & ((1ULL << (LogicFileParser::AnyWS - 60))
      | (1ULL << (LogicFileParser::PresentWhenPrefix - 60))
      | (1ULL << (LogicFileParser::RulePrefix - 60))
      | (1ULL << (LogicFileParser::DestPrefix - 60))
      | (1ULL << (LogicFileParser::CantCrossChild - 60))
      | (1ULL << (LogicFileParser::CantCrossAdult - 60)))) != 0));
    setState(303);
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

std::vector<tree::TerminalNode *> LogicFileParser::LocationDefContext::AnyWS() {
  return getTokens(LogicFileParser::AnyWS);
}

tree::TerminalNode* LogicFileParser::LocationDefContext::AnyWS(size_t i) {
  return getToken(LogicFileParser::AnyWS, i);
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
  enterRule(_localctx, 46, LogicFileParser::RuleLocationDef);
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
    setState(305);
    match(LogicFileParser::LocationPrefix);
    setState(306);
    match(LogicFileParser::Ident);
    setState(308);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::Colon) {
      setState(307);
      match(LogicFileParser::Colon);
    }
    setState(311);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::AnyWS) {
      setState(310);
      match(LogicFileParser::AnyWS);
    }
    setState(313);
    match(LogicFileParser::OBkt);
    setState(320); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(320);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
      case 1: {
        setState(314);
        nameDef();
        break;
      }

      case 2: {
        setState(315);
        ruleDef();
        break;
      }

      case 3: {
        setState(316);
        match(LogicFileParser::LocClassDef);
        break;
      }

      case 4: {
        setState(317);
        ruleDef();
        break;
      }

      case 5: {
        setState(318);
        presentWhenDef();
        break;
      }

      case 6: {
        setState(319);
        match(LogicFileParser::AnyWS);
        break;
      }

      default:
        break;
      }
      setState(322); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 60) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 60)) & ((1ULL << (LogicFileParser::AnyWS - 60))
      | (1ULL << (LogicFileParser::NamePrefix - 60))
      | (1ULL << (LogicFileParser::PresentWhenPrefix - 60))
      | (1ULL << (LogicFileParser::RulePrefix - 60))
      | (1ULL << (LogicFileParser::LocClassDef - 60)))) != 0));
    setState(324);
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

tree::TerminalNode* LogicFileParser::EventDefContext::Ident() {
  return getToken(LogicFileParser::Ident, 0);
}

tree::TerminalNode* LogicFileParser::EventDefContext::Colon() {
  return getToken(LogicFileParser::Colon, 0);
}

LogicFileParser::ExprContext* LogicFileParser::EventDefContext::expr() {
  return getRuleContext<LogicFileParser::ExprContext>(0);
}

tree::TerminalNode* LogicFileParser::EventDefContext::D() {
  return getToken(LogicFileParser::D, 0);
}

tree::TerminalNode* LogicFileParser::EventDefContext::AnyWS() {
  return getToken(LogicFileParser::AnyWS, 0);
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
  enterRule(_localctx, 48, LogicFileParser::RuleEventDef);
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
    setState(326);
    match(LogicFileParser::EventDefPrefix);
    setState(327);
    match(LogicFileParser::Ident);
    setState(329);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::D) {
      setState(328);
      match(LogicFileParser::D);
    }
    setState(331);
    match(LogicFileParser::Colon);
    setState(333);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::AnyWS) {
      setState(332);
      match(LogicFileParser::AnyWS);
    }
    setState(335);
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

std::vector<tree::TerminalNode *> LogicFileParser::RegionDefContext::AnyWS() {
  return getTokens(LogicFileParser::AnyWS);
}

tree::TerminalNode* LogicFileParser::RegionDefContext::AnyWS(size_t i) {
  return getToken(LogicFileParser::AnyWS, i);
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
  enterRule(_localctx, 50, LogicFileParser::RuleRegionDef);
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
    setState(337);
    match(LogicFileParser::RegionDefPrefix);
    setState(338);
    match(LogicFileParser::Ident);
    setState(340);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::Colon) {
      setState(339);
      match(LogicFileParser::Colon);
    }
    setState(343);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::AnyWS) {
      setState(342);
      match(LogicFileParser::AnyWS);
    }
    setState(345);
    match(LogicFileParser::OBkt);
    setState(352); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(352);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case LogicFileParser::NamePrefix: {
          setState(346);
          nameDef();
          break;
        }

        case LogicFileParser::LocationPrefix: {
          setState(347);
          locationDef();
          break;
        }

        case LogicFileParser::EntranceDefPrefix: {
          setState(348);
          entranceDef();
          break;
        }

        case LogicFileParser::EventDefPrefix: {
          setState(349);
          eventDef();
          break;
        }

        case LogicFileParser::PresentWhenPrefix: {
          setState(350);
          presentWhenDef();
          break;
        }

        case LogicFileParser::AnyWS: {
          setState(351);
          match(LogicFileParser::AnyWS);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(354); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 60) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 60)) & ((1ULL << (LogicFileParser::AnyWS - 60))
      | (1ULL << (LogicFileParser::NamePrefix - 60))
      | (1ULL << (LogicFileParser::PresentWhenPrefix - 60))
      | (1ULL << (LogicFileParser::EntranceDefPrefix - 60))
      | (1ULL << (LogicFileParser::LocationPrefix - 60))
      | (1ULL << (LogicFileParser::EventDefPrefix - 60)))) != 0));
    setState(356);
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

std::vector<tree::TerminalNode *> LogicFileParser::LogicDefContext::AnyWS() {
  return getTokens(LogicFileParser::AnyWS);
}

tree::TerminalNode* LogicFileParser::LogicDefContext::AnyWS(size_t i) {
  return getToken(LogicFileParser::AnyWS, i);
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
  enterRule(_localctx, 52, LogicFileParser::RuleLogicDef);
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
    setState(358);
    match(LogicFileParser::LogicPrefix);
    setState(360);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::Colon) {
      setState(359);
      match(LogicFileParser::Colon);
    }
    setState(363);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::AnyWS) {
      setState(362);
      match(LogicFileParser::AnyWS);
    }
    setState(365);
    match(LogicFileParser::OBkt);
    setState(370); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(370);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case LogicFileParser::RegionDefPrefix: {
          setState(366);
          regionDef();
          break;
        }

        case LogicFileParser::ItemDefPrefix: {
          setState(367);
          itemDef();
          break;
        }

        case LogicFileParser::HelperPrefix: {
          setState(368);
          helperDef();
          break;
        }

        case LogicFileParser::AnyWS: {
          setState(369);
          match(LogicFileParser::AnyWS);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(372); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 60) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 60)) & ((1ULL << (LogicFileParser::AnyWS - 60))
      | (1ULL << (LogicFileParser::HelperPrefix - 60))
      | (1ULL << (LogicFileParser::ItemDefPrefix - 60))
      | (1ULL << (LogicFileParser::RegionDefPrefix - 60)))) != 0));
    setState(374);
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

tree::TerminalNode* LogicFileParser::OptionsDefContext::CBkt() {
  return getToken(LogicFileParser::CBkt, 0);
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

std::vector<tree::TerminalNode *> LogicFileParser::OptionsDefContext::AnyWS() {
  return getTokens(LogicFileParser::AnyWS);
}

tree::TerminalNode* LogicFileParser::OptionsDefContext::AnyWS(size_t i) {
  return getToken(LogicFileParser::AnyWS, i);
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
  enterRule(_localctx, 54, LogicFileParser::RuleOptionsDef);
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
    setState(376);
    match(LogicFileParser::OptionsDefPrefix);
    setState(386); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(386);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
      case 1: {
        setState(377);
        optionDefStrings();
        break;
      }

      case 2: {
        setState(378);
        optionDefIntRange();
        break;
      }

      case 3: {
        setState(379);
        optionDefIntList();
        break;
      }

      case 4: {
        setState(380);
        optionDefFloatRange();
        break;
      }

      case 5: {
        setState(381);
        optionDefFloatList();
        break;
      }

      case 6: {
        setState(382);
        optionDefInt();
        break;
      }

      case 7: {
        setState(383);
        optionDefFloat();
        break;
      }

      case 8: {
        setState(384);
        optionDefString();
        break;
      }

      case 9: {
        setState(385);
        match(LogicFileParser::AnyWS);
        break;
      }

      default:
        break;
      }
      setState(388); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 60) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 60)) & ((1ULL << (LogicFileParser::AnyWS - 60))
      | (1ULL << (LogicFileParser::OptionStringsPrefix - 60))
      | (1ULL << (LogicFileParser::OptionStringPrefix - 60))
      | (1ULL << (LogicFileParser::OptionIntsPrefix - 60))
      | (1ULL << (LogicFileParser::OptionIntPrefix - 60))
      | (1ULL << (LogicFileParser::OptionFloatsPrefix - 60))
      | (1ULL << (LogicFileParser::OptionFloatPrefix - 60)))) != 0));
    setState(390);
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

tree::TerminalNode* LogicFileParser::OptionDefStringsContext::OptionStringsPrefix() {
  return getToken(LogicFileParser::OptionStringsPrefix, 0);
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

tree::TerminalNode* LogicFileParser::OptionDefStringsContext::AnyWS() {
  return getToken(LogicFileParser::AnyWS, 0);
}

std::vector<tree::TerminalNode *> LogicFileParser::OptionDefStringsContext::EscapedString() {
  return getTokens(LogicFileParser::EscapedString);
}

tree::TerminalNode* LogicFileParser::OptionDefStringsContext::EscapedString(size_t i) {
  return getToken(LogicFileParser::EscapedString, i);
}

std::vector<tree::TerminalNode *> LogicFileParser::OptionDefStringsContext::ListSeparator() {
  return getTokens(LogicFileParser::ListSeparator);
}

tree::TerminalNode* LogicFileParser::OptionDefStringsContext::ListSeparator(size_t i) {
  return getToken(LogicFileParser::ListSeparator, i);
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
  enterRule(_localctx, 56, LogicFileParser::RuleOptionDefStrings);
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
    setState(392);
    match(LogicFileParser::OptionStringsPrefix);
    setState(393);
    match(LogicFileParser::Ident);
    setState(395);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::Colon) {
      setState(394);
      match(LogicFileParser::Colon);
    }
    setState(398);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::AnyWS) {
      setState(397);
      match(LogicFileParser::AnyWS);
    }
    setState(400);
    match(LogicFileParser::OBkt);
    setState(409);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::EscapedString) {
      setState(401);
      match(LogicFileParser::EscapedString);
      setState(406);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == LogicFileParser::ListSeparator) {
        setState(402);
        match(LogicFileParser::ListSeparator);
        setState(403);
        match(LogicFileParser::EscapedString);
        setState(408);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(411);
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

tree::TerminalNode* LogicFileParser::OptionDefStringContext::OptionStringPrefix() {
  return getToken(LogicFileParser::OptionStringPrefix, 0);
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
  enterRule(_localctx, 58, LogicFileParser::RuleOptionDefString);
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
    setState(413);
    match(LogicFileParser::OptionStringPrefix);
    setState(414);
    match(LogicFileParser::Ident);
    setState(416);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::Colon) {
      setState(415);
      match(LogicFileParser::Colon);
    }
    setState(418);
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

tree::TerminalNode* LogicFileParser::OptionDefIntListContext::OptionIntsPrefix() {
  return getToken(LogicFileParser::OptionIntsPrefix, 0);
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

tree::TerminalNode* LogicFileParser::OptionDefIntListContext::AnyWS() {
  return getToken(LogicFileParser::AnyWS, 0);
}

std::vector<tree::TerminalNode *> LogicFileParser::OptionDefIntListContext::SignedInt() {
  return getTokens(LogicFileParser::SignedInt);
}

tree::TerminalNode* LogicFileParser::OptionDefIntListContext::SignedInt(size_t i) {
  return getToken(LogicFileParser::SignedInt, i);
}

tree::TerminalNode* LogicFileParser::OptionDefIntListContext::ListSeparator() {
  return getToken(LogicFileParser::ListSeparator, 0);
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
  enterRule(_localctx, 60, LogicFileParser::RuleOptionDefIntList);
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
    setState(420);
    match(LogicFileParser::OptionIntsPrefix);
    setState(421);
    match(LogicFileParser::Ident);
    setState(423);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::Colon) {
      setState(422);
      match(LogicFileParser::Colon);
    }
    setState(426);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::AnyWS) {
      setState(425);
      match(LogicFileParser::AnyWS);
    }
    setState(428);
    match(LogicFileParser::OBkt);
    setState(432);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::SignedInt) {
      setState(429);
      match(LogicFileParser::SignedInt);

      setState(430);
      match(LogicFileParser::ListSeparator);
      setState(431);
      match(LogicFileParser::SignedInt);
    }
    setState(434);
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

tree::TerminalNode* LogicFileParser::OptionDefIntRangeContext::OptionIntsPrefix() {
  return getToken(LogicFileParser::OptionIntsPrefix, 0);
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

tree::TerminalNode* LogicFileParser::OptionDefIntRangeContext::ListSeparator() {
  return getToken(LogicFileParser::ListSeparator, 0);
}

tree::TerminalNode* LogicFileParser::OptionDefIntRangeContext::MaxKW() {
  return getToken(LogicFileParser::MaxKW, 0);
}

tree::TerminalNode* LogicFileParser::OptionDefIntRangeContext::CBkt() {
  return getToken(LogicFileParser::CBkt, 0);
}

std::vector<tree::TerminalNode *> LogicFileParser::OptionDefIntRangeContext::AnyWS() {
  return getTokens(LogicFileParser::AnyWS);
}

tree::TerminalNode* LogicFileParser::OptionDefIntRangeContext::AnyWS(size_t i) {
  return getToken(LogicFileParser::AnyWS, i);
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
  enterRule(_localctx, 62, LogicFileParser::RuleOptionDefIntRange);
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
    setState(436);
    match(LogicFileParser::OptionIntsPrefix);
    setState(437);
    match(LogicFileParser::Ident);
    setState(439);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::Colon) {
      setState(438);
      match(LogicFileParser::Colon);
    }
    setState(442);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::AnyWS) {
      setState(441);
      match(LogicFileParser::AnyWS);
    }
    setState(444);
    match(LogicFileParser::OBkt);
    setState(445);
    match(LogicFileParser::MinKW);
    setState(446);
    match(LogicFileParser::Colon);
    setState(447);
    match(LogicFileParser::SignedInt);
    setState(448);
    match(LogicFileParser::ListSeparator);
    setState(449);
    match(LogicFileParser::MaxKW);
    setState(450);
    match(LogicFileParser::Colon);
    setState(451);
    match(LogicFileParser::SignedInt);
    setState(453);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::AnyWS) {
      setState(452);
      match(LogicFileParser::AnyWS);
    }
    setState(455);
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

tree::TerminalNode* LogicFileParser::OptionDefIntContext::OptionIntPrefix() {
  return getToken(LogicFileParser::OptionIntPrefix, 0);
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
  enterRule(_localctx, 64, LogicFileParser::RuleOptionDefInt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(457);
    match(LogicFileParser::OptionIntPrefix);
    setState(458);
    match(LogicFileParser::Ident);
    setState(459);
    match(LogicFileParser::Colon);
    setState(460);
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

tree::TerminalNode* LogicFileParser::OptionDefFloatListContext::OptionFloatsPrefix() {
  return getToken(LogicFileParser::OptionFloatsPrefix, 0);
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

tree::TerminalNode* LogicFileParser::OptionDefFloatListContext::AnyWS() {
  return getToken(LogicFileParser::AnyWS, 0);
}

std::vector<tree::TerminalNode *> LogicFileParser::OptionDefFloatListContext::SignedNumber() {
  return getTokens(LogicFileParser::SignedNumber);
}

tree::TerminalNode* LogicFileParser::OptionDefFloatListContext::SignedNumber(size_t i) {
  return getToken(LogicFileParser::SignedNumber, i);
}

std::vector<tree::TerminalNode *> LogicFileParser::OptionDefFloatListContext::ListSeparator() {
  return getTokens(LogicFileParser::ListSeparator);
}

tree::TerminalNode* LogicFileParser::OptionDefFloatListContext::ListSeparator(size_t i) {
  return getToken(LogicFileParser::ListSeparator, i);
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
  enterRule(_localctx, 66, LogicFileParser::RuleOptionDefFloatList);
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
    setState(462);
    match(LogicFileParser::OptionFloatsPrefix);
    setState(463);
    match(LogicFileParser::Ident);
    setState(465);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::Colon) {
      setState(464);
      match(LogicFileParser::Colon);
    }
    setState(468);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::AnyWS) {
      setState(467);
      match(LogicFileParser::AnyWS);
    }
    setState(470);
    match(LogicFileParser::OBkt);
    setState(479);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::SignedNumber) {
      setState(471);
      match(LogicFileParser::SignedNumber);
      setState(476);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == LogicFileParser::ListSeparator) {
        setState(472);
        match(LogicFileParser::ListSeparator);
        setState(473);
        match(LogicFileParser::SignedNumber);
        setState(478);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(481);
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

tree::TerminalNode* LogicFileParser::OptionDefFloatRangeContext::OptionFloatsPrefix() {
  return getToken(LogicFileParser::OptionFloatsPrefix, 0);
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

tree::TerminalNode* LogicFileParser::OptionDefFloatRangeContext::ListSeparator() {
  return getToken(LogicFileParser::ListSeparator, 0);
}

tree::TerminalNode* LogicFileParser::OptionDefFloatRangeContext::MaxKW() {
  return getToken(LogicFileParser::MaxKW, 0);
}

tree::TerminalNode* LogicFileParser::OptionDefFloatRangeContext::CBkt() {
  return getToken(LogicFileParser::CBkt, 0);
}

std::vector<tree::TerminalNode *> LogicFileParser::OptionDefFloatRangeContext::AnyWS() {
  return getTokens(LogicFileParser::AnyWS);
}

tree::TerminalNode* LogicFileParser::OptionDefFloatRangeContext::AnyWS(size_t i) {
  return getToken(LogicFileParser::AnyWS, i);
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
  enterRule(_localctx, 68, LogicFileParser::RuleOptionDefFloatRange);
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
    setState(483);
    match(LogicFileParser::OptionFloatsPrefix);
    setState(484);
    match(LogicFileParser::Ident);
    setState(486);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::Colon) {
      setState(485);
      match(LogicFileParser::Colon);
    }
    setState(489);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::AnyWS) {
      setState(488);
      match(LogicFileParser::AnyWS);
    }
    setState(491);
    match(LogicFileParser::OBkt);
    setState(492);
    match(LogicFileParser::MinKW);
    setState(493);
    match(LogicFileParser::Colon);
    setState(494);
    match(LogicFileParser::SignedNumber);
    setState(495);
    match(LogicFileParser::ListSeparator);
    setState(496);
    match(LogicFileParser::MaxKW);
    setState(497);
    match(LogicFileParser::Colon);
    setState(498);
    match(LogicFileParser::SignedNumber);
    setState(500);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::AnyWS) {
      setState(499);
      match(LogicFileParser::AnyWS);
    }
    setState(502);
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

tree::TerminalNode* LogicFileParser::OptionDefFloatContext::OptionFloatPrefix() {
  return getToken(LogicFileParser::OptionFloatPrefix, 0);
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
  enterRule(_localctx, 70, LogicFileParser::RuleOptionDefFloat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(504);
    match(LogicFileParser::OptionFloatPrefix);
    setState(505);
    match(LogicFileParser::Ident);
    setState(506);
    match(LogicFileParser::Colon);
    setState(507);
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

tree::TerminalNode* LogicFileParser::OptionDefBoolContext::OptionBoolPrefix() {
  return getToken(LogicFileParser::OptionBoolPrefix, 0);
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
  enterRule(_localctx, 72, LogicFileParser::RuleOptionDefBool);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(509);
    match(LogicFileParser::OptionBoolPrefix);
    setState(510);
    match(LogicFileParser::Ident);
    setState(511);
    match(LogicFileParser::Colon);
    setState(512);
    match(LogicFileParser::Bool);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FileDefContext ------------------------------------------------------------------

LogicFileParser::FileDefContext::FileDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
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

std::vector<tree::TerminalNode *> LogicFileParser::FileDefContext::AnyWS() {
  return getTokens(LogicFileParser::AnyWS);
}

tree::TerminalNode* LogicFileParser::FileDefContext::AnyWS(size_t i) {
  return getToken(LogicFileParser::AnyWS, i);
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
  enterRule(_localctx, 74, LogicFileParser::RuleFileDef);
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
    setState(518); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(518);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case LogicFileParser::LogicPrefix: {
          setState(514);
          logicDef();
          break;
        }

        case LogicFileParser::OptionsDefPrefix: {
          setState(515);
          optionsDef();
          break;
        }

        case LogicFileParser::EnumDecPrefix: {
          setState(516);
          enumDef();
          break;
        }

        case LogicFileParser::AnyWS: {
          setState(517);
          match(LogicFileParser::AnyWS);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(520); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == LogicFileParser::EnumDecPrefix

    || _la == LogicFileParser::AnyWS || _la == LogicFileParser::LogicPrefix

    || _la == LogicFileParser::OptionsDefPrefix);
   
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

LogicFileParser::ValueContext* LogicFileParser::NotOperatorContext::value() {
  return getRuleContext<LogicFileParser::ValueContext>(0);
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
    setState(526);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LogicFileParser::Ident:
      case LogicFileParser::Bool:
      case LogicFileParser::SignedNumber:
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
      case LogicFileParser::SwitchPrefix: {
        _localctx = _tracker.createInstance<BaseFuncContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(523);
        basefunc();
        break;
      }

      case LogicFileParser::NotSymbol: {
        _localctx = _tracker.createInstance<NotOperatorContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(524);
        antlrcpp::downCast<NotOperatorContext *>(_localctx)->prefix = match(LogicFileParser::NotSymbol);
        setState(525);
        value();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(581);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(579);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(528);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(529);
          antlrcpp::downCast<MulOperatorContext *>(_localctx)->op = match(LogicFileParser::MulSymbol);
          setState(530);
          antlrcpp::downCast<MulOperatorContext *>(_localctx)->right = expr(17);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<DivOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(531);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(532);
          antlrcpp::downCast<DivOperatorContext *>(_localctx)->op = match(LogicFileParser::DivSymbol);
          setState(533);
          antlrcpp::downCast<DivOperatorContext *>(_localctx)->right = expr(16);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ModOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(534);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(535);
          antlrcpp::downCast<ModOperatorContext *>(_localctx)->op = match(LogicFileParser::ModSymbol);
          setState(536);
          antlrcpp::downCast<ModOperatorContext *>(_localctx)->right = expr(15);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<AddOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(537);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(538);
          antlrcpp::downCast<AddOperatorContext *>(_localctx)->op = match(LogicFileParser::AddSymbol);
          setState(539);
          antlrcpp::downCast<AddOperatorContext *>(_localctx)->right = expr(14);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<SubOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(540);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(541);
          antlrcpp::downCast<SubOperatorContext *>(_localctx)->op = match(LogicFileParser::SubSymbol);
          setState(542);
          antlrcpp::downCast<SubOperatorContext *>(_localctx)->right = expr(13);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<LeftShiftOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(543);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(544);
          antlrcpp::downCast<LeftShiftOperatorContext *>(_localctx)->op = match(LogicFileParser::LSSymbol);
          setState(545);
          antlrcpp::downCast<LeftShiftOperatorContext *>(_localctx)->right = expr(12);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<RightShiftOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(546);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(547);
          antlrcpp::downCast<RightShiftOperatorContext *>(_localctx)->op = match(LogicFileParser::RSSymbol);
          setState(548);
          antlrcpp::downCast<RightShiftOperatorContext *>(_localctx)->right = expr(11);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<LeOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(549);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(550);
          antlrcpp::downCast<LeOperatorContext *>(_localctx)->op = match(LogicFileParser::LeSymbol);
          setState(551);
          antlrcpp::downCast<LeOperatorContext *>(_localctx)->right = expr(10);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<GeOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(552);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(553);
          antlrcpp::downCast<GeOperatorContext *>(_localctx)->op = match(LogicFileParser::GeSymbol);
          setState(554);
          antlrcpp::downCast<GeOperatorContext *>(_localctx)->right = expr(9);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<GeqOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(555);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(556);
          antlrcpp::downCast<GeqOperatorContext *>(_localctx)->op = match(LogicFileParser::GeqSymbol);
          setState(557);
          antlrcpp::downCast<GeqOperatorContext *>(_localctx)->right = expr(8);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<LeqOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(558);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(559);
          antlrcpp::downCast<LeqOperatorContext *>(_localctx)->op = match(LogicFileParser::LeqSymbol);
          setState(560);
          antlrcpp::downCast<LeqOperatorContext *>(_localctx)->right = expr(7);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<NeqOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(561);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(562);
          antlrcpp::downCast<NeqOperatorContext *>(_localctx)->op = match(LogicFileParser::NeqSymbol);
          setState(563);
          antlrcpp::downCast<NeqOperatorContext *>(_localctx)->right = expr(6);
          break;
        }

        case 13: {
          auto newContext = _tracker.createInstance<EqOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(564);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(565);
          antlrcpp::downCast<EqOperatorContext *>(_localctx)->op = match(LogicFileParser::EqSymbol);
          setState(566);
          antlrcpp::downCast<EqOperatorContext *>(_localctx)->right = expr(5);
          break;
        }

        case 14: {
          auto newContext = _tracker.createInstance<OrOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(567);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(568);
          antlrcpp::downCast<OrOperatorContext *>(_localctx)->op = match(LogicFileParser::OrSymbol);
          setState(569);
          antlrcpp::downCast<OrOperatorContext *>(_localctx)->right = expr(4);
          break;
        }

        case 15: {
          auto newContext = _tracker.createInstance<AndOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(570);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(571);
          antlrcpp::downCast<AndOperatorContext *>(_localctx)->op = match(LogicFileParser::AndSymbol);
          setState(572);
          antlrcpp::downCast<AndOperatorContext *>(_localctx)->right = expr(3);
          break;
        }

        case 16: {
          auto newContext = _tracker.createInstance<TernaryOperatorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(573);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(574);
          antlrcpp::downCast<TernaryOperatorContext *>(_localctx)->op = match(LogicFileParser::Question);
          setState(575);
          antlrcpp::downCast<TernaryOperatorContext *>(_localctx)->right = expr(0);
          setState(576);
          match(LogicFileParser::Colon);
          setState(577);
          expr(1);
          break;
        }

        default:
          break;
        } 
      }
      setState(583);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx);
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
    setState(600);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LogicFileParser::OptionCheckKW: {
        enterOuterAlt(_localctx, 1);
        setState(584);
        optionCheck();
        break;
      }

      case LogicFileParser::HelperCallKW: {
        enterOuterAlt(_localctx, 2);
        setState(585);
        helperCall();
        break;
      }

      case LogicFileParser::ArgCheckKW: {
        enterOuterAlt(_localctx, 3);
        setState(586);
        argCheck();
        break;
      }

      case LogicFileParser::LogicValCheckKW: {
        enterOuterAlt(_localctx, 4);
        setState(587);
        logicValCheck();
        break;
      }

      case LogicFileParser::EventCheckKW: {
        enterOuterAlt(_localctx, 5);
        setState(588);
        eventCheck();
        break;
      }

      case LogicFileParser::CanReachLocKW: {
        enterOuterAlt(_localctx, 6);
        setState(589);
        canReachLocCall();
        break;
      }

      case LogicFileParser::CanReachEntranceKW: {
        enterOuterAlt(_localctx, 7);
        setState(590);
        canReachEntranceCall();
        break;
      }

      case LogicFileParser::CanReachRegionKW: {
        enterOuterAlt(_localctx, 8);
        setState(591);
        canReachRegionCall();
        break;
      }

      case LogicFileParser::HasItemKW: {
        enterOuterAlt(_localctx, 9);
        setState(592);
        hasItemCall();
        break;
      }

      case LogicFileParser::CountItemKW: {
        enterOuterAlt(_localctx, 10);
        setState(593);
        countItemCall();
        break;
      }

      case LogicFileParser::IsMQDungeonKW: {
        enterOuterAlt(_localctx, 11);
        setState(594);
        isDungeonMqCall();
        break;
      }

      case LogicFileParser::FloorKW: {
        enterOuterAlt(_localctx, 12);
        setState(595);
        floorCall();
        break;
      }

      case LogicFileParser::CeilKW: {
        enterOuterAlt(_localctx, 13);
        setState(596);
        ceilCall();
        break;
      }

      case LogicFileParser::SwitchPrefix: {
        enterOuterAlt(_localctx, 14);
        setState(597);
        switchExpr();
        break;
      }

      case LogicFileParser::IfPrefix: {
        enterOuterAlt(_localctx, 15);
        setState(598);
        ifBlock();
        break;
      }

      case LogicFileParser::Ident:
      case LogicFileParser::Bool:
      case LogicFileParser::SignedNumber:
      case LogicFileParser::OPar:
      case LogicFileParser::EntranceRefKW:
      case LogicFileParser::RegionRefKW:
      case LogicFileParser::LocRefKW:
      case LogicFileParser::ItemRefKW: {
        enterOuterAlt(_localctx, 16);
        setState(599);
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
  enterRule(_localctx, 80, LogicFileParser::RuleOptionCheck);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(602);
    match(LogicFileParser::OptionCheckKW);
    setState(603);
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
  enterRule(_localctx, 82, LogicFileParser::RuleHelperCall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(605);
    match(LogicFileParser::HelperCallKW);
    setState(606);
    match(LogicFileParser::Ident);
   
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
  enterRule(_localctx, 84, LogicFileParser::RuleArgCheck);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(608);
    match(LogicFileParser::ArgCheckKW);
    setState(609);
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
  enterRule(_localctx, 86, LogicFileParser::RuleLogicValCheck);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(611);
    match(LogicFileParser::LogicValCheckKW);
    setState(612);
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
  enterRule(_localctx, 88, LogicFileParser::RuleEventCheck);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(614);
    match(LogicFileParser::EventCheckKW);
    setState(615);
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

tree::TerminalNode* LogicFileParser::CanReachLocCallContext::D() {
  return getToken(LogicFileParser::D, 0);
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
  enterRule(_localctx, 90, LogicFileParser::RuleCanReachLocCall);
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
    setState(617);
    match(LogicFileParser::CanReachLocKW);
    setState(618);
    match(LogicFileParser::OPar);
    setState(619);
    match(LogicFileParser::Ident);
    setState(625);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::Comma) {
      setState(620);
      match(LogicFileParser::Comma);
      setState(622);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == LogicFileParser::D) {
        setState(621);
        match(LogicFileParser::D);
      }
      setState(624);
      match(LogicFileParser::Age);
    }
    setState(627);
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

tree::TerminalNode* LogicFileParser::CanReachEntranceCallContext::D() {
  return getToken(LogicFileParser::D, 0);
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
  enterRule(_localctx, 92, LogicFileParser::RuleCanReachEntranceCall);
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
    setState(629);
    match(LogicFileParser::CanReachEntranceKW);
    setState(630);
    match(LogicFileParser::OPar);
    setState(631);
    match(LogicFileParser::Ident);
    setState(637);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::Comma) {
      setState(632);
      match(LogicFileParser::Comma);
      setState(634);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == LogicFileParser::D) {
        setState(633);
        match(LogicFileParser::D);
      }
      setState(636);
      match(LogicFileParser::Age);
    }
    setState(639);
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

tree::TerminalNode* LogicFileParser::CanReachRegionCallContext::D() {
  return getToken(LogicFileParser::D, 0);
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
  enterRule(_localctx, 94, LogicFileParser::RuleCanReachRegionCall);
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
    setState(641);
    match(LogicFileParser::CanReachRegionKW);
    setState(642);
    match(LogicFileParser::OPar);
    setState(643);
    match(LogicFileParser::Ident);
    setState(649);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LogicFileParser::Comma) {
      setState(644);
      match(LogicFileParser::Comma);
      setState(646);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == LogicFileParser::D) {
        setState(645);
        match(LogicFileParser::D);
      }
      setState(648);
      match(LogicFileParser::Age);
    }
    setState(651);
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
  enterRule(_localctx, 96, LogicFileParser::RuleHasItemCall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(653);
    match(LogicFileParser::HasItemKW);
    setState(654);
    match(LogicFileParser::OPar);
    setState(655);
    match(LogicFileParser::Ident);
    setState(656);
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
  enterRule(_localctx, 98, LogicFileParser::RuleCountItemCall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(658);
    match(LogicFileParser::CountItemKW);
    setState(659);
    match(LogicFileParser::OPar);
    setState(660);
    match(LogicFileParser::Ident);
    setState(661);
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
  enterRule(_localctx, 100, LogicFileParser::RuleIsDungeonMqCall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(663);
    match(LogicFileParser::IsMQDungeonKW);
    setState(664);
    match(LogicFileParser::OPar);
    setState(665);
    match(LogicFileParser::Ident);
    setState(666);
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

tree::TerminalNode* LogicFileParser::FloorCallContext::Ident() {
  return getToken(LogicFileParser::Ident, 0);
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
  enterRule(_localctx, 102, LogicFileParser::RuleFloorCall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(668);
    match(LogicFileParser::FloorKW);
    setState(669);
    match(LogicFileParser::OPar);
    setState(670);
    match(LogicFileParser::Ident);
    setState(671);
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

tree::TerminalNode* LogicFileParser::CeilCallContext::Ident() {
  return getToken(LogicFileParser::Ident, 0);
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
  enterRule(_localctx, 104, LogicFileParser::RuleCeilCall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(673);
    match(LogicFileParser::CeilKW);
    setState(674);
    match(LogicFileParser::OPar);
    setState(675);
    match(LogicFileParser::Ident);
    setState(676);
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
  enterRule(_localctx, 106, LogicFileParser::RuleValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(686);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LogicFileParser::OPar: {
        enterOuterAlt(_localctx, 1);
        setState(678);
        parenExpr();
        break;
      }

      case LogicFileParser::Bool: {
        enterOuterAlt(_localctx, 2);
        setState(679);
        match(LogicFileParser::Bool);
        break;
      }

      case LogicFileParser::SignedNumber: {
        enterOuterAlt(_localctx, 3);
        setState(680);
        match(LogicFileParser::SignedNumber);
        break;
      }

      case LogicFileParser::Ident: {
        enterOuterAlt(_localctx, 4);
        setState(681);
        enumValueRef();
        break;
      }

      case LogicFileParser::EntranceRefKW: {
        enterOuterAlt(_localctx, 5);
        setState(682);
        entranceRef();
        break;
      }

      case LogicFileParser::RegionRefKW: {
        enterOuterAlt(_localctx, 6);
        setState(683);
        regionRef();
        break;
      }

      case LogicFileParser::LocRefKW: {
        enterOuterAlt(_localctx, 7);
        setState(684);
        locRef();
        break;
      }

      case LogicFileParser::ItemRefKW: {
        enterOuterAlt(_localctx, 8);
        setState(685);
        itemRef();
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
  enterRule(_localctx, 108, LogicFileParser::RuleParenExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(688);
    match(LogicFileParser::OPar);
    setState(689);
    expr(0);
    setState(690);
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
  enterRule(_localctx, 110, LogicFileParser::RuleEnumValueRef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(692);
    match(LogicFileParser::Ident);
    setState(693);
    match(LogicFileParser::Colon);
    setState(694);
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
  enterRule(_localctx, 112, LogicFileParser::RuleEntranceRef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(696);
    match(LogicFileParser::EntranceRefKW);
    setState(697);
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
  enterRule(_localctx, 114, LogicFileParser::RuleRegionRef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(699);
    match(LogicFileParser::RegionRefKW);
    setState(700);
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
  enterRule(_localctx, 116, LogicFileParser::RuleLocRef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(702);
    match(LogicFileParser::LocRefKW);
    setState(703);
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
  enterRule(_localctx, 118, LogicFileParser::RuleItemRef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(705);
    match(LogicFileParser::ItemRefKW);
    setState(706);
    match(LogicFileParser::Ident);
   
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
  "enumDef", "enumVals", "ifBlock", "ifContinuation", "elseIfBlock", "elseBlock", 
  "switchExpr", "return_case", "caseList", "caseDef", "defaultCase", "args", 
  "arg", "helperDef", "quantityDef", "logicValSet", "nameDef", "classificationDef", 
  "itemDef", "presentWhenDef", "ruleDef", "destDef", "entranceDef", "locationDef", 
  "eventDef", "regionDef", "logicDef", "optionsDef", "optionDefStrings", 
  "optionDefString", "optionDefIntList", "optionDefIntRange", "optionDefInt", 
  "optionDefFloatList", "optionDefFloatRange", "optionDefFloat", "optionDefBool", 
  "fileDef", "expr", "basefunc", "optionCheck", "helperCall", "argCheck", 
  "logicValCheck", "eventCheck", "canReachLocCall", "canReachEntranceCall", 
  "canReachRegionCall", "hasItemCall", "countItemCall", "isDungeonMqCall", 
  "floorCall", "ceilCall", "value", "parenExpr", "enumValueRef", "entranceRef", 
  "regionRef", "locRef", "itemRef"
};

std::vector<std::string> LogicFileParser::_literalNames = {
  "", "", "", "", "", "", "", "'enum '", "'{'", "'}'", "'('", "')'", "','", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "':'", "'='", "", "", "", "", "", "", "", "", "", "", "", "'floor'", 
  "'ceil'", "", "", "", "", "", "", "", "'switch '", "'case '", "", "'yields '", 
  "", "' '", "", "'helper '", "", "", "", "", "", "'item '", "", "", "", 
  "", "", "'entrance '", "", "'location '", "'event '", "'region '", "'logic'", 
  "", "'option strings '", "'option string '", "'option ints '", "'option int '", 
  "'option floats '", "'option float '", "'option bool '", "'min'", "'max'"
};

std::vector<std::string> LogicFileParser::_symbolicNames = {
  "", "Ident", "Bool", "Age", "SignedNumber", "SignedInt", "EscapedString", 
  "EnumDecPrefix", "OBkt", "CBkt", "OPar", "CPar", "Comma", "EOL", "OrSymbol", 
  "AndSymbol", "NotSymbol", "NeqSymbol", "EqSymbol", "GeqSymbol", "LeqSymbol", 
  "LeSymbol", "GeSymbol", "AddSymbol", "SubSymbol", "MulSymbol", "DivSymbol", 
  "ModSymbol", "RSSymbol", "LSSymbol", "Question", "Colon", "ColonNoSpace", 
  "ArgAssign", "OptionCheckKW", "HelperCallKW", "ArgCheckKW", "LogicValCheckKW", 
  "EventCheckKW", "CanReachLocKW", "CanReachEntranceKW", "CanReachRegionKW", 
  "HasItemKW", "CountItemKW", "IsMQDungeonKW", "FloorKW", "CeilKW", "EntranceRefKW", 
  "RegionRefKW", "LocRefKW", "ItemRefKW", "IfPrefix", "ElseIfPrefix", "ElsePrefix", 
  "SwitchPrefix", "SwitchCaseKW", "SwitchDefaultKW", "SwitchReturnsKW", 
  "WS", "D", "AnyWS", "HelperPrefix", "QuantityPrefix", "LogicValSetPrefix", 
  "NamePrefix", "ClassPrefix", "Classification", "ItemDefPrefix", "PresentWhenPrefix", 
  "RulePrefix", "DestPrefix", "CantCrossChild", "CantCrossAdult", "EntranceDefPrefix", 
  "LocClassDef", "LocationPrefix", "EventDefPrefix", "RegionDefPrefix", 
  "LogicPrefix", "OptionsDefPrefix", "OptionStringsPrefix", "OptionStringPrefix", 
  "OptionIntsPrefix", "OptionIntPrefix", "OptionFloatsPrefix", "OptionFloatPrefix", 
  "OptionBoolPrefix", "MinKW", "MaxKW", "ListSeparator"
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
       0x3, 0x5b, 0x2c7, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
       0x9, 0x3b, 0x4, 0x3c, 0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x3, 0x2, 
       0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x5, 
       0x3, 0x82, 0xa, 0x3, 0x3, 0x3, 0x6, 0x3, 0x85, 0xa, 0x3, 0xd, 0x3, 
       0xe, 0x3, 0x86, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 
       0x8d, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 
       0x93, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x97, 0xa, 0x5, 0x3, 
       0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x9d, 0xa, 0x6, 0x3, 
       0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0xa3, 0xa, 0x6, 0x3, 
       0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
       0x5, 0x8, 0xac, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
       0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x6, 0xa, 0xb7, 
       0xa, 0xa, 0xd, 0xa, 0xe, 0xa, 0xb8, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
       0x3, 0xb, 0x5, 0xb, 0xbf, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
       0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0xc7, 0xa, 0xc, 0x3, 0xc, 
       0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0xcf, 
       0xa, 0xd, 0x3, 0xd, 0x7, 0xd, 0xd2, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 
       0xd5, 0xb, 0xd, 0x5, 0xd, 0xd7, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x5, 
       0xe, 0xdb, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xdf, 0xa, 0xe, 
       0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 
       0xf, 0xe7, 0xa, 0xf, 0x3, 0xf, 0x5, 0xf, 0xea, 0xa, 0xf, 0x3, 0xf, 
       0x3, 0xf, 0x5, 0xf, 0xee, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 
       0xf2, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
       0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
       0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
       0x5, 0x14, 0x105, 0xa, 0x14, 0x3, 0x14, 0x5, 0x14, 0x108, 0xa, 0x14, 
       0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
       0x6, 0x14, 0x110, 0xa, 0x14, 0xd, 0x14, 0xe, 0x14, 0x111, 0x3, 0x14, 
       0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 
       0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 
       0x3, 0x18, 0x5, 0x18, 0x122, 0xa, 0x18, 0x3, 0x18, 0x5, 0x18, 0x125, 
       0xa, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
       0x3, 0x18, 0x3, 0x18, 0x6, 0x18, 0x12e, 0xa, 0x18, 0xd, 0x18, 0xe, 
       0x18, 0x12f, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
       0x5, 0x19, 0x137, 0xa, 0x19, 0x3, 0x19, 0x5, 0x19, 0x13a, 0xa, 0x19, 
       0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
       0x3, 0x19, 0x6, 0x19, 0x143, 0xa, 0x19, 0xd, 0x19, 0xe, 0x19, 0x144, 
       0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 
       0x14c, 0xa, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x150, 0xa, 0x1a, 
       0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 
       0x157, 0xa, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x15a, 0xa, 0x1b, 0x3, 0x1b, 
       0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
       0x6, 0x1b, 0x163, 0xa, 0x1b, 0xd, 0x1b, 0xe, 0x1b, 0x164, 0x3, 0x1b, 
       0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x16b, 0xa, 0x1c, 0x3, 
       0x1c, 0x5, 0x1c, 0x16e, 0xa, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
       0x3, 0x1c, 0x3, 0x1c, 0x6, 0x1c, 0x175, 0xa, 0x1c, 0xd, 0x1c, 0xe, 
       0x1c, 0x176, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
       0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
       0x3, 0x1d, 0x6, 0x1d, 0x185, 0xa, 0x1d, 0xd, 0x1d, 0xe, 0x1d, 0x186, 
       0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 
       0x18e, 0xa, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x191, 0xa, 0x1e, 0x3, 0x1e, 
       0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x7, 0x1e, 0x197, 0xa, 0x1e, 0xc, 
       0x1e, 0xe, 0x1e, 0x19a, 0xb, 0x1e, 0x5, 0x1e, 0x19c, 0xa, 0x1e, 0x3, 
       0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x1a3, 
       0xa, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
       0x5, 0x20, 0x1aa, 0xa, 0x20, 0x3, 0x20, 0x5, 0x20, 0x1ad, 0xa, 0x20, 
       0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x5, 0x20, 0x1b3, 0xa, 
       0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x5, 
       0x21, 0x1ba, 0xa, 0x21, 0x3, 0x21, 0x5, 0x21, 0x1bd, 0xa, 0x21, 0x3, 
       0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 
       0x21, 0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0x1c8, 0xa, 0x21, 0x3, 0x21, 
       0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
       0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 0x1d4, 0xa, 0x23, 0x3, 
       0x23, 0x5, 0x23, 0x1d7, 0xa, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 
       0x3, 0x23, 0x7, 0x23, 0x1dd, 0xa, 0x23, 0xc, 0x23, 0xe, 0x23, 0x1e0, 
       0xb, 0x23, 0x5, 0x23, 0x1e2, 0xa, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 
       0x24, 0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 0x1e9, 0xa, 0x24, 0x3, 0x24, 
       0x5, 0x24, 0x1ec, 0xa, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 
       0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x5, 
       0x24, 0x1f7, 0xa, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 
       0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 
       0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 
       0x6, 0x27, 0x209, 0xa, 0x27, 0xd, 0x27, 0xe, 0x27, 0x20a, 0x3, 0x28, 
       0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 0x211, 0xa, 0x28, 0x3, 
       0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 
       0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 
       0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 
       0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 
       0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 
       0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 
       0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 
       0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 
       0x28, 0x3, 0x28, 0x3, 0x28, 0x7, 0x28, 0x246, 0xa, 0x28, 0xc, 0x28, 
       0xe, 0x28, 0x249, 0xb, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
       0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
       0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
       0x29, 0x5, 0x29, 0x25b, 0xa, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 
       0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
       0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 
       0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 
       0x271, 0xa, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 0x274, 0xa, 0x2f, 0x3, 0x2f, 
       0x3, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 
       0x5, 0x30, 0x27d, 0xa, 0x30, 0x3, 0x30, 0x5, 0x30, 0x280, 0xa, 0x30, 
       0x3, 0x30, 0x3, 0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 
       0x3, 0x31, 0x5, 0x31, 0x289, 0xa, 0x31, 0x3, 0x31, 0x5, 0x31, 0x28c, 
       0xa, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 
       0x3, 0x32, 0x3, 0x32, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 
       0x3, 0x33, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 
       0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x36, 
       0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x37, 0x3, 0x37, 
       0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 
       0x5, 0x37, 0x2b1, 0xa, 0x37, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 
       0x38, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x3a, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3c, 0x3, 
       0x3c, 0x3, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x2, 
       0x3, 0x4e, 0x3e, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 
       0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 
       0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 
       0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 
       0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 
       0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 0x2, 0x2, 0x2, 0x312, 0x2, 0x7a, 
       0x3, 0x2, 0x2, 0x2, 0x4, 0x84, 0x3, 0x2, 0x2, 0x2, 0x6, 0x88, 0x3, 
       0x2, 0x2, 0x2, 0x8, 0x96, 0x3, 0x2, 0x2, 0x2, 0xa, 0x98, 0x3, 0x2, 
       0x2, 0x2, 0xc, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xe, 0xa8, 0x3, 0x2, 0x2, 
       0x2, 0x10, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x12, 0xb6, 0x3, 0x2, 0x2, 0x2, 
       0x14, 0xba, 0x3, 0x2, 0x2, 0x2, 0x16, 0xc3, 0x3, 0x2, 0x2, 0x2, 0x18, 
       0xd6, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xda, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xe0, 
       0x3, 0x2, 0x2, 0x2, 0x1e, 0xf5, 0x3, 0x2, 0x2, 0x2, 0x20, 0xf8, 0x3, 
       0x2, 0x2, 0x2, 0x22, 0xfb, 0x3, 0x2, 0x2, 0x2, 0x24, 0xfe, 0x3, 0x2, 
       0x2, 0x2, 0x26, 0x101, 0x3, 0x2, 0x2, 0x2, 0x28, 0x115, 0x3, 0x2, 
       0x2, 0x2, 0x2a, 0x118, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x11b, 0x3, 0x2, 
       0x2, 0x2, 0x2e, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x30, 0x133, 0x3, 0x2, 
       0x2, 0x2, 0x32, 0x148, 0x3, 0x2, 0x2, 0x2, 0x34, 0x153, 0x3, 0x2, 
       0x2, 0x2, 0x36, 0x168, 0x3, 0x2, 0x2, 0x2, 0x38, 0x17a, 0x3, 0x2, 
       0x2, 0x2, 0x3a, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x19f, 0x3, 0x2, 
       0x2, 0x2, 0x3e, 0x1a6, 0x3, 0x2, 0x2, 0x2, 0x40, 0x1b6, 0x3, 0x2, 
       0x2, 0x2, 0x42, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x44, 0x1d0, 0x3, 0x2, 
       0x2, 0x2, 0x46, 0x1e5, 0x3, 0x2, 0x2, 0x2, 0x48, 0x1fa, 0x3, 0x2, 
       0x2, 0x2, 0x4a, 0x1ff, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x208, 0x3, 0x2, 
       0x2, 0x2, 0x4e, 0x210, 0x3, 0x2, 0x2, 0x2, 0x50, 0x25a, 0x3, 0x2, 
       0x2, 0x2, 0x52, 0x25c, 0x3, 0x2, 0x2, 0x2, 0x54, 0x25f, 0x3, 0x2, 
       0x2, 0x2, 0x56, 0x262, 0x3, 0x2, 0x2, 0x2, 0x58, 0x265, 0x3, 0x2, 
       0x2, 0x2, 0x5a, 0x268, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x26b, 0x3, 0x2, 
       0x2, 0x2, 0x5e, 0x277, 0x3, 0x2, 0x2, 0x2, 0x60, 0x283, 0x3, 0x2, 
       0x2, 0x2, 0x62, 0x28f, 0x3, 0x2, 0x2, 0x2, 0x64, 0x294, 0x3, 0x2, 
       0x2, 0x2, 0x66, 0x299, 0x3, 0x2, 0x2, 0x2, 0x68, 0x29e, 0x3, 0x2, 
       0x2, 0x2, 0x6a, 0x2a3, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x2b0, 0x3, 0x2, 
       0x2, 0x2, 0x6e, 0x2b2, 0x3, 0x2, 0x2, 0x2, 0x70, 0x2b6, 0x3, 0x2, 
       0x2, 0x2, 0x72, 0x2ba, 0x3, 0x2, 0x2, 0x2, 0x74, 0x2bd, 0x3, 0x2, 
       0x2, 0x2, 0x76, 0x2c0, 0x3, 0x2, 0x2, 0x2, 0x78, 0x2c3, 0x3, 0x2, 
       0x2, 0x2, 0x7a, 0x7b, 0x7, 0x9, 0x2, 0x2, 0x7b, 0x7c, 0x7, 0x3, 0x2, 
       0x2, 0x7c, 0x7d, 0x7, 0xa, 0x2, 0x2, 0x7d, 0x7e, 0x7, 0xb, 0x2, 0x2, 
       0x7e, 0x3, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x81, 0x7, 0x3, 0x2, 0x2, 0x80, 
       0x82, 0x7, 0xe, 0x2, 0x2, 0x81, 0x80, 0x3, 0x2, 0x2, 0x2, 0x81, 0x82, 
       0x3, 0x2, 0x2, 0x2, 0x82, 0x83, 0x3, 0x2, 0x2, 0x2, 0x83, 0x85, 0x7, 
       0xf, 0x2, 0x2, 0x84, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x85, 0x86, 0x3, 0x2, 
       0x2, 0x2, 0x86, 0x84, 0x3, 0x2, 0x2, 0x2, 0x86, 0x87, 0x3, 0x2, 0x2, 
       0x2, 0x87, 0x5, 0x3, 0x2, 0x2, 0x2, 0x88, 0x89, 0x7, 0x35, 0x2, 0x2, 
       0x89, 0x8a, 0x5, 0x4e, 0x28, 0x2, 0x8a, 0x8c, 0x7, 0xd, 0x2, 0x2, 
       0x8b, 0x8d, 0x7, 0x3e, 0x2, 0x2, 0x8c, 0x8b, 0x3, 0x2, 0x2, 0x2, 
       0x8c, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x8e, 
       0x8f, 0x7, 0xa, 0x2, 0x2, 0x8f, 0x90, 0x5, 0x4e, 0x28, 0x2, 0x90, 
       0x92, 0x7, 0xb, 0x2, 0x2, 0x91, 0x93, 0x5, 0x8, 0x5, 0x2, 0x92, 0x91, 
       0x3, 0x2, 0x2, 0x2, 0x92, 0x93, 0x3, 0x2, 0x2, 0x2, 0x93, 0x7, 0x3, 
       0x2, 0x2, 0x2, 0x94, 0x97, 0x5, 0xc, 0x7, 0x2, 0x95, 0x97, 0x5, 0xa, 
       0x6, 0x2, 0x96, 0x94, 0x3, 0x2, 0x2, 0x2, 0x96, 0x95, 0x3, 0x2, 0x2, 
       0x2, 0x97, 0x9, 0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0x7, 0x36, 0x2, 0x2, 
       0x99, 0x9a, 0x5, 0x4e, 0x28, 0x2, 0x9a, 0x9c, 0x7, 0xd, 0x2, 0x2, 
       0x9b, 0x9d, 0x7, 0x3e, 0x2, 0x2, 0x9c, 0x9b, 0x3, 0x2, 0x2, 0x2, 
       0x9c, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9e, 
       0x9f, 0x7, 0xa, 0x2, 0x2, 0x9f, 0xa0, 0x5, 0x4e, 0x28, 0x2, 0xa0, 
       0xa2, 0x7, 0xb, 0x2, 0x2, 0xa1, 0xa3, 0x5, 0x8, 0x5, 0x2, 0xa2, 0xa1, 
       0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xb, 0x3, 
       0x2, 0x2, 0x2, 0xa4, 0xa5, 0x7, 0x37, 0x2, 0x2, 0xa5, 0xa6, 0x5, 
       0x4e, 0x28, 0x2, 0xa6, 0xa7, 0x7, 0xb, 0x2, 0x2, 0xa7, 0xd, 0x3, 
       0x2, 0x2, 0x2, 0xa8, 0xa9, 0x7, 0x38, 0x2, 0x2, 0xa9, 0xab, 0x5, 
       0x4e, 0x28, 0x2, 0xaa, 0xac, 0x5, 0x10, 0x9, 0x2, 0xab, 0xaa, 0x3, 
       0x2, 0x2, 0x2, 0xab, 0xac, 0x3, 0x2, 0x2, 0x2, 0xac, 0xad, 0x3, 0x2, 
       0x2, 0x2, 0xad, 0xae, 0x7, 0xa, 0x2, 0x2, 0xae, 0xaf, 0x5, 0x12, 
       0xa, 0x2, 0xaf, 0xb0, 0x7, 0xb, 0x2, 0x2, 0xb0, 0xf, 0x3, 0x2, 0x2, 
       0x2, 0xb1, 0xb2, 0x7, 0x3b, 0x2, 0x2, 0xb2, 0xb3, 0x7, 0x4, 0x2, 
       0x2, 0xb3, 0x11, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb7, 0x5, 0x14, 0xb, 
       0x2, 0xb5, 0xb7, 0x5, 0x16, 0xc, 0x2, 0xb6, 0xb4, 0x3, 0x2, 0x2, 
       0x2, 0xb6, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0x3, 0x2, 0x2, 0x2, 
       0xb8, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xb9, 
       0x13, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbb, 0x7, 0x39, 0x2, 0x2, 0xbb, 
       0xbc, 0x5, 0x6c, 0x37, 0x2, 0xbc, 0xbe, 0x7, 0x21, 0x2, 0x2, 0xbd, 
       0xbf, 0x7, 0xf, 0x2, 0x2, 0xbe, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbf, 
       0x3, 0x2, 0x2, 0x2, 0xbf, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc1, 0x5, 
       0x4e, 0x28, 0x2, 0xc1, 0xc2, 0x7, 0xf, 0x2, 0x2, 0xc2, 0x15, 0x3, 
       0x2, 0x2, 0x2, 0xc3, 0xc4, 0x7, 0x3a, 0x2, 0x2, 0xc4, 0xc6, 0x7, 
       0x21, 0x2, 0x2, 0xc5, 0xc7, 0x7, 0xf, 0x2, 0x2, 0xc6, 0xc5, 0x3, 
       0x2, 0x2, 0x2, 0xc6, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 0x3, 0x2, 
       0x2, 0x2, 0xc8, 0xc9, 0x5, 0x4e, 0x28, 0x2, 0xc9, 0xca, 0x7, 0xf, 
       0x2, 0x2, 0xca, 0x17, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xd3, 0x5, 0x1a, 
       0xe, 0x2, 0xcc, 0xce, 0x7, 0xe, 0x2, 0x2, 0xcd, 0xcf, 0x7, 0x3d, 
       0x2, 0x2, 0xce, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x3, 0x2, 0x2, 
       0x2, 0xcf, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xd2, 0x5, 0x1a, 0xe, 
       0x2, 0xd1, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd5, 0x3, 0x2, 0x2, 0x2, 
       0xd3, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd4, 
       0xd7, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xcb, 
       0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xd7, 0x19, 0x3, 
       0x2, 0x2, 0x2, 0xd8, 0xd9, 0x7, 0x3, 0x2, 0x2, 0xd9, 0xdb, 0x7, 0x23, 
       0x2, 0x2, 0xda, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 0x3, 0x2, 0x2, 
       0x2, 0xdb, 0xde, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdf, 0x5, 0x4e, 0x28, 
       0x2, 0xdd, 0xdf, 0x7, 0x3, 0x2, 0x2, 0xde, 0xdc, 0x3, 0x2, 0x2, 0x2, 
       0xde, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdf, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xe0, 
       0xe1, 0x7, 0x3f, 0x2, 0x2, 0xe1, 0xe2, 0x7, 0x3, 0x2, 0x2, 0xe2, 
       0xe3, 0x7, 0xc, 0x2, 0x2, 0xe3, 0xe4, 0x5, 0x18, 0xd, 0x2, 0xe4, 
       0xe6, 0x7, 0xd, 0x2, 0x2, 0xe5, 0xe7, 0x7, 0x21, 0x2, 0x2, 0xe6, 
       0xe5, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe9, 
       0x3, 0x2, 0x2, 0x2, 0xe8, 0xea, 0x7, 0x3e, 0x2, 0x2, 0xe9, 0xe8, 
       0x3, 0x2, 0x2, 0x2, 0xe9, 0xea, 0x3, 0x2, 0x2, 0x2, 0xea, 0xeb, 0x3, 
       0x2, 0x2, 0x2, 0xeb, 0xed, 0x7, 0xa, 0x2, 0x2, 0xec, 0xee, 0x7, 0x3e, 
       0x2, 0x2, 0xed, 0xec, 0x3, 0x2, 0x2, 0x2, 0xed, 0xee, 0x3, 0x2, 0x2, 
       0x2, 0xee, 0xef, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf1, 0x5, 0x4e, 0x28, 
       0x2, 0xf0, 0xf2, 0x7, 0x3e, 0x2, 0x2, 0xf1, 0xf0, 0x3, 0x2, 0x2, 
       0x2, 0xf1, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf3, 0x3, 0x2, 0x2, 0x2, 
       0xf3, 0xf4, 0x7, 0xb, 0x2, 0x2, 0xf4, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xf5, 
       0xf6, 0x7, 0x40, 0x2, 0x2, 0xf6, 0xf7, 0x5, 0x4e, 0x28, 0x2, 0xf7, 
       0x1f, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf9, 0x7, 0x41, 0x2, 0x2, 0xf9, 
       0xfa, 0x7, 0x3, 0x2, 0x2, 0xfa, 0x21, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xfc, 
       0x7, 0x42, 0x2, 0x2, 0xfc, 0xfd, 0x7, 0x8, 0x2, 0x2, 0xfd, 0x23, 
       0x3, 0x2, 0x2, 0x2, 0xfe, 0xff, 0x7, 0x43, 0x2, 0x2, 0xff, 0x100, 
       0x7, 0x44, 0x2, 0x2, 0x100, 0x25, 0x3, 0x2, 0x2, 0x2, 0x101, 0x102, 
       0x7, 0x45, 0x2, 0x2, 0x102, 0x104, 0x7, 0x3, 0x2, 0x2, 0x103, 0x105, 
       0x7, 0x21, 0x2, 0x2, 0x104, 0x103, 0x3, 0x2, 0x2, 0x2, 0x104, 0x105, 
       0x3, 0x2, 0x2, 0x2, 0x105, 0x107, 0x3, 0x2, 0x2, 0x2, 0x106, 0x108, 
       0x7, 0x3e, 0x2, 0x2, 0x107, 0x106, 0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 
       0x3, 0x2, 0x2, 0x2, 0x108, 0x109, 0x3, 0x2, 0x2, 0x2, 0x109, 0x10f, 
       0x7, 0xa, 0x2, 0x2, 0x10a, 0x110, 0x5, 0x20, 0x11, 0x2, 0x10b, 0x110, 
       0x5, 0x22, 0x12, 0x2, 0x10c, 0x110, 0x5, 0x24, 0x13, 0x2, 0x10d, 
       0x110, 0x5, 0x1e, 0x10, 0x2, 0x10e, 0x110, 0x7, 0x3e, 0x2, 0x2, 0x10f, 
       0x10a, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x10f, 
       0x10c, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x10f, 
       0x10e, 0x3, 0x2, 0x2, 0x2, 0x110, 0x111, 0x3, 0x2, 0x2, 0x2, 0x111, 
       0x10f, 0x3, 0x2, 0x2, 0x2, 0x111, 0x112, 0x3, 0x2, 0x2, 0x2, 0x112, 
       0x113, 0x3, 0x2, 0x2, 0x2, 0x113, 0x114, 0x7, 0xb, 0x2, 0x2, 0x114, 
       0x27, 0x3, 0x2, 0x2, 0x2, 0x115, 0x116, 0x7, 0x46, 0x2, 0x2, 0x116, 
       0x117, 0x5, 0x4e, 0x28, 0x2, 0x117, 0x29, 0x3, 0x2, 0x2, 0x2, 0x118, 
       0x119, 0x7, 0x47, 0x2, 0x2, 0x119, 0x11a, 0x5, 0x4e, 0x28, 0x2, 0x11a, 
       0x2b, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x11c, 0x7, 0x48, 0x2, 0x2, 0x11c, 
       0x11d, 0x7, 0x3, 0x2, 0x2, 0x11d, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x11e, 
       0x11f, 0x7, 0x4b, 0x2, 0x2, 0x11f, 0x121, 0x7, 0x3, 0x2, 0x2, 0x120, 
       0x122, 0x7, 0x21, 0x2, 0x2, 0x121, 0x120, 0x3, 0x2, 0x2, 0x2, 0x121, 
       0x122, 0x3, 0x2, 0x2, 0x2, 0x122, 0x124, 0x3, 0x2, 0x2, 0x2, 0x123, 
       0x125, 0x7, 0x3e, 0x2, 0x2, 0x124, 0x123, 0x3, 0x2, 0x2, 0x2, 0x124, 
       0x125, 0x3, 0x2, 0x2, 0x2, 0x125, 0x126, 0x3, 0x2, 0x2, 0x2, 0x126, 
       0x12d, 0x7, 0xa, 0x2, 0x2, 0x127, 0x12e, 0x5, 0x28, 0x15, 0x2, 0x128, 
       0x12e, 0x5, 0x2a, 0x16, 0x2, 0x129, 0x12e, 0x5, 0x2c, 0x17, 0x2, 
       0x12a, 0x12e, 0x7, 0x4a, 0x2, 0x2, 0x12b, 0x12e, 0x7, 0x49, 0x2, 
       0x2, 0x12c, 0x12e, 0x7, 0x3e, 0x2, 0x2, 0x12d, 0x127, 0x3, 0x2, 0x2, 
       0x2, 0x12d, 0x128, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x129, 0x3, 0x2, 0x2, 
       0x2, 0x12d, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x12b, 0x3, 0x2, 0x2, 
       0x2, 0x12d, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x12f, 0x3, 0x2, 0x2, 
       0x2, 0x12f, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x130, 0x3, 0x2, 0x2, 
       0x2, 0x130, 0x131, 0x3, 0x2, 0x2, 0x2, 0x131, 0x132, 0x7, 0xb, 0x2, 
       0x2, 0x132, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x133, 0x134, 0x7, 0x4d, 0x2, 
       0x2, 0x134, 0x136, 0x7, 0x3, 0x2, 0x2, 0x135, 0x137, 0x7, 0x21, 0x2, 
       0x2, 0x136, 0x135, 0x3, 0x2, 0x2, 0x2, 0x136, 0x137, 0x3, 0x2, 0x2, 
       0x2, 0x137, 0x139, 0x3, 0x2, 0x2, 0x2, 0x138, 0x13a, 0x7, 0x3e, 0x2, 
       0x2, 0x139, 0x138, 0x3, 0x2, 0x2, 0x2, 0x139, 0x13a, 0x3, 0x2, 0x2, 
       0x2, 0x13a, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x142, 0x7, 0xa, 0x2, 
       0x2, 0x13c, 0x143, 0x5, 0x22, 0x12, 0x2, 0x13d, 0x143, 0x5, 0x2a, 
       0x16, 0x2, 0x13e, 0x143, 0x7, 0x4c, 0x2, 0x2, 0x13f, 0x143, 0x5, 
       0x2a, 0x16, 0x2, 0x140, 0x143, 0x5, 0x28, 0x15, 0x2, 0x141, 0x143, 
       0x7, 0x3e, 0x2, 0x2, 0x142, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x142, 0x13d, 
       0x3, 0x2, 0x2, 0x2, 0x142, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x142, 0x13f, 
       0x3, 0x2, 0x2, 0x2, 0x142, 0x140, 0x3, 0x2, 0x2, 0x2, 0x142, 0x141, 
       0x3, 0x2, 0x2, 0x2, 0x143, 0x144, 0x3, 0x2, 0x2, 0x2, 0x144, 0x142, 
       0x3, 0x2, 0x2, 0x2, 0x144, 0x145, 0x3, 0x2, 0x2, 0x2, 0x145, 0x146, 
       0x3, 0x2, 0x2, 0x2, 0x146, 0x147, 0x7, 0xb, 0x2, 0x2, 0x147, 0x31, 
       0x3, 0x2, 0x2, 0x2, 0x148, 0x149, 0x7, 0x4e, 0x2, 0x2, 0x149, 0x14b, 
       0x7, 0x3, 0x2, 0x2, 0x14a, 0x14c, 0x7, 0x3d, 0x2, 0x2, 0x14b, 0x14a, 
       0x3, 0x2, 0x2, 0x2, 0x14b, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x14d, 
       0x3, 0x2, 0x2, 0x2, 0x14d, 0x14f, 0x7, 0x21, 0x2, 0x2, 0x14e, 0x150, 
       0x7, 0x3e, 0x2, 0x2, 0x14f, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x150, 
       0x3, 0x2, 0x2, 0x2, 0x150, 0x151, 0x3, 0x2, 0x2, 0x2, 0x151, 0x152, 
       0x5, 0x4e, 0x28, 0x2, 0x152, 0x33, 0x3, 0x2, 0x2, 0x2, 0x153, 0x154, 
       0x7, 0x4f, 0x2, 0x2, 0x154, 0x156, 0x7, 0x3, 0x2, 0x2, 0x155, 0x157, 
       0x7, 0x21, 0x2, 0x2, 0x156, 0x155, 0x3, 0x2, 0x2, 0x2, 0x156, 0x157, 
       0x3, 0x2, 0x2, 0x2, 0x157, 0x159, 0x3, 0x2, 0x2, 0x2, 0x158, 0x15a, 
       0x7, 0x3e, 0x2, 0x2, 0x159, 0x158, 0x3, 0x2, 0x2, 0x2, 0x159, 0x15a, 
       0x3, 0x2, 0x2, 0x2, 0x15a, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x162, 
       0x7, 0xa, 0x2, 0x2, 0x15c, 0x163, 0x5, 0x22, 0x12, 0x2, 0x15d, 0x163, 
       0x5, 0x30, 0x19, 0x2, 0x15e, 0x163, 0x5, 0x2e, 0x18, 0x2, 0x15f, 
       0x163, 0x5, 0x32, 0x1a, 0x2, 0x160, 0x163, 0x5, 0x28, 0x15, 0x2, 
       0x161, 0x163, 0x7, 0x3e, 0x2, 0x2, 0x162, 0x15c, 0x3, 0x2, 0x2, 0x2, 
       0x162, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x162, 0x15e, 0x3, 0x2, 0x2, 0x2, 
       0x162, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x162, 0x160, 0x3, 0x2, 0x2, 0x2, 
       0x162, 0x161, 0x3, 0x2, 0x2, 0x2, 0x163, 0x164, 0x3, 0x2, 0x2, 0x2, 
       0x164, 0x162, 0x3, 0x2, 0x2, 0x2, 0x164, 0x165, 0x3, 0x2, 0x2, 0x2, 
       0x165, 0x166, 0x3, 0x2, 0x2, 0x2, 0x166, 0x167, 0x7, 0xb, 0x2, 0x2, 
       0x167, 0x35, 0x3, 0x2, 0x2, 0x2, 0x168, 0x16a, 0x7, 0x50, 0x2, 0x2, 
       0x169, 0x16b, 0x7, 0x21, 0x2, 0x2, 0x16a, 0x169, 0x3, 0x2, 0x2, 0x2, 
       0x16a, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x16d, 0x3, 0x2, 0x2, 0x2, 
       0x16c, 0x16e, 0x7, 0x3e, 0x2, 0x2, 0x16d, 0x16c, 0x3, 0x2, 0x2, 0x2, 
       0x16d, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x16f, 0x3, 0x2, 0x2, 0x2, 
       0x16f, 0x174, 0x7, 0xa, 0x2, 0x2, 0x170, 0x175, 0x5, 0x34, 0x1b, 
       0x2, 0x171, 0x175, 0x5, 0x26, 0x14, 0x2, 0x172, 0x175, 0x5, 0x1c, 
       0xf, 0x2, 0x173, 0x175, 0x7, 0x3e, 0x2, 0x2, 0x174, 0x170, 0x3, 0x2, 
       0x2, 0x2, 0x174, 0x171, 0x3, 0x2, 0x2, 0x2, 0x174, 0x172, 0x3, 0x2, 
       0x2, 0x2, 0x174, 0x173, 0x3, 0x2, 0x2, 0x2, 0x175, 0x176, 0x3, 0x2, 
       0x2, 0x2, 0x176, 0x174, 0x3, 0x2, 0x2, 0x2, 0x176, 0x177, 0x3, 0x2, 
       0x2, 0x2, 0x177, 0x178, 0x3, 0x2, 0x2, 0x2, 0x178, 0x179, 0x7, 0xb, 
       0x2, 0x2, 0x179, 0x37, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x184, 0x7, 0x51, 
       0x2, 0x2, 0x17b, 0x185, 0x5, 0x3a, 0x1e, 0x2, 0x17c, 0x185, 0x5, 
       0x40, 0x21, 0x2, 0x17d, 0x185, 0x5, 0x3e, 0x20, 0x2, 0x17e, 0x185, 
       0x5, 0x46, 0x24, 0x2, 0x17f, 0x185, 0x5, 0x44, 0x23, 0x2, 0x180, 
       0x185, 0x5, 0x42, 0x22, 0x2, 0x181, 0x185, 0x5, 0x48, 0x25, 0x2, 
       0x182, 0x185, 0x5, 0x3c, 0x1f, 0x2, 0x183, 0x185, 0x7, 0x3e, 0x2, 
       0x2, 0x184, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x184, 0x17c, 0x3, 0x2, 0x2, 
       0x2, 0x184, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x184, 0x17e, 0x3, 0x2, 0x2, 
       0x2, 0x184, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x184, 0x180, 0x3, 0x2, 0x2, 
       0x2, 0x184, 0x181, 0x3, 0x2, 0x2, 0x2, 0x184, 0x182, 0x3, 0x2, 0x2, 
       0x2, 0x184, 0x183, 0x3, 0x2, 0x2, 0x2, 0x185, 0x186, 0x3, 0x2, 0x2, 
       0x2, 0x186, 0x184, 0x3, 0x2, 0x2, 0x2, 0x186, 0x187, 0x3, 0x2, 0x2, 
       0x2, 0x187, 0x188, 0x3, 0x2, 0x2, 0x2, 0x188, 0x189, 0x7, 0xb, 0x2, 
       0x2, 0x189, 0x39, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x18b, 0x7, 0x52, 0x2, 
       0x2, 0x18b, 0x18d, 0x7, 0x3, 0x2, 0x2, 0x18c, 0x18e, 0x7, 0x21, 0x2, 
       0x2, 0x18d, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x18d, 0x18e, 0x3, 0x2, 0x2, 
       0x2, 0x18e, 0x190, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x191, 0x7, 0x3e, 0x2, 
       0x2, 0x190, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x190, 0x191, 0x3, 0x2, 0x2, 
       0x2, 0x191, 0x192, 0x3, 0x2, 0x2, 0x2, 0x192, 0x19b, 0x7, 0xa, 0x2, 
       0x2, 0x193, 0x198, 0x7, 0x8, 0x2, 0x2, 0x194, 0x195, 0x7, 0x5b, 0x2, 
       0x2, 0x195, 0x197, 0x7, 0x8, 0x2, 0x2, 0x196, 0x194, 0x3, 0x2, 0x2, 
       0x2, 0x197, 0x19a, 0x3, 0x2, 0x2, 0x2, 0x198, 0x196, 0x3, 0x2, 0x2, 
       0x2, 0x198, 0x199, 0x3, 0x2, 0x2, 0x2, 0x199, 0x19c, 0x3, 0x2, 0x2, 
       0x2, 0x19a, 0x198, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x193, 0x3, 0x2, 0x2, 
       0x2, 0x19b, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x19c, 0x19d, 0x3, 0x2, 0x2, 
       0x2, 0x19d, 0x19e, 0x7, 0xb, 0x2, 0x2, 0x19e, 0x3b, 0x3, 0x2, 0x2, 
       0x2, 0x19f, 0x1a0, 0x7, 0x53, 0x2, 0x2, 0x1a0, 0x1a2, 0x7, 0x3, 0x2, 
       0x2, 0x1a1, 0x1a3, 0x7, 0x21, 0x2, 0x2, 0x1a2, 0x1a1, 0x3, 0x2, 0x2, 
       0x2, 0x1a2, 0x1a3, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1a4, 0x3, 0x2, 0x2, 
       0x2, 0x1a4, 0x1a5, 0x7, 0x8, 0x2, 0x2, 0x1a5, 0x3d, 0x3, 0x2, 0x2, 
       0x2, 0x1a6, 0x1a7, 0x7, 0x54, 0x2, 0x2, 0x1a7, 0x1a9, 0x7, 0x3, 0x2, 
       0x2, 0x1a8, 0x1aa, 0x7, 0x21, 0x2, 0x2, 0x1a9, 0x1a8, 0x3, 0x2, 0x2, 
       0x2, 0x1a9, 0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0x1ac, 0x3, 0x2, 0x2, 
       0x2, 0x1ab, 0x1ad, 0x7, 0x3e, 0x2, 0x2, 0x1ac, 0x1ab, 0x3, 0x2, 0x2, 
       0x2, 0x1ac, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1ad, 0x1ae, 0x3, 0x2, 0x2, 
       0x2, 0x1ae, 0x1b2, 0x7, 0xa, 0x2, 0x2, 0x1af, 0x1b0, 0x7, 0x7, 0x2, 
       0x2, 0x1b0, 0x1b1, 0x7, 0x5b, 0x2, 0x2, 0x1b1, 0x1b3, 0x7, 0x7, 0x2, 
       0x2, 0x1b2, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0x1b3, 0x3, 0x2, 0x2, 
       0x2, 0x1b3, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x1b5, 0x7, 0xb, 0x2, 
       0x2, 0x1b5, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0x1b7, 0x7, 0x54, 0x2, 
       0x2, 0x1b7, 0x1b9, 0x7, 0x3, 0x2, 0x2, 0x1b8, 0x1ba, 0x7, 0x21, 0x2, 
       0x2, 0x1b9, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x1b9, 0x1ba, 0x3, 0x2, 0x2, 
       0x2, 0x1ba, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1bd, 0x7, 0x3e, 0x2, 
       0x2, 0x1bc, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1bc, 0x1bd, 0x3, 0x2, 0x2, 
       0x2, 0x1bd, 0x1be, 0x3, 0x2, 0x2, 0x2, 0x1be, 0x1bf, 0x7, 0xa, 0x2, 
       0x2, 0x1bf, 0x1c0, 0x7, 0x59, 0x2, 0x2, 0x1c0, 0x1c1, 0x7, 0x21, 
       0x2, 0x2, 0x1c1, 0x1c2, 0x7, 0x7, 0x2, 0x2, 0x1c2, 0x1c3, 0x7, 0x5b, 
       0x2, 0x2, 0x1c3, 0x1c4, 0x7, 0x5a, 0x2, 0x2, 0x1c4, 0x1c5, 0x7, 0x21, 
       0x2, 0x2, 0x1c5, 0x1c7, 0x7, 0x7, 0x2, 0x2, 0x1c6, 0x1c8, 0x7, 0x3e, 
       0x2, 0x2, 0x1c7, 0x1c6, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1c8, 0x3, 0x2, 
       0x2, 0x2, 0x1c8, 0x1c9, 0x3, 0x2, 0x2, 0x2, 0x1c9, 0x1ca, 0x7, 0xb, 
       0x2, 0x2, 0x1ca, 0x41, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1cc, 0x7, 0x55, 
       0x2, 0x2, 0x1cc, 0x1cd, 0x7, 0x3, 0x2, 0x2, 0x1cd, 0x1ce, 0x7, 0x21, 
       0x2, 0x2, 0x1ce, 0x1cf, 0x7, 0x7, 0x2, 0x2, 0x1cf, 0x43, 0x3, 0x2, 
       0x2, 0x2, 0x1d0, 0x1d1, 0x7, 0x56, 0x2, 0x2, 0x1d1, 0x1d3, 0x7, 0x3, 
       0x2, 0x2, 0x1d2, 0x1d4, 0x7, 0x21, 0x2, 0x2, 0x1d3, 0x1d2, 0x3, 0x2, 
       0x2, 0x2, 0x1d3, 0x1d4, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1d6, 0x3, 0x2, 
       0x2, 0x2, 0x1d5, 0x1d7, 0x7, 0x3e, 0x2, 0x2, 0x1d6, 0x1d5, 0x3, 0x2, 
       0x2, 0x2, 0x1d6, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1d8, 0x3, 0x2, 
       0x2, 0x2, 0x1d8, 0x1e1, 0x7, 0xa, 0x2, 0x2, 0x1d9, 0x1de, 0x7, 0x6, 
       0x2, 0x2, 0x1da, 0x1db, 0x7, 0x5b, 0x2, 0x2, 0x1db, 0x1dd, 0x7, 0x6, 
       0x2, 0x2, 0x1dc, 0x1da, 0x3, 0x2, 0x2, 0x2, 0x1dd, 0x1e0, 0x3, 0x2, 
       0x2, 0x2, 0x1de, 0x1dc, 0x3, 0x2, 0x2, 0x2, 0x1de, 0x1df, 0x3, 0x2, 
       0x2, 0x2, 0x1df, 0x1e2, 0x3, 0x2, 0x2, 0x2, 0x1e0, 0x1de, 0x3, 0x2, 
       0x2, 0x2, 0x1e1, 0x1d9, 0x3, 0x2, 0x2, 0x2, 0x1e1, 0x1e2, 0x3, 0x2, 
       0x2, 0x2, 0x1e2, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1e4, 0x7, 0xb, 
       0x2, 0x2, 0x1e4, 0x45, 0x3, 0x2, 0x2, 0x2, 0x1e5, 0x1e6, 0x7, 0x56, 
       0x2, 0x2, 0x1e6, 0x1e8, 0x7, 0x3, 0x2, 0x2, 0x1e7, 0x1e9, 0x7, 0x21, 
       0x2, 0x2, 0x1e8, 0x1e7, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1e9, 0x3, 0x2, 
       0x2, 0x2, 0x1e9, 0x1eb, 0x3, 0x2, 0x2, 0x2, 0x1ea, 0x1ec, 0x7, 0x3e, 
       0x2, 0x2, 0x1eb, 0x1ea, 0x3, 0x2, 0x2, 0x2, 0x1eb, 0x1ec, 0x3, 0x2, 
       0x2, 0x2, 0x1ec, 0x1ed, 0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1ee, 0x7, 0xa, 
       0x2, 0x2, 0x1ee, 0x1ef, 0x7, 0x59, 0x2, 0x2, 0x1ef, 0x1f0, 0x7, 0x21, 
       0x2, 0x2, 0x1f0, 0x1f1, 0x7, 0x6, 0x2, 0x2, 0x1f1, 0x1f2, 0x7, 0x5b, 
       0x2, 0x2, 0x1f2, 0x1f3, 0x7, 0x5a, 0x2, 0x2, 0x1f3, 0x1f4, 0x7, 0x21, 
       0x2, 0x2, 0x1f4, 0x1f6, 0x7, 0x6, 0x2, 0x2, 0x1f5, 0x1f7, 0x7, 0x3e, 
       0x2, 0x2, 0x1f6, 0x1f5, 0x3, 0x2, 0x2, 0x2, 0x1f6, 0x1f7, 0x3, 0x2, 
       0x2, 0x2, 0x1f7, 0x1f8, 0x3, 0x2, 0x2, 0x2, 0x1f8, 0x1f9, 0x7, 0xb, 
       0x2, 0x2, 0x1f9, 0x47, 0x3, 0x2, 0x2, 0x2, 0x1fa, 0x1fb, 0x7, 0x57, 
       0x2, 0x2, 0x1fb, 0x1fc, 0x7, 0x3, 0x2, 0x2, 0x1fc, 0x1fd, 0x7, 0x21, 
       0x2, 0x2, 0x1fd, 0x1fe, 0x7, 0x6, 0x2, 0x2, 0x1fe, 0x49, 0x3, 0x2, 
       0x2, 0x2, 0x1ff, 0x200, 0x7, 0x58, 0x2, 0x2, 0x200, 0x201, 0x7, 0x3, 
       0x2, 0x2, 0x201, 0x202, 0x7, 0x21, 0x2, 0x2, 0x202, 0x203, 0x7, 0x4, 
       0x2, 0x2, 0x203, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x204, 0x209, 0x5, 0x36, 
       0x1c, 0x2, 0x205, 0x209, 0x5, 0x38, 0x1d, 0x2, 0x206, 0x209, 0x5, 
       0x2, 0x2, 0x2, 0x207, 0x209, 0x7, 0x3e, 0x2, 0x2, 0x208, 0x204, 0x3, 
       0x2, 0x2, 0x2, 0x208, 0x205, 0x3, 0x2, 0x2, 0x2, 0x208, 0x206, 0x3, 
       0x2, 0x2, 0x2, 0x208, 0x207, 0x3, 0x2, 0x2, 0x2, 0x209, 0x20a, 0x3, 
       0x2, 0x2, 0x2, 0x20a, 0x208, 0x3, 0x2, 0x2, 0x2, 0x20a, 0x20b, 0x3, 
       0x2, 0x2, 0x2, 0x20b, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x20c, 0x20d, 0x8, 
       0x28, 0x1, 0x2, 0x20d, 0x211, 0x5, 0x50, 0x29, 0x2, 0x20e, 0x20f, 
       0x7, 0x12, 0x2, 0x2, 0x20f, 0x211, 0x5, 0x6c, 0x37, 0x2, 0x210, 0x20c, 
       0x3, 0x2, 0x2, 0x2, 0x210, 0x20e, 0x3, 0x2, 0x2, 0x2, 0x211, 0x247, 
       0x3, 0x2, 0x2, 0x2, 0x212, 0x213, 0xc, 0x12, 0x2, 0x2, 0x213, 0x214, 
       0x7, 0x1b, 0x2, 0x2, 0x214, 0x246, 0x5, 0x4e, 0x28, 0x13, 0x215, 
       0x216, 0xc, 0x11, 0x2, 0x2, 0x216, 0x217, 0x7, 0x1c, 0x2, 0x2, 0x217, 
       0x246, 0x5, 0x4e, 0x28, 0x12, 0x218, 0x219, 0xc, 0x10, 0x2, 0x2, 
       0x219, 0x21a, 0x7, 0x1d, 0x2, 0x2, 0x21a, 0x246, 0x5, 0x4e, 0x28, 
       0x11, 0x21b, 0x21c, 0xc, 0xf, 0x2, 0x2, 0x21c, 0x21d, 0x7, 0x19, 
       0x2, 0x2, 0x21d, 0x246, 0x5, 0x4e, 0x28, 0x10, 0x21e, 0x21f, 0xc, 
       0xe, 0x2, 0x2, 0x21f, 0x220, 0x7, 0x1a, 0x2, 0x2, 0x220, 0x246, 0x5, 
       0x4e, 0x28, 0xf, 0x221, 0x222, 0xc, 0xd, 0x2, 0x2, 0x222, 0x223, 
       0x7, 0x1f, 0x2, 0x2, 0x223, 0x246, 0x5, 0x4e, 0x28, 0xe, 0x224, 0x225, 
       0xc, 0xc, 0x2, 0x2, 0x225, 0x226, 0x7, 0x1e, 0x2, 0x2, 0x226, 0x246, 
       0x5, 0x4e, 0x28, 0xd, 0x227, 0x228, 0xc, 0xb, 0x2, 0x2, 0x228, 0x229, 
       0x7, 0x17, 0x2, 0x2, 0x229, 0x246, 0x5, 0x4e, 0x28, 0xc, 0x22a, 0x22b, 
       0xc, 0xa, 0x2, 0x2, 0x22b, 0x22c, 0x7, 0x18, 0x2, 0x2, 0x22c, 0x246, 
       0x5, 0x4e, 0x28, 0xb, 0x22d, 0x22e, 0xc, 0x9, 0x2, 0x2, 0x22e, 0x22f, 
       0x7, 0x15, 0x2, 0x2, 0x22f, 0x246, 0x5, 0x4e, 0x28, 0xa, 0x230, 0x231, 
       0xc, 0x8, 0x2, 0x2, 0x231, 0x232, 0x7, 0x16, 0x2, 0x2, 0x232, 0x246, 
       0x5, 0x4e, 0x28, 0x9, 0x233, 0x234, 0xc, 0x7, 0x2, 0x2, 0x234, 0x235, 
       0x7, 0x13, 0x2, 0x2, 0x235, 0x246, 0x5, 0x4e, 0x28, 0x8, 0x236, 0x237, 
       0xc, 0x6, 0x2, 0x2, 0x237, 0x238, 0x7, 0x14, 0x2, 0x2, 0x238, 0x246, 
       0x5, 0x4e, 0x28, 0x7, 0x239, 0x23a, 0xc, 0x5, 0x2, 0x2, 0x23a, 0x23b, 
       0x7, 0x10, 0x2, 0x2, 0x23b, 0x246, 0x5, 0x4e, 0x28, 0x6, 0x23c, 0x23d, 
       0xc, 0x4, 0x2, 0x2, 0x23d, 0x23e, 0x7, 0x11, 0x2, 0x2, 0x23e, 0x246, 
       0x5, 0x4e, 0x28, 0x5, 0x23f, 0x240, 0xc, 0x3, 0x2, 0x2, 0x240, 0x241, 
       0x7, 0x20, 0x2, 0x2, 0x241, 0x242, 0x5, 0x4e, 0x28, 0x2, 0x242, 0x243, 
       0x7, 0x21, 0x2, 0x2, 0x243, 0x244, 0x5, 0x4e, 0x28, 0x3, 0x244, 0x246, 
       0x3, 0x2, 0x2, 0x2, 0x245, 0x212, 0x3, 0x2, 0x2, 0x2, 0x245, 0x215, 
       0x3, 0x2, 0x2, 0x2, 0x245, 0x218, 0x3, 0x2, 0x2, 0x2, 0x245, 0x21b, 
       0x3, 0x2, 0x2, 0x2, 0x245, 0x21e, 0x3, 0x2, 0x2, 0x2, 0x245, 0x221, 
       0x3, 0x2, 0x2, 0x2, 0x245, 0x224, 0x3, 0x2, 0x2, 0x2, 0x245, 0x227, 
       0x3, 0x2, 0x2, 0x2, 0x245, 0x22a, 0x3, 0x2, 0x2, 0x2, 0x245, 0x22d, 
       0x3, 0x2, 0x2, 0x2, 0x245, 0x230, 0x3, 0x2, 0x2, 0x2, 0x245, 0x233, 
       0x3, 0x2, 0x2, 0x2, 0x245, 0x236, 0x3, 0x2, 0x2, 0x2, 0x245, 0x239, 
       0x3, 0x2, 0x2, 0x2, 0x245, 0x23c, 0x3, 0x2, 0x2, 0x2, 0x245, 0x23f, 
       0x3, 0x2, 0x2, 0x2, 0x246, 0x249, 0x3, 0x2, 0x2, 0x2, 0x247, 0x245, 
       0x3, 0x2, 0x2, 0x2, 0x247, 0x248, 0x3, 0x2, 0x2, 0x2, 0x248, 0x4f, 
       0x3, 0x2, 0x2, 0x2, 0x249, 0x247, 0x3, 0x2, 0x2, 0x2, 0x24a, 0x25b, 
       0x5, 0x52, 0x2a, 0x2, 0x24b, 0x25b, 0x5, 0x54, 0x2b, 0x2, 0x24c, 
       0x25b, 0x5, 0x56, 0x2c, 0x2, 0x24d, 0x25b, 0x5, 0x58, 0x2d, 0x2, 
       0x24e, 0x25b, 0x5, 0x5a, 0x2e, 0x2, 0x24f, 0x25b, 0x5, 0x5c, 0x2f, 
       0x2, 0x250, 0x25b, 0x5, 0x5e, 0x30, 0x2, 0x251, 0x25b, 0x5, 0x60, 
       0x31, 0x2, 0x252, 0x25b, 0x5, 0x62, 0x32, 0x2, 0x253, 0x25b, 0x5, 
       0x64, 0x33, 0x2, 0x254, 0x25b, 0x5, 0x66, 0x34, 0x2, 0x255, 0x25b, 
       0x5, 0x68, 0x35, 0x2, 0x256, 0x25b, 0x5, 0x6a, 0x36, 0x2, 0x257, 
       0x25b, 0x5, 0xe, 0x8, 0x2, 0x258, 0x25b, 0x5, 0x6, 0x4, 0x2, 0x259, 
       0x25b, 0x5, 0x6c, 0x37, 0x2, 0x25a, 0x24a, 0x3, 0x2, 0x2, 0x2, 0x25a, 
       0x24b, 0x3, 0x2, 0x2, 0x2, 0x25a, 0x24c, 0x3, 0x2, 0x2, 0x2, 0x25a, 
       0x24d, 0x3, 0x2, 0x2, 0x2, 0x25a, 0x24e, 0x3, 0x2, 0x2, 0x2, 0x25a, 
       0x24f, 0x3, 0x2, 0x2, 0x2, 0x25a, 0x250, 0x3, 0x2, 0x2, 0x2, 0x25a, 
       0x251, 0x3, 0x2, 0x2, 0x2, 0x25a, 0x252, 0x3, 0x2, 0x2, 0x2, 0x25a, 
       0x253, 0x3, 0x2, 0x2, 0x2, 0x25a, 0x254, 0x3, 0x2, 0x2, 0x2, 0x25a, 
       0x255, 0x3, 0x2, 0x2, 0x2, 0x25a, 0x256, 0x3, 0x2, 0x2, 0x2, 0x25a, 
       0x257, 0x3, 0x2, 0x2, 0x2, 0x25a, 0x258, 0x3, 0x2, 0x2, 0x2, 0x25a, 
       0x259, 0x3, 0x2, 0x2, 0x2, 0x25b, 0x51, 0x3, 0x2, 0x2, 0x2, 0x25c, 
       0x25d, 0x7, 0x24, 0x2, 0x2, 0x25d, 0x25e, 0x7, 0x3, 0x2, 0x2, 0x25e, 
       0x53, 0x3, 0x2, 0x2, 0x2, 0x25f, 0x260, 0x7, 0x25, 0x2, 0x2, 0x260, 
       0x261, 0x7, 0x3, 0x2, 0x2, 0x261, 0x55, 0x3, 0x2, 0x2, 0x2, 0x262, 
       0x263, 0x7, 0x26, 0x2, 0x2, 0x263, 0x264, 0x7, 0x3, 0x2, 0x2, 0x264, 
       0x57, 0x3, 0x2, 0x2, 0x2, 0x265, 0x266, 0x7, 0x27, 0x2, 0x2, 0x266, 
       0x267, 0x7, 0x3, 0x2, 0x2, 0x267, 0x59, 0x3, 0x2, 0x2, 0x2, 0x268, 
       0x269, 0x7, 0x28, 0x2, 0x2, 0x269, 0x26a, 0x7, 0x3, 0x2, 0x2, 0x26a, 
       0x5b, 0x3, 0x2, 0x2, 0x2, 0x26b, 0x26c, 0x7, 0x29, 0x2, 0x2, 0x26c, 
       0x26d, 0x7, 0xc, 0x2, 0x2, 0x26d, 0x273, 0x7, 0x3, 0x2, 0x2, 0x26e, 
       0x270, 0x7, 0xe, 0x2, 0x2, 0x26f, 0x271, 0x7, 0x3d, 0x2, 0x2, 0x270, 
       0x26f, 0x3, 0x2, 0x2, 0x2, 0x270, 0x271, 0x3, 0x2, 0x2, 0x2, 0x271, 
       0x272, 0x3, 0x2, 0x2, 0x2, 0x272, 0x274, 0x7, 0x5, 0x2, 0x2, 0x273, 
       0x26e, 0x3, 0x2, 0x2, 0x2, 0x273, 0x274, 0x3, 0x2, 0x2, 0x2, 0x274, 
       0x275, 0x3, 0x2, 0x2, 0x2, 0x275, 0x276, 0x7, 0xd, 0x2, 0x2, 0x276, 
       0x5d, 0x3, 0x2, 0x2, 0x2, 0x277, 0x278, 0x7, 0x2a, 0x2, 0x2, 0x278, 
       0x279, 0x7, 0xc, 0x2, 0x2, 0x279, 0x27f, 0x7, 0x3, 0x2, 0x2, 0x27a, 
       0x27c, 0x7, 0xe, 0x2, 0x2, 0x27b, 0x27d, 0x7, 0x3d, 0x2, 0x2, 0x27c, 
       0x27b, 0x3, 0x2, 0x2, 0x2, 0x27c, 0x27d, 0x3, 0x2, 0x2, 0x2, 0x27d, 
       0x27e, 0x3, 0x2, 0x2, 0x2, 0x27e, 0x280, 0x7, 0x5, 0x2, 0x2, 0x27f, 
       0x27a, 0x3, 0x2, 0x2, 0x2, 0x27f, 0x280, 0x3, 0x2, 0x2, 0x2, 0x280, 
       0x281, 0x3, 0x2, 0x2, 0x2, 0x281, 0x282, 0x7, 0xd, 0x2, 0x2, 0x282, 
       0x5f, 0x3, 0x2, 0x2, 0x2, 0x283, 0x284, 0x7, 0x2b, 0x2, 0x2, 0x284, 
       0x285, 0x7, 0xc, 0x2, 0x2, 0x285, 0x28b, 0x7, 0x3, 0x2, 0x2, 0x286, 
       0x288, 0x7, 0xe, 0x2, 0x2, 0x287, 0x289, 0x7, 0x3d, 0x2, 0x2, 0x288, 
       0x287, 0x3, 0x2, 0x2, 0x2, 0x288, 0x289, 0x3, 0x2, 0x2, 0x2, 0x289, 
       0x28a, 0x3, 0x2, 0x2, 0x2, 0x28a, 0x28c, 0x7, 0x5, 0x2, 0x2, 0x28b, 
       0x286, 0x3, 0x2, 0x2, 0x2, 0x28b, 0x28c, 0x3, 0x2, 0x2, 0x2, 0x28c, 
       0x28d, 0x3, 0x2, 0x2, 0x2, 0x28d, 0x28e, 0x7, 0xd, 0x2, 0x2, 0x28e, 
       0x61, 0x3, 0x2, 0x2, 0x2, 0x28f, 0x290, 0x7, 0x2c, 0x2, 0x2, 0x290, 
       0x291, 0x7, 0xc, 0x2, 0x2, 0x291, 0x292, 0x7, 0x3, 0x2, 0x2, 0x292, 
       0x293, 0x7, 0xd, 0x2, 0x2, 0x293, 0x63, 0x3, 0x2, 0x2, 0x2, 0x294, 
       0x295, 0x7, 0x2d, 0x2, 0x2, 0x295, 0x296, 0x7, 0xc, 0x2, 0x2, 0x296, 
       0x297, 0x7, 0x3, 0x2, 0x2, 0x297, 0x298, 0x7, 0xd, 0x2, 0x2, 0x298, 
       0x65, 0x3, 0x2, 0x2, 0x2, 0x299, 0x29a, 0x7, 0x2e, 0x2, 0x2, 0x29a, 
       0x29b, 0x7, 0xc, 0x2, 0x2, 0x29b, 0x29c, 0x7, 0x3, 0x2, 0x2, 0x29c, 
       0x29d, 0x7, 0xd, 0x2, 0x2, 0x29d, 0x67, 0x3, 0x2, 0x2, 0x2, 0x29e, 
       0x29f, 0x7, 0x2f, 0x2, 0x2, 0x29f, 0x2a0, 0x7, 0xc, 0x2, 0x2, 0x2a0, 
       0x2a1, 0x7, 0x3, 0x2, 0x2, 0x2a1, 0x2a2, 0x7, 0xd, 0x2, 0x2, 0x2a2, 
       0x69, 0x3, 0x2, 0x2, 0x2, 0x2a3, 0x2a4, 0x7, 0x30, 0x2, 0x2, 0x2a4, 
       0x2a5, 0x7, 0xc, 0x2, 0x2, 0x2a5, 0x2a6, 0x7, 0x3, 0x2, 0x2, 0x2a6, 
       0x2a7, 0x7, 0xd, 0x2, 0x2, 0x2a7, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x2a8, 
       0x2b1, 0x5, 0x6e, 0x38, 0x2, 0x2a9, 0x2b1, 0x7, 0x4, 0x2, 0x2, 0x2aa, 
       0x2b1, 0x7, 0x6, 0x2, 0x2, 0x2ab, 0x2b1, 0x5, 0x70, 0x39, 0x2, 0x2ac, 
       0x2b1, 0x5, 0x72, 0x3a, 0x2, 0x2ad, 0x2b1, 0x5, 0x74, 0x3b, 0x2, 
       0x2ae, 0x2b1, 0x5, 0x76, 0x3c, 0x2, 0x2af, 0x2b1, 0x5, 0x78, 0x3d, 
       0x2, 0x2b0, 0x2a8, 0x3, 0x2, 0x2, 0x2, 0x2b0, 0x2a9, 0x3, 0x2, 0x2, 
       0x2, 0x2b0, 0x2aa, 0x3, 0x2, 0x2, 0x2, 0x2b0, 0x2ab, 0x3, 0x2, 0x2, 
       0x2, 0x2b0, 0x2ac, 0x3, 0x2, 0x2, 0x2, 0x2b0, 0x2ad, 0x3, 0x2, 0x2, 
       0x2, 0x2b0, 0x2ae, 0x3, 0x2, 0x2, 0x2, 0x2b0, 0x2af, 0x3, 0x2, 0x2, 
       0x2, 0x2b1, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x2b2, 0x2b3, 0x7, 0xc, 0x2, 
       0x2, 0x2b3, 0x2b4, 0x5, 0x4e, 0x28, 0x2, 0x2b4, 0x2b5, 0x7, 0xd, 
       0x2, 0x2, 0x2b5, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x2b6, 0x2b7, 0x7, 0x3, 
       0x2, 0x2, 0x2b7, 0x2b8, 0x7, 0x21, 0x2, 0x2, 0x2b8, 0x2b9, 0x7, 0x3, 
       0x2, 0x2, 0x2b9, 0x71, 0x3, 0x2, 0x2, 0x2, 0x2ba, 0x2bb, 0x7, 0x31, 
       0x2, 0x2, 0x2bb, 0x2bc, 0x7, 0x3, 0x2, 0x2, 0x2bc, 0x73, 0x3, 0x2, 
       0x2, 0x2, 0x2bd, 0x2be, 0x7, 0x32, 0x2, 0x2, 0x2be, 0x2bf, 0x7, 0x3, 
       0x2, 0x2, 0x2bf, 0x75, 0x3, 0x2, 0x2, 0x2, 0x2c0, 0x2c1, 0x7, 0x33, 
       0x2, 0x2, 0x2c1, 0x2c2, 0x7, 0x3, 0x2, 0x2, 0x2c2, 0x77, 0x3, 0x2, 
       0x2, 0x2, 0x2c3, 0x2c4, 0x7, 0x34, 0x2, 0x2, 0x2c4, 0x2c5, 0x7, 0x3, 
       0x2, 0x2, 0x2c5, 0x79, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x81, 0x86, 0x8c, 
       0x92, 0x96, 0x9c, 0xa2, 0xab, 0xb6, 0xb8, 0xbe, 0xc6, 0xce, 0xd3, 
       0xd6, 0xda, 0xde, 0xe6, 0xe9, 0xed, 0xf1, 0x104, 0x107, 0x10f, 0x111, 
       0x121, 0x124, 0x12d, 0x12f, 0x136, 0x139, 0x142, 0x144, 0x14b, 0x14f, 
       0x156, 0x159, 0x162, 0x164, 0x16a, 0x16d, 0x174, 0x176, 0x184, 0x186, 
       0x18d, 0x190, 0x198, 0x19b, 0x1a2, 0x1a9, 0x1ac, 0x1b2, 0x1b9, 0x1bc, 
       0x1c7, 0x1d3, 0x1d6, 0x1de, 0x1e1, 0x1e8, 0x1eb, 0x1f6, 0x208, 0x20a, 
       0x210, 0x245, 0x247, 0x25a, 0x270, 0x273, 0x27c, 0x27f, 0x288, 0x28b, 
       0x2b0, 
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

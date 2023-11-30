
// Generated from IFLANG.g4 by ANTLR 4.13.1


#include "IFLANGListener.h"
#include "IFLANGVisitor.h"

#include "IFLANGParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct IFLANGParserStaticData final {
  IFLANGParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  IFLANGParserStaticData(const IFLANGParserStaticData&) = delete;
  IFLANGParserStaticData(IFLANGParserStaticData&&) = delete;
  IFLANGParserStaticData& operator=(const IFLANGParserStaticData&) = delete;
  IFLANGParserStaticData& operator=(IFLANGParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag iflangParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
IFLANGParserStaticData *iflangParserStaticData = nullptr;

void iflangParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (iflangParserStaticData != nullptr) {
    return;
  }
#else
  assert(iflangParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<IFLANGParserStaticData>(
    std::vector<std::string>{
      "start", "stat", "ifStatement", "expr", "logic"
    },
    std::vector<std::string>{
      "", "'='", "'if'", "'then'", "'else'", "'('", "')'", "'*'", "'/'", 
      "'+'", "'-'", "'>'", "'<'", "'=='", "'!='", "'>='", "'<='"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "MUL", "DIV", "ADD", "SUB", "GT", "LT", 
      "EQ", "NEQ", "GEQ", "LEQ", "ID", "INT", "NEWLINE", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,20,95,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,1,0,4,0,12,8,0,11,0,
  	12,0,13,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,26,8,1,1,2,1,2,1,
  	2,1,2,1,2,1,2,1,2,3,2,35,8,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,
  	1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,61,8,3,1,
  	4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,
  	1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,3,4,93,8,4,1,4,0,0,5,
  	0,2,4,6,8,0,0,108,0,11,1,0,0,0,2,25,1,0,0,0,4,27,1,0,0,0,6,60,1,0,0,0,
  	8,92,1,0,0,0,10,12,3,2,1,0,11,10,1,0,0,0,12,13,1,0,0,0,13,11,1,0,0,0,
  	13,14,1,0,0,0,14,1,1,0,0,0,15,26,5,19,0,0,16,17,3,6,3,0,17,18,5,19,0,
  	0,18,26,1,0,0,0,19,20,5,17,0,0,20,21,5,1,0,0,21,22,3,6,3,0,22,23,5,19,
  	0,0,23,26,1,0,0,0,24,26,3,4,2,0,25,15,1,0,0,0,25,16,1,0,0,0,25,19,1,0,
  	0,0,25,24,1,0,0,0,26,3,1,0,0,0,27,28,5,2,0,0,28,29,3,8,4,0,29,30,5,3,
  	0,0,30,31,5,19,0,0,31,34,3,2,1,0,32,33,5,4,0,0,33,35,3,2,1,0,34,32,1,
  	0,0,0,34,35,1,0,0,0,35,36,1,0,0,0,36,37,5,19,0,0,37,5,1,0,0,0,38,39,5,
  	9,0,0,39,40,3,6,3,0,40,41,3,6,3,0,41,61,1,0,0,0,42,43,5,10,0,0,43,44,
  	3,6,3,0,44,45,3,6,3,0,45,61,1,0,0,0,46,47,5,7,0,0,47,48,3,6,3,0,48,49,
  	3,6,3,0,49,61,1,0,0,0,50,51,5,8,0,0,51,52,3,6,3,0,52,53,3,6,3,0,53,61,
  	1,0,0,0,54,61,5,18,0,0,55,61,5,17,0,0,56,57,5,5,0,0,57,58,3,6,3,0,58,
  	59,5,6,0,0,59,61,1,0,0,0,60,38,1,0,0,0,60,42,1,0,0,0,60,46,1,0,0,0,60,
  	50,1,0,0,0,60,54,1,0,0,0,60,55,1,0,0,0,60,56,1,0,0,0,61,7,1,0,0,0,62,
  	63,5,11,0,0,63,64,3,8,4,0,64,65,3,8,4,0,65,93,1,0,0,0,66,67,5,12,0,0,
  	67,68,3,8,4,0,68,69,3,8,4,0,69,93,1,0,0,0,70,71,5,13,0,0,71,72,3,8,4,
  	0,72,73,3,8,4,0,73,93,1,0,0,0,74,75,5,14,0,0,75,76,3,8,4,0,76,77,3,8,
  	4,0,77,93,1,0,0,0,78,79,5,15,0,0,79,80,3,8,4,0,80,81,3,8,4,0,81,93,1,
  	0,0,0,82,83,5,16,0,0,83,84,3,8,4,0,84,85,3,8,4,0,85,93,1,0,0,0,86,93,
  	5,18,0,0,87,93,5,17,0,0,88,89,5,5,0,0,89,90,3,8,4,0,90,91,5,6,0,0,91,
  	93,1,0,0,0,92,62,1,0,0,0,92,66,1,0,0,0,92,70,1,0,0,0,92,74,1,0,0,0,92,
  	78,1,0,0,0,92,82,1,0,0,0,92,86,1,0,0,0,92,87,1,0,0,0,92,88,1,0,0,0,93,
  	9,1,0,0,0,5,13,25,34,60,92
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  iflangParserStaticData = staticData.release();
}

}

IFLANGParser::IFLANGParser(TokenStream *input) : IFLANGParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

IFLANGParser::IFLANGParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  IFLANGParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *iflangParserStaticData->atn, iflangParserStaticData->decisionToDFA, iflangParserStaticData->sharedContextCache, options);
}

IFLANGParser::~IFLANGParser() {
  delete _interpreter;
}

const atn::ATN& IFLANGParser::getATN() const {
  return *iflangParserStaticData->atn;
}

std::string IFLANGParser::getGrammarFileName() const {
  return "IFLANG.g4";
}

const std::vector<std::string>& IFLANGParser::getRuleNames() const {
  return iflangParserStaticData->ruleNames;
}

const dfa::Vocabulary& IFLANGParser::getVocabulary() const {
  return iflangParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView IFLANGParser::getSerializedATN() const {
  return iflangParserStaticData->serializedATN;
}


//----------------- StartContext ------------------------------------------------------------------

IFLANGParser::StartContext::StartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t IFLANGParser::StartContext::getRuleIndex() const {
  return IFLANGParser::RuleStart;
}

void IFLANGParser::StartContext::copyFrom(StartContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- StatsContext ------------------------------------------------------------------

std::vector<IFLANGParser::StatContext *> IFLANGParser::StatsContext::stat() {
  return getRuleContexts<IFLANGParser::StatContext>();
}

IFLANGParser::StatContext* IFLANGParser::StatsContext::stat(size_t i) {
  return getRuleContext<IFLANGParser::StatContext>(i);
}

IFLANGParser::StatsContext::StatsContext(StartContext *ctx) { copyFrom(ctx); }

void IFLANGParser::StatsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IFLANGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStats(this);
}
void IFLANGParser::StatsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IFLANGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStats(this);
}

std::any IFLANGParser::StatsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFLANGVisitor*>(visitor))
    return parserVisitor->visitStats(this);
  else
    return visitor->visitChildren(this);
}
IFLANGParser::StartContext* IFLANGParser::start() {
  StartContext *_localctx = _tracker.createInstance<StartContext>(_ctx, getState());
  enterRule(_localctx, 0, IFLANGParser::RuleStart);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<IFLANGParser::StatsContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(11); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(10);
      stat();
      setState(13); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 919460) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatContext ------------------------------------------------------------------

IFLANGParser::StatContext::StatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t IFLANGParser::StatContext::getRuleIndex() const {
  return IFLANGParser::RuleStat;
}

void IFLANGParser::StatContext::copyFrom(StatContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- BlankContext ------------------------------------------------------------------

tree::TerminalNode* IFLANGParser::BlankContext::NEWLINE() {
  return getToken(IFLANGParser::NEWLINE, 0);
}

IFLANGParser::BlankContext::BlankContext(StatContext *ctx) { copyFrom(ctx); }

void IFLANGParser::BlankContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IFLANGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlank(this);
}
void IFLANGParser::BlankContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IFLANGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlank(this);
}

std::any IFLANGParser::BlankContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFLANGVisitor*>(visitor))
    return parserVisitor->visitBlank(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfStmtContext ------------------------------------------------------------------

IFLANGParser::IfStatementContext* IFLANGParser::IfStmtContext::ifStatement() {
  return getRuleContext<IFLANGParser::IfStatementContext>(0);
}

IFLANGParser::IfStmtContext::IfStmtContext(StatContext *ctx) { copyFrom(ctx); }

void IFLANGParser::IfStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IFLANGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStmt(this);
}
void IFLANGParser::IfStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IFLANGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStmt(this);
}

std::any IFLANGParser::IfStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFLANGVisitor*>(visitor))
    return parserVisitor->visitIfStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignContext ------------------------------------------------------------------

tree::TerminalNode* IFLANGParser::AssignContext::ID() {
  return getToken(IFLANGParser::ID, 0);
}

IFLANGParser::ExprContext* IFLANGParser::AssignContext::expr() {
  return getRuleContext<IFLANGParser::ExprContext>(0);
}

tree::TerminalNode* IFLANGParser::AssignContext::NEWLINE() {
  return getToken(IFLANGParser::NEWLINE, 0);
}

IFLANGParser::AssignContext::AssignContext(StatContext *ctx) { copyFrom(ctx); }

void IFLANGParser::AssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IFLANGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssign(this);
}
void IFLANGParser::AssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IFLANGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssign(this);
}

std::any IFLANGParser::AssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFLANGVisitor*>(visitor))
    return parserVisitor->visitAssign(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrintExprContext ------------------------------------------------------------------

IFLANGParser::ExprContext* IFLANGParser::PrintExprContext::expr() {
  return getRuleContext<IFLANGParser::ExprContext>(0);
}

tree::TerminalNode* IFLANGParser::PrintExprContext::NEWLINE() {
  return getToken(IFLANGParser::NEWLINE, 0);
}

IFLANGParser::PrintExprContext::PrintExprContext(StatContext *ctx) { copyFrom(ctx); }

void IFLANGParser::PrintExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IFLANGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrintExpr(this);
}
void IFLANGParser::PrintExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IFLANGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrintExpr(this);
}

std::any IFLANGParser::PrintExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFLANGVisitor*>(visitor))
    return parserVisitor->visitPrintExpr(this);
  else
    return visitor->visitChildren(this);
}
IFLANGParser::StatContext* IFLANGParser::stat() {
  StatContext *_localctx = _tracker.createInstance<StatContext>(_ctx, getState());
  enterRule(_localctx, 2, IFLANGParser::RuleStat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(25);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<IFLANGParser::BlankContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(15);
      match(IFLANGParser::NEWLINE);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<IFLANGParser::PrintExprContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(16);
      expr();
      setState(17);
      match(IFLANGParser::NEWLINE);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<IFLANGParser::AssignContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(19);
      match(IFLANGParser::ID);
      setState(20);
      match(IFLANGParser::T__0);
      setState(21);
      expr();
      setState(22);
      match(IFLANGParser::NEWLINE);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<IFLANGParser::IfStmtContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(24);
      ifStatement();
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

//----------------- IfStatementContext ------------------------------------------------------------------

IFLANGParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t IFLANGParser::IfStatementContext::getRuleIndex() const {
  return IFLANGParser::RuleIfStatement;
}

void IFLANGParser::IfStatementContext::copyFrom(IfStatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IFContext ------------------------------------------------------------------

IFLANGParser::LogicContext* IFLANGParser::IFContext::logic() {
  return getRuleContext<IFLANGParser::LogicContext>(0);
}

std::vector<tree::TerminalNode *> IFLANGParser::IFContext::NEWLINE() {
  return getTokens(IFLANGParser::NEWLINE);
}

tree::TerminalNode* IFLANGParser::IFContext::NEWLINE(size_t i) {
  return getToken(IFLANGParser::NEWLINE, i);
}

std::vector<IFLANGParser::StatContext *> IFLANGParser::IFContext::stat() {
  return getRuleContexts<IFLANGParser::StatContext>();
}

IFLANGParser::StatContext* IFLANGParser::IFContext::stat(size_t i) {
  return getRuleContext<IFLANGParser::StatContext>(i);
}

IFLANGParser::IFContext::IFContext(IfStatementContext *ctx) { copyFrom(ctx); }

void IFLANGParser::IFContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IFLANGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIF(this);
}
void IFLANGParser::IFContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IFLANGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIF(this);
}

std::any IFLANGParser::IFContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFLANGVisitor*>(visitor))
    return parserVisitor->visitIF(this);
  else
    return visitor->visitChildren(this);
}
IFLANGParser::IfStatementContext* IFLANGParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 4, IFLANGParser::RuleIfStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<IFLANGParser::IFContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(27);
    match(IFLANGParser::T__1);
    setState(28);
    logic();
    setState(29);
    match(IFLANGParser::T__2);
    setState(30);
    match(IFLANGParser::NEWLINE);
    setState(31);
    stat();
    setState(34);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IFLANGParser::T__3) {
      setState(32);
      match(IFLANGParser::T__3);
      setState(33);
      stat();
    }
    setState(36);
    match(IFLANGParser::NEWLINE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

IFLANGParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t IFLANGParser::ExprContext::getRuleIndex() const {
  return IFLANGParser::RuleExpr;
}

void IFLANGParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AddContext ------------------------------------------------------------------

tree::TerminalNode* IFLANGParser::AddContext::ADD() {
  return getToken(IFLANGParser::ADD, 0);
}

std::vector<IFLANGParser::ExprContext *> IFLANGParser::AddContext::expr() {
  return getRuleContexts<IFLANGParser::ExprContext>();
}

IFLANGParser::ExprContext* IFLANGParser::AddContext::expr(size_t i) {
  return getRuleContext<IFLANGParser::ExprContext>(i);
}

IFLANGParser::AddContext::AddContext(ExprContext *ctx) { copyFrom(ctx); }

void IFLANGParser::AddContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IFLANGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdd(this);
}
void IFLANGParser::AddContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IFLANGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdd(this);
}

std::any IFLANGParser::AddContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFLANGVisitor*>(visitor))
    return parserVisitor->visitAdd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DivContext ------------------------------------------------------------------

tree::TerminalNode* IFLANGParser::DivContext::DIV() {
  return getToken(IFLANGParser::DIV, 0);
}

std::vector<IFLANGParser::ExprContext *> IFLANGParser::DivContext::expr() {
  return getRuleContexts<IFLANGParser::ExprContext>();
}

IFLANGParser::ExprContext* IFLANGParser::DivContext::expr(size_t i) {
  return getRuleContext<IFLANGParser::ExprContext>(i);
}

IFLANGParser::DivContext::DivContext(ExprContext *ctx) { copyFrom(ctx); }

void IFLANGParser::DivContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IFLANGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDiv(this);
}
void IFLANGParser::DivContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IFLANGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDiv(this);
}

std::any IFLANGParser::DivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFLANGVisitor*>(visitor))
    return parserVisitor->visitDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SubContext ------------------------------------------------------------------

tree::TerminalNode* IFLANGParser::SubContext::SUB() {
  return getToken(IFLANGParser::SUB, 0);
}

std::vector<IFLANGParser::ExprContext *> IFLANGParser::SubContext::expr() {
  return getRuleContexts<IFLANGParser::ExprContext>();
}

IFLANGParser::ExprContext* IFLANGParser::SubContext::expr(size_t i) {
  return getRuleContext<IFLANGParser::ExprContext>(i);
}

IFLANGParser::SubContext::SubContext(ExprContext *ctx) { copyFrom(ctx); }

void IFLANGParser::SubContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IFLANGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSub(this);
}
void IFLANGParser::SubContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IFLANGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSub(this);
}

std::any IFLANGParser::SubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFLANGVisitor*>(visitor))
    return parserVisitor->visitSub(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulContext ------------------------------------------------------------------

tree::TerminalNode* IFLANGParser::MulContext::MUL() {
  return getToken(IFLANGParser::MUL, 0);
}

std::vector<IFLANGParser::ExprContext *> IFLANGParser::MulContext::expr() {
  return getRuleContexts<IFLANGParser::ExprContext>();
}

IFLANGParser::ExprContext* IFLANGParser::MulContext::expr(size_t i) {
  return getRuleContext<IFLANGParser::ExprContext>(i);
}

IFLANGParser::MulContext::MulContext(ExprContext *ctx) { copyFrom(ctx); }

void IFLANGParser::MulContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IFLANGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMul(this);
}
void IFLANGParser::MulContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IFLANGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMul(this);
}

std::any IFLANGParser::MulContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFLANGVisitor*>(visitor))
    return parserVisitor->visitMul(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParensContext ------------------------------------------------------------------

IFLANGParser::ExprContext* IFLANGParser::ParensContext::expr() {
  return getRuleContext<IFLANGParser::ExprContext>(0);
}

IFLANGParser::ParensContext::ParensContext(ExprContext *ctx) { copyFrom(ctx); }

void IFLANGParser::ParensContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IFLANGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParens(this);
}
void IFLANGParser::ParensContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IFLANGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParens(this);
}

std::any IFLANGParser::ParensContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFLANGVisitor*>(visitor))
    return parserVisitor->visitParens(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IdContext ------------------------------------------------------------------

tree::TerminalNode* IFLANGParser::IdContext::ID() {
  return getToken(IFLANGParser::ID, 0);
}

IFLANGParser::IdContext::IdContext(ExprContext *ctx) { copyFrom(ctx); }

void IFLANGParser::IdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IFLANGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterId(this);
}
void IFLANGParser::IdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IFLANGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitId(this);
}

std::any IFLANGParser::IdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFLANGVisitor*>(visitor))
    return parserVisitor->visitId(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntContext ------------------------------------------------------------------

tree::TerminalNode* IFLANGParser::IntContext::INT() {
  return getToken(IFLANGParser::INT, 0);
}

IFLANGParser::IntContext::IntContext(ExprContext *ctx) { copyFrom(ctx); }

void IFLANGParser::IntContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IFLANGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInt(this);
}
void IFLANGParser::IntContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IFLANGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInt(this);
}

std::any IFLANGParser::IntContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFLANGVisitor*>(visitor))
    return parserVisitor->visitInt(this);
  else
    return visitor->visitChildren(this);
}
IFLANGParser::ExprContext* IFLANGParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 6, IFLANGParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(60);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IFLANGParser::ADD: {
        _localctx = _tracker.createInstance<IFLANGParser::AddContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(38);
        match(IFLANGParser::ADD);
        setState(39);
        expr();
        setState(40);
        expr();
        break;
      }

      case IFLANGParser::SUB: {
        _localctx = _tracker.createInstance<IFLANGParser::SubContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(42);
        match(IFLANGParser::SUB);
        setState(43);
        expr();
        setState(44);
        expr();
        break;
      }

      case IFLANGParser::MUL: {
        _localctx = _tracker.createInstance<IFLANGParser::MulContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(46);
        match(IFLANGParser::MUL);
        setState(47);
        expr();
        setState(48);
        expr();
        break;
      }

      case IFLANGParser::DIV: {
        _localctx = _tracker.createInstance<IFLANGParser::DivContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(50);
        match(IFLANGParser::DIV);
        setState(51);
        expr();
        setState(52);
        expr();
        break;
      }

      case IFLANGParser::INT: {
        _localctx = _tracker.createInstance<IFLANGParser::IntContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(54);
        match(IFLANGParser::INT);
        break;
      }

      case IFLANGParser::ID: {
        _localctx = _tracker.createInstance<IFLANGParser::IdContext>(_localctx);
        enterOuterAlt(_localctx, 6);
        setState(55);
        match(IFLANGParser::ID);
        break;
      }

      case IFLANGParser::T__4: {
        _localctx = _tracker.createInstance<IFLANGParser::ParensContext>(_localctx);
        enterOuterAlt(_localctx, 7);
        setState(56);
        match(IFLANGParser::T__4);
        setState(57);
        expr();
        setState(58);
        match(IFLANGParser::T__5);
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

//----------------- LogicContext ------------------------------------------------------------------

IFLANGParser::LogicContext::LogicContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t IFLANGParser::LogicContext::getRuleIndex() const {
  return IFLANGParser::RuleLogic;
}

void IFLANGParser::LogicContext::copyFrom(LogicContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- GreaterEqualContext ------------------------------------------------------------------

tree::TerminalNode* IFLANGParser::GreaterEqualContext::GEQ() {
  return getToken(IFLANGParser::GEQ, 0);
}

std::vector<IFLANGParser::LogicContext *> IFLANGParser::GreaterEqualContext::logic() {
  return getRuleContexts<IFLANGParser::LogicContext>();
}

IFLANGParser::LogicContext* IFLANGParser::GreaterEqualContext::logic(size_t i) {
  return getRuleContext<IFLANGParser::LogicContext>(i);
}

IFLANGParser::GreaterEqualContext::GreaterEqualContext(LogicContext *ctx) { copyFrom(ctx); }

void IFLANGParser::GreaterEqualContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IFLANGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGreaterEqual(this);
}
void IFLANGParser::GreaterEqualContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IFLANGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGreaterEqual(this);
}

std::any IFLANGParser::GreaterEqualContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFLANGVisitor*>(visitor))
    return parserVisitor->visitGreaterEqual(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NotEqualContext ------------------------------------------------------------------

tree::TerminalNode* IFLANGParser::NotEqualContext::NEQ() {
  return getToken(IFLANGParser::NEQ, 0);
}

std::vector<IFLANGParser::LogicContext *> IFLANGParser::NotEqualContext::logic() {
  return getRuleContexts<IFLANGParser::LogicContext>();
}

IFLANGParser::LogicContext* IFLANGParser::NotEqualContext::logic(size_t i) {
  return getRuleContext<IFLANGParser::LogicContext>(i);
}

IFLANGParser::NotEqualContext::NotEqualContext(LogicContext *ctx) { copyFrom(ctx); }

void IFLANGParser::NotEqualContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IFLANGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNotEqual(this);
}
void IFLANGParser::NotEqualContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IFLANGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNotEqual(this);
}

std::any IFLANGParser::NotEqualContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFLANGVisitor*>(visitor))
    return parserVisitor->visitNotEqual(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EqualContext ------------------------------------------------------------------

tree::TerminalNode* IFLANGParser::EqualContext::EQ() {
  return getToken(IFLANGParser::EQ, 0);
}

std::vector<IFLANGParser::LogicContext *> IFLANGParser::EqualContext::logic() {
  return getRuleContexts<IFLANGParser::LogicContext>();
}

IFLANGParser::LogicContext* IFLANGParser::EqualContext::logic(size_t i) {
  return getRuleContext<IFLANGParser::LogicContext>(i);
}

IFLANGParser::EqualContext::EqualContext(LogicContext *ctx) { copyFrom(ctx); }

void IFLANGParser::EqualContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IFLANGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqual(this);
}
void IFLANGParser::EqualContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IFLANGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqual(this);
}

std::any IFLANGParser::EqualContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFLANGVisitor*>(visitor))
    return parserVisitor->visitEqual(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntLogicContext ------------------------------------------------------------------

tree::TerminalNode* IFLANGParser::IntLogicContext::INT() {
  return getToken(IFLANGParser::INT, 0);
}

IFLANGParser::IntLogicContext::IntLogicContext(LogicContext *ctx) { copyFrom(ctx); }

void IFLANGParser::IntLogicContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IFLANGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntLogic(this);
}
void IFLANGParser::IntLogicContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IFLANGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntLogic(this);
}

std::any IFLANGParser::IntLogicContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFLANGVisitor*>(visitor))
    return parserVisitor->visitIntLogic(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LessEqualContext ------------------------------------------------------------------

tree::TerminalNode* IFLANGParser::LessEqualContext::LEQ() {
  return getToken(IFLANGParser::LEQ, 0);
}

std::vector<IFLANGParser::LogicContext *> IFLANGParser::LessEqualContext::logic() {
  return getRuleContexts<IFLANGParser::LogicContext>();
}

IFLANGParser::LogicContext* IFLANGParser::LessEqualContext::logic(size_t i) {
  return getRuleContext<IFLANGParser::LogicContext>(i);
}

IFLANGParser::LessEqualContext::LessEqualContext(LogicContext *ctx) { copyFrom(ctx); }

void IFLANGParser::LessEqualContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IFLANGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLessEqual(this);
}
void IFLANGParser::LessEqualContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IFLANGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLessEqual(this);
}

std::any IFLANGParser::LessEqualContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFLANGVisitor*>(visitor))
    return parserVisitor->visitLessEqual(this);
  else
    return visitor->visitChildren(this);
}
//----------------- GreaterContext ------------------------------------------------------------------

tree::TerminalNode* IFLANGParser::GreaterContext::GT() {
  return getToken(IFLANGParser::GT, 0);
}

std::vector<IFLANGParser::LogicContext *> IFLANGParser::GreaterContext::logic() {
  return getRuleContexts<IFLANGParser::LogicContext>();
}

IFLANGParser::LogicContext* IFLANGParser::GreaterContext::logic(size_t i) {
  return getRuleContext<IFLANGParser::LogicContext>(i);
}

IFLANGParser::GreaterContext::GreaterContext(LogicContext *ctx) { copyFrom(ctx); }

void IFLANGParser::GreaterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IFLANGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGreater(this);
}
void IFLANGParser::GreaterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IFLANGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGreater(this);
}

std::any IFLANGParser::GreaterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFLANGVisitor*>(visitor))
    return parserVisitor->visitGreater(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParensLogicContext ------------------------------------------------------------------

IFLANGParser::LogicContext* IFLANGParser::ParensLogicContext::logic() {
  return getRuleContext<IFLANGParser::LogicContext>(0);
}

IFLANGParser::ParensLogicContext::ParensLogicContext(LogicContext *ctx) { copyFrom(ctx); }

void IFLANGParser::ParensLogicContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IFLANGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParensLogic(this);
}
void IFLANGParser::ParensLogicContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IFLANGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParensLogic(this);
}

std::any IFLANGParser::ParensLogicContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFLANGVisitor*>(visitor))
    return parserVisitor->visitParensLogic(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LessContext ------------------------------------------------------------------

tree::TerminalNode* IFLANGParser::LessContext::LT() {
  return getToken(IFLANGParser::LT, 0);
}

std::vector<IFLANGParser::LogicContext *> IFLANGParser::LessContext::logic() {
  return getRuleContexts<IFLANGParser::LogicContext>();
}

IFLANGParser::LogicContext* IFLANGParser::LessContext::logic(size_t i) {
  return getRuleContext<IFLANGParser::LogicContext>(i);
}

IFLANGParser::LessContext::LessContext(LogicContext *ctx) { copyFrom(ctx); }

void IFLANGParser::LessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IFLANGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLess(this);
}
void IFLANGParser::LessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IFLANGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLess(this);
}

std::any IFLANGParser::LessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFLANGVisitor*>(visitor))
    return parserVisitor->visitLess(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IdLogicContext ------------------------------------------------------------------

tree::TerminalNode* IFLANGParser::IdLogicContext::ID() {
  return getToken(IFLANGParser::ID, 0);
}

IFLANGParser::IdLogicContext::IdLogicContext(LogicContext *ctx) { copyFrom(ctx); }

void IFLANGParser::IdLogicContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IFLANGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdLogic(this);
}
void IFLANGParser::IdLogicContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<IFLANGListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdLogic(this);
}

std::any IFLANGParser::IdLogicContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IFLANGVisitor*>(visitor))
    return parserVisitor->visitIdLogic(this);
  else
    return visitor->visitChildren(this);
}
IFLANGParser::LogicContext* IFLANGParser::logic() {
  LogicContext *_localctx = _tracker.createInstance<LogicContext>(_ctx, getState());
  enterRule(_localctx, 8, IFLANGParser::RuleLogic);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(92);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IFLANGParser::GT: {
        _localctx = _tracker.createInstance<IFLANGParser::GreaterContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(62);
        match(IFLANGParser::GT);
        setState(63);
        logic();
        setState(64);
        logic();
        break;
      }

      case IFLANGParser::LT: {
        _localctx = _tracker.createInstance<IFLANGParser::LessContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(66);
        match(IFLANGParser::LT);
        setState(67);
        logic();
        setState(68);
        logic();
        break;
      }

      case IFLANGParser::EQ: {
        _localctx = _tracker.createInstance<IFLANGParser::EqualContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(70);
        match(IFLANGParser::EQ);
        setState(71);
        logic();
        setState(72);
        logic();
        break;
      }

      case IFLANGParser::NEQ: {
        _localctx = _tracker.createInstance<IFLANGParser::NotEqualContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(74);
        match(IFLANGParser::NEQ);
        setState(75);
        logic();
        setState(76);
        logic();
        break;
      }

      case IFLANGParser::GEQ: {
        _localctx = _tracker.createInstance<IFLANGParser::GreaterEqualContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(78);
        match(IFLANGParser::GEQ);
        setState(79);
        logic();
        setState(80);
        logic();
        break;
      }

      case IFLANGParser::LEQ: {
        _localctx = _tracker.createInstance<IFLANGParser::LessEqualContext>(_localctx);
        enterOuterAlt(_localctx, 6);
        setState(82);
        match(IFLANGParser::LEQ);
        setState(83);
        logic();
        setState(84);
        logic();
        break;
      }

      case IFLANGParser::INT: {
        _localctx = _tracker.createInstance<IFLANGParser::IntLogicContext>(_localctx);
        enterOuterAlt(_localctx, 7);
        setState(86);
        match(IFLANGParser::INT);
        break;
      }

      case IFLANGParser::ID: {
        _localctx = _tracker.createInstance<IFLANGParser::IdLogicContext>(_localctx);
        enterOuterAlt(_localctx, 8);
        setState(87);
        match(IFLANGParser::ID);
        break;
      }

      case IFLANGParser::T__4: {
        _localctx = _tracker.createInstance<IFLANGParser::ParensLogicContext>(_localctx);
        enterOuterAlt(_localctx, 9);
        setState(88);
        match(IFLANGParser::T__4);
        setState(89);
        logic();
        setState(90);
        match(IFLANGParser::T__5);
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

void IFLANGParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  iflangParserInitialize();
#else
  ::antlr4::internal::call_once(iflangParserOnceFlag, iflangParserInitialize);
#endif
}

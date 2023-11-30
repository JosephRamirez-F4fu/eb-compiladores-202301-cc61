
// Generated from IFLANG.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  IFLANGParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, MUL = 7, 
    DIV = 8, ADD = 9, SUB = 10, GT = 11, LT = 12, EQ = 13, NEQ = 14, GEQ = 15, 
    LEQ = 16, ID = 17, INT = 18, NEWLINE = 19, WS = 20
  };

  enum {
    RuleStart = 0, RuleStat = 1, RuleIfStatement = 2, RuleExpr = 3, RuleLogic = 4
  };

  explicit IFLANGParser(antlr4::TokenStream *input);

  IFLANGParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~IFLANGParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class StartContext;
  class StatContext;
  class IfStatementContext;
  class ExprContext;
  class LogicContext; 

  class  StartContext : public antlr4::ParserRuleContext {
  public:
    StartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StartContext() = default;
    void copyFrom(StartContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  StatsContext : public StartContext {
  public:
    StatsContext(StartContext *ctx);

    std::vector<StatContext *> stat();
    StatContext* stat(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StartContext* start();

  class  StatContext : public antlr4::ParserRuleContext {
  public:
    StatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StatContext() = default;
    void copyFrom(StatContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  BlankContext : public StatContext {
  public:
    BlankContext(StatContext *ctx);

    antlr4::tree::TerminalNode *NEWLINE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IfStmtContext : public StatContext {
  public:
    IfStmtContext(StatContext *ctx);

    IfStatementContext *ifStatement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AssignContext : public StatContext {
  public:
    AssignContext(StatContext *ctx);

    antlr4::tree::TerminalNode *ID();
    ExprContext *expr();
    antlr4::tree::TerminalNode *NEWLINE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PrintExprContext : public StatContext {
  public:
    PrintExprContext(StatContext *ctx);

    ExprContext *expr();
    antlr4::tree::TerminalNode *NEWLINE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StatContext* stat();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    IfStatementContext() = default;
    void copyFrom(IfStatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  IFContext : public IfStatementContext {
  public:
    IFContext(IfStatementContext *ctx);

    LogicContext *logic();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    std::vector<StatContext *> stat();
    StatContext* stat(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  IfStatementContext* ifStatement();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() = default;
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AddContext : public ExprContext {
  public:
    AddContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *ADD();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DivContext : public ExprContext {
  public:
    DivContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *DIV();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SubContext : public ExprContext {
  public:
    SubContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *SUB();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MulContext : public ExprContext {
  public:
    MulContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *MUL();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParensContext : public ExprContext {
  public:
    ParensContext(ExprContext *ctx);

    ExprContext *expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IdContext : public ExprContext {
  public:
    IdContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *ID();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IntContext : public ExprContext {
  public:
    IntContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *INT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();

  class  LogicContext : public antlr4::ParserRuleContext {
  public:
    LogicContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    LogicContext() = default;
    void copyFrom(LogicContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  GreaterEqualContext : public LogicContext {
  public:
    GreaterEqualContext(LogicContext *ctx);

    antlr4::tree::TerminalNode *GEQ();
    std::vector<LogicContext *> logic();
    LogicContext* logic(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NotEqualContext : public LogicContext {
  public:
    NotEqualContext(LogicContext *ctx);

    antlr4::tree::TerminalNode *NEQ();
    std::vector<LogicContext *> logic();
    LogicContext* logic(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EqualContext : public LogicContext {
  public:
    EqualContext(LogicContext *ctx);

    antlr4::tree::TerminalNode *EQ();
    std::vector<LogicContext *> logic();
    LogicContext* logic(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IntLogicContext : public LogicContext {
  public:
    IntLogicContext(LogicContext *ctx);

    antlr4::tree::TerminalNode *INT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LessEqualContext : public LogicContext {
  public:
    LessEqualContext(LogicContext *ctx);

    antlr4::tree::TerminalNode *LEQ();
    std::vector<LogicContext *> logic();
    LogicContext* logic(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  GreaterContext : public LogicContext {
  public:
    GreaterContext(LogicContext *ctx);

    antlr4::tree::TerminalNode *GT();
    std::vector<LogicContext *> logic();
    LogicContext* logic(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParensLogicContext : public LogicContext {
  public:
    ParensLogicContext(LogicContext *ctx);

    LogicContext *logic();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LessContext : public LogicContext {
  public:
    LessContext(LogicContext *ctx);

    antlr4::tree::TerminalNode *LT();
    std::vector<LogicContext *> logic();
    LogicContext* logic(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IdLogicContext : public LogicContext {
  public:
    IdLogicContext(LogicContext *ctx);

    antlr4::tree::TerminalNode *ID();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  LogicContext* logic();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};


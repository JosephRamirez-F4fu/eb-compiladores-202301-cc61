
// Generated from IFLANG.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "IFLANGVisitor.h"


/**
 * This class provides an empty implementation of IFLANGVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  IFLANGBaseVisitor : public IFLANGVisitor {
public:

  virtual std::any visitStats(IFLANGParser::StatsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlank(IFLANGParser::BlankContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrintExpr(IFLANGParser::PrintExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssign(IFLANGParser::AssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStmt(IFLANGParser::IfStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIF(IFLANGParser::IFContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdd(IFLANGParser::AddContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSub(IFLANGParser::SubContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMul(IFLANGParser::MulContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDiv(IFLANGParser::DivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInt(IFLANGParser::IntContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitId(IFLANGParser::IdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParens(IFLANGParser::ParensContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGreater(IFLANGParser::GreaterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLess(IFLANGParser::LessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEqual(IFLANGParser::EqualContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNotEqual(IFLANGParser::NotEqualContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGreaterEqual(IFLANGParser::GreaterEqualContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLessEqual(IFLANGParser::LessEqualContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntLogic(IFLANGParser::IntLogicContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdLogic(IFLANGParser::IdLogicContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParensLogic(IFLANGParser::ParensLogicContext *ctx) override {
    return visitChildren(ctx);
  }


};


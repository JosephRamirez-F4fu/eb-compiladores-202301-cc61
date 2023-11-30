
// Generated from IFLANG.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "IFLANGParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by IFLANGParser.
 */
class  IFLANGListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterStats(IFLANGParser::StatsContext *ctx) = 0;
  virtual void exitStats(IFLANGParser::StatsContext *ctx) = 0;

  virtual void enterBlank(IFLANGParser::BlankContext *ctx) = 0;
  virtual void exitBlank(IFLANGParser::BlankContext *ctx) = 0;

  virtual void enterPrintExpr(IFLANGParser::PrintExprContext *ctx) = 0;
  virtual void exitPrintExpr(IFLANGParser::PrintExprContext *ctx) = 0;

  virtual void enterAssign(IFLANGParser::AssignContext *ctx) = 0;
  virtual void exitAssign(IFLANGParser::AssignContext *ctx) = 0;

  virtual void enterIfStmt(IFLANGParser::IfStmtContext *ctx) = 0;
  virtual void exitIfStmt(IFLANGParser::IfStmtContext *ctx) = 0;

  virtual void enterIF(IFLANGParser::IFContext *ctx) = 0;
  virtual void exitIF(IFLANGParser::IFContext *ctx) = 0;

  virtual void enterAdd(IFLANGParser::AddContext *ctx) = 0;
  virtual void exitAdd(IFLANGParser::AddContext *ctx) = 0;

  virtual void enterSub(IFLANGParser::SubContext *ctx) = 0;
  virtual void exitSub(IFLANGParser::SubContext *ctx) = 0;

  virtual void enterMul(IFLANGParser::MulContext *ctx) = 0;
  virtual void exitMul(IFLANGParser::MulContext *ctx) = 0;

  virtual void enterDiv(IFLANGParser::DivContext *ctx) = 0;
  virtual void exitDiv(IFLANGParser::DivContext *ctx) = 0;

  virtual void enterInt(IFLANGParser::IntContext *ctx) = 0;
  virtual void exitInt(IFLANGParser::IntContext *ctx) = 0;

  virtual void enterId(IFLANGParser::IdContext *ctx) = 0;
  virtual void exitId(IFLANGParser::IdContext *ctx) = 0;

  virtual void enterParens(IFLANGParser::ParensContext *ctx) = 0;
  virtual void exitParens(IFLANGParser::ParensContext *ctx) = 0;

  virtual void enterGreater(IFLANGParser::GreaterContext *ctx) = 0;
  virtual void exitGreater(IFLANGParser::GreaterContext *ctx) = 0;

  virtual void enterLess(IFLANGParser::LessContext *ctx) = 0;
  virtual void exitLess(IFLANGParser::LessContext *ctx) = 0;

  virtual void enterEqual(IFLANGParser::EqualContext *ctx) = 0;
  virtual void exitEqual(IFLANGParser::EqualContext *ctx) = 0;

  virtual void enterNotEqual(IFLANGParser::NotEqualContext *ctx) = 0;
  virtual void exitNotEqual(IFLANGParser::NotEqualContext *ctx) = 0;

  virtual void enterGreaterEqual(IFLANGParser::GreaterEqualContext *ctx) = 0;
  virtual void exitGreaterEqual(IFLANGParser::GreaterEqualContext *ctx) = 0;

  virtual void enterLessEqual(IFLANGParser::LessEqualContext *ctx) = 0;
  virtual void exitLessEqual(IFLANGParser::LessEqualContext *ctx) = 0;

  virtual void enterIntLogic(IFLANGParser::IntLogicContext *ctx) = 0;
  virtual void exitIntLogic(IFLANGParser::IntLogicContext *ctx) = 0;

  virtual void enterIdLogic(IFLANGParser::IdLogicContext *ctx) = 0;
  virtual void exitIdLogic(IFLANGParser::IdLogicContext *ctx) = 0;

  virtual void enterParensLogic(IFLANGParser::ParensLogicContext *ctx) = 0;
  virtual void exitParensLogic(IFLANGParser::ParensLogicContext *ctx) = 0;


};


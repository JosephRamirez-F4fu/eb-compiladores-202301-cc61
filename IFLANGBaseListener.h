
// Generated from IFLANG.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "IFLANGListener.h"


/**
 * This class provides an empty implementation of IFLANGListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  IFLANGBaseListener : public IFLANGListener {
public:

  virtual void enterStats(IFLANGParser::StatsContext * /*ctx*/) override { }
  virtual void exitStats(IFLANGParser::StatsContext * /*ctx*/) override { }

  virtual void enterBlank(IFLANGParser::BlankContext * /*ctx*/) override { }
  virtual void exitBlank(IFLANGParser::BlankContext * /*ctx*/) override { }

  virtual void enterPrintExpr(IFLANGParser::PrintExprContext * /*ctx*/) override { }
  virtual void exitPrintExpr(IFLANGParser::PrintExprContext * /*ctx*/) override { }

  virtual void enterAssign(IFLANGParser::AssignContext * /*ctx*/) override { }
  virtual void exitAssign(IFLANGParser::AssignContext * /*ctx*/) override { }

  virtual void enterIfStmt(IFLANGParser::IfStmtContext * /*ctx*/) override { }
  virtual void exitIfStmt(IFLANGParser::IfStmtContext * /*ctx*/) override { }

  virtual void enterIF(IFLANGParser::IFContext * /*ctx*/) override { }
  virtual void exitIF(IFLANGParser::IFContext * /*ctx*/) override { }

  virtual void enterAdd(IFLANGParser::AddContext * /*ctx*/) override { }
  virtual void exitAdd(IFLANGParser::AddContext * /*ctx*/) override { }

  virtual void enterSub(IFLANGParser::SubContext * /*ctx*/) override { }
  virtual void exitSub(IFLANGParser::SubContext * /*ctx*/) override { }

  virtual void enterMul(IFLANGParser::MulContext * /*ctx*/) override { }
  virtual void exitMul(IFLANGParser::MulContext * /*ctx*/) override { }

  virtual void enterDiv(IFLANGParser::DivContext * /*ctx*/) override { }
  virtual void exitDiv(IFLANGParser::DivContext * /*ctx*/) override { }

  virtual void enterInt(IFLANGParser::IntContext * /*ctx*/) override { }
  virtual void exitInt(IFLANGParser::IntContext * /*ctx*/) override { }

  virtual void enterId(IFLANGParser::IdContext * /*ctx*/) override { }
  virtual void exitId(IFLANGParser::IdContext * /*ctx*/) override { }

  virtual void enterParens(IFLANGParser::ParensContext * /*ctx*/) override { }
  virtual void exitParens(IFLANGParser::ParensContext * /*ctx*/) override { }

  virtual void enterGreater(IFLANGParser::GreaterContext * /*ctx*/) override { }
  virtual void exitGreater(IFLANGParser::GreaterContext * /*ctx*/) override { }

  virtual void enterLess(IFLANGParser::LessContext * /*ctx*/) override { }
  virtual void exitLess(IFLANGParser::LessContext * /*ctx*/) override { }

  virtual void enterEqual(IFLANGParser::EqualContext * /*ctx*/) override { }
  virtual void exitEqual(IFLANGParser::EqualContext * /*ctx*/) override { }

  virtual void enterNotEqual(IFLANGParser::NotEqualContext * /*ctx*/) override { }
  virtual void exitNotEqual(IFLANGParser::NotEqualContext * /*ctx*/) override { }

  virtual void enterGreaterEqual(IFLANGParser::GreaterEqualContext * /*ctx*/) override { }
  virtual void exitGreaterEqual(IFLANGParser::GreaterEqualContext * /*ctx*/) override { }

  virtual void enterLessEqual(IFLANGParser::LessEqualContext * /*ctx*/) override { }
  virtual void exitLessEqual(IFLANGParser::LessEqualContext * /*ctx*/) override { }

  virtual void enterIntLogic(IFLANGParser::IntLogicContext * /*ctx*/) override { }
  virtual void exitIntLogic(IFLANGParser::IntLogicContext * /*ctx*/) override { }

  virtual void enterIdLogic(IFLANGParser::IdLogicContext * /*ctx*/) override { }
  virtual void exitIdLogic(IFLANGParser::IdLogicContext * /*ctx*/) override { }

  virtual void enterParensLogic(IFLANGParser::ParensLogicContext * /*ctx*/) override { }
  virtual void exitParensLogic(IFLANGParser::ParensLogicContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};


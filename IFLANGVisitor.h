
// Generated from IFLANG.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "IFLANGParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by IFLANGParser.
 */
class  IFLANGVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by IFLANGParser.
   */
    virtual std::any visitStats(IFLANGParser::StatsContext *context) = 0;

    virtual std::any visitBlank(IFLANGParser::BlankContext *context) = 0;

    virtual std::any visitPrintExpr(IFLANGParser::PrintExprContext *context) = 0;

    virtual std::any visitAssign(IFLANGParser::AssignContext *context) = 0;

    virtual std::any visitIfStmt(IFLANGParser::IfStmtContext *context) = 0;

    virtual std::any visitIF(IFLANGParser::IFContext *context) = 0;

    virtual std::any visitAdd(IFLANGParser::AddContext *context) = 0;

    virtual std::any visitSub(IFLANGParser::SubContext *context) = 0;

    virtual std::any visitMul(IFLANGParser::MulContext *context) = 0;

    virtual std::any visitDiv(IFLANGParser::DivContext *context) = 0;

    virtual std::any visitInt(IFLANGParser::IntContext *context) = 0;

    virtual std::any visitId(IFLANGParser::IdContext *context) = 0;

    virtual std::any visitParens(IFLANGParser::ParensContext *context) = 0;

    virtual std::any visitGreater(IFLANGParser::GreaterContext *context) = 0;

    virtual std::any visitLess(IFLANGParser::LessContext *context) = 0;

    virtual std::any visitEqual(IFLANGParser::EqualContext *context) = 0;

    virtual std::any visitNotEqual(IFLANGParser::NotEqualContext *context) = 0;

    virtual std::any visitGreaterEqual(IFLANGParser::GreaterEqualContext *context) = 0;

    virtual std::any visitLessEqual(IFLANGParser::LessEqualContext *context) = 0;

    virtual std::any visitIntLogic(IFLANGParser::IntLogicContext *context) = 0;

    virtual std::any visitIdLogic(IFLANGParser::IdLogicContext *context) = 0;

    virtual std::any visitParensLogic(IFLANGParser::ParensLogicContext *context) = 0;


};


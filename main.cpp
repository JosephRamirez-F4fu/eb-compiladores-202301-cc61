#include "IFLANGLexer.h"
#include "IFLANGParser.h"
#include "IFLANGBaseVisitor.h"

#include <algorithm>
#include <any>
#include <iostream>
#include <map>
#include <string>
#include <functional>
#include <fstream>
#include <sstream>
#include <iostream>

#include <any>
#include <llvm/ADT/APFloat.h>
#include <llvm/IR/BasicBlock.h>
#include <llvm/IR/Constants.h>
#include <llvm/IR/DerivedTypes.h>
#include <llvm/IR/Function.h>
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/Instructions.h>
#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/Type.h>
#include <llvm/IR/Value.h>

#include "antlr4-runtime.h"

class IFVisitorImpl : public IFLANGBaseVisitor
{

    std::any visitStats(IFLANGParser::StatsContext *ctx) override
    {
        return visitChildren(ctx);
    }

    std::any visitPrintExpr(IFLANGParser::PrintExprContext *ctx) override
    {

        std::vector<double> Args;
        std::vector<llvm::Type *> Doubles(Args.size(),
                                          llvm::Type::getDoubleTy(*context));
        llvm::FunctionType *FT = llvm::FunctionType::get(
            llvm::Type::getDoubleTy(*context), Doubles, false);

        F = llvm::Function::Create(
            FT, llvm::Function::ExternalLinkage, "_anon_", module.get());

        llvm::BasicBlock *BB = llvm::BasicBlock::Create(*context, "entry", F);
        builder->SetInsertPoint(BB);
        llvm::Value *val = std::any_cast<llvm::Value *>(visit(ctx->expr()));
        builder->CreateRet(val);
        std::cout << std::any_cast<int>(val) << std::endl;

        return std::any();
    }
    std::any visitAssign(IFLANGParser::AssignContext *ctx) override
    {
        auto id = ctx->ID()->getText();
        auto value = visit(ctx->expr());
        memory[id] = value;

        llvm::AllocaInst *Alloca = CreateEntryBlockAlloca(id);
        builder->CreateStore(std::any_cast<llvm::Value *>(value), Alloca);

        return std::any();
    }

    std::any visitIfStmt(IFLANGParser::IfStmtContext *ctx) override
    {
        visit(ctx->ifStatement());
        return std::any();
    }

    std::any visitIF(IFLANGParser::IFContext *ctx) override
    {

        llvm::BasicBlock *trueBlock = llvm::BasicBlock::Create(*context, "trueBlock", F);
        llvm::BasicBlock *falseBlock = llvm::BasicBlock::Create(*context, "falseBlock", F);
        llvm::BasicBlock *afterBlock = llvm::BasicBlock::Create(*context, "afterBlock", F);

        llvm::Value *cond = std::any_cast<llvm::Value *>(visit(ctx->logic()));
        if (!cond->getType()->isIntegerTy(1))
        {
            throw std::runtime_error("Condition is not a boolean");
        }

        builder->CreateCondBr(cond, trueBlock, falseBlock);

        builder->SetInsertPoint(trueBlock);
        for (auto stat : ctx->stat())
        {
            visit(stat);
        }
        builder->CreateBr(afterBlock);

        builder->SetInsertPoint(falseBlock);
        for (auto stat : ctx->stat())
        {
            visit(stat);
        }
        builder->CreateBr(afterBlock);

        builder->SetInsertPoint(afterBlock);

        return std::any();
    }

    std::any visitAdd(IFLANGParser::AddContext *ctx) override
    {
        auto left = visit(ctx->expr(0));
        auto right = visit(ctx->expr(1));
        llvm::Value *L = std::any_cast<llvm::Value *>(left);
        llvm::Value *R = std::any_cast<llvm::Value *>(right);
        return std::any(builder->CreateFAdd(L, R, "addtmp"));
    }

    std::any visitSub(IFLANGParser::SubContext *ctx) override
    {
        auto left = visit(ctx->expr(0));
        auto right = visit(ctx->expr(1));
        llvm::Value *L = std::any_cast<llvm::Value *>(left);
        llvm::Value *R = std::any_cast<llvm::Value *>(right);
        return std::any(builder->CreateFSub(L, R, "subtmp"));
    }

    std::any visitMul(IFLANGParser::MulContext *ctx) override
    {
        auto left = visit(ctx->expr(0));
        auto right = visit(ctx->expr(1));
        llvm::Value *L = std::any_cast<llvm::Value *>(left);
        llvm::Value *R = std::any_cast<llvm::Value *>(right);
        return std::any(builder->CreateFMul(L, R, "multmp"));
    }

    std::any visitDiv(IFLANGParser::DivContext *ctx) override
    {
        auto left = visit(ctx->expr(0));
        auto right = visit(ctx->expr(1));
        llvm::Value *L = std::any_cast<llvm::Value *>(left);
        llvm::Value *R = std::any_cast<llvm::Value *>(right);
        return std::any(builder->CreateFDiv(L, R, "divtmp"));
    }

    std::any visitInt(IFLANGParser::IntContext *ctx) override
    {
        auto numVal = std::stod(ctx->INT()->getText());
        llvm::Value *val = llvm::ConstantFP::get(*context, llvm::APFloat(numVal));
        return std::any(val);
    }
    std::any visitId(IFLANGParser::IdContext *ctx) override
    {
        auto id = ctx->ID()->getText();
        if (memory.find(id) != memory.end())
        {
            llvm::AllocaInst *Alloca = CreateEntryBlockAlloca(id);
            memory[id] = Alloca;
            return std::any(Alloca);
        }
        return std::any();
    }

    std::any visitParens(IFLANGParser::ParensContext *ctx) override
    {
        return visit(ctx->expr());
    }

    std::any visitGreater(IFLANGParser::GreaterContext *ctx) override
    {
        auto left = visit(ctx->logic(0));
        auto right = visit(ctx->logic(1));
        llvm::Value *L = std::any_cast<llvm::Value *>(left);
        llvm::Value *R = std::any_cast<llvm::Value *>(right);
        return std::any(builder->CreateFCmpUGT(L, R, "cmptmp"));
    }

    std::any visitLess(IFLANGParser::LessContext *ctx) override
    {
        auto left = visit(ctx->logic(0));
        auto right = visit(ctx->logic(1));
        llvm::Value *L = std::any_cast<llvm::Value *>(left);
        llvm::Value *R = std::any_cast<llvm::Value *>(right);
        return std::any(builder->CreateFCmpULT(L, R, "cmptmp"));
    }

    std::any visitEqual(IFLANGParser::EqualContext *ctx) override
    {
        auto left = visit(ctx->logic(0));
        auto right = visit(ctx->logic(1));
        llvm::Value *L = std::any_cast<llvm::Value *>(left);
        llvm::Value *R = std::any_cast<llvm::Value *>(right);
        return std::any(builder->CreateFCmpUEQ(L, R, "cmptmp"));
    }

    std::any visitNotEqual(IFLANGParser::NotEqualContext *ctx) override
    {
        auto left = visit(ctx->logic(0));
        auto right = visit(ctx->logic(1));
        llvm::Value *L = std::any_cast<llvm::Value *>(left);
        llvm::Value *R = std::any_cast<llvm::Value *>(right);
        return std::any(builder->CreateFCmpUNE(L, R, "cmptmp"));
    }

    std::any visitGreaterEqual(IFLANGParser::GreaterEqualContext *ctx) override
    {
        auto left = visit(ctx->logic(0));
        auto right = visit(ctx->logic(1));
        llvm::Value *L = std::any_cast<llvm::Value *>(left);
        llvm::Value *R = std::any_cast<llvm::Value *>(right);
        return std::any(builder->CreateFCmpUGE(L, R, "cmptmp"));
    }

    std::any visitLessEqual(IFLANGParser::LessEqualContext *ctx) override
    {
        auto left = visit(ctx->logic(0));
        auto right = visit(ctx->logic(1));
        llvm::Value *L = std::any_cast<llvm::Value *>(left);
        llvm::Value *R = std::any_cast<llvm::Value *>(right);
        return std::any(builder->CreateFCmpULE(L, R, "cmptmp"));
    }

    std::any visitIntLogic(IFLANGParser::IntLogicContext *ctx) override
    {
        auto numVal = std::stod(ctx->INT()->getText());
        llvm::Value *val = llvm::ConstantFP::get(*context, llvm::APFloat(numVal));
        return std::any(val);
    }

    std::any visitIdLogic(IFLANGParser::IdLogicContext *ctx) override
    {
        auto id = ctx->ID()->getText();
        if (memory.find(id) != memory.end())
        {
            llvm::AllocaInst *Alloca = CreateEntryBlockAlloca(id);
            memory[id] = Alloca;
            return std::any(Alloca);
        }
        return std::any();
    }

    std::any visitParensLogic(IFLANGParser::ParensLogicContext *ctx) override
    {
        return visit(ctx->logic());
    }

    std::map<std::string, std::any> memory;
    std::unique_ptr<llvm::LLVMContext> context;
    std::unique_ptr<llvm::Module> module;
    std::unique_ptr<llvm::IRBuilder<>> builder;

    llvm::Function *F;

    llvm::AllocaInst *CreateEntryBlockAlloca(llvm::StringRef varName)
    {
        llvm::IRBuilder<> TmpB(&F->getEntryBlock(), F->getEntryBlock().begin());
        return TmpB.CreateAlloca(llvm::Type::getDoubleTy(*context), nullptr,
                                 varName);
    }

public:
    void test()
    {
        std::error_code error;
        llvm::raw_fd_stream outLL("test.ll", error);
        module->print(outLL, nullptr);
    }
};

int main(int argc, char **argv)
{
    if (argc <= 1)
        return -1;
    std::ifstream is;
    is.open(argv[1]);
    antlr4::ANTLRInputStream input(is);
    IFLANGLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    IFLANGParser parser(&tokens);
    auto tree = parser.start();
    IFVisitorImpl eval;
    eval.visit(tree);
    eval.test();
    return 0;
}
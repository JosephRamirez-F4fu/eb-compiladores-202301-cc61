
// Generated from IFLANG.g4 by ANTLR 4.13.1


#include "IFLANGLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct IFLANGLexerStaticData final {
  IFLANGLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  IFLANGLexerStaticData(const IFLANGLexerStaticData&) = delete;
  IFLANGLexerStaticData(IFLANGLexerStaticData&&) = delete;
  IFLANGLexerStaticData& operator=(const IFLANGLexerStaticData&) = delete;
  IFLANGLexerStaticData& operator=(IFLANGLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag iflanglexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
IFLANGLexerStaticData *iflanglexerLexerStaticData = nullptr;

void iflanglexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (iflanglexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(iflanglexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<IFLANGLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "MUL", "DIV", "ADD", 
      "SUB", "GT", "LT", "EQ", "NEQ", "GEQ", "LEQ", "ID", "INT", "NEWLINE", 
      "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,20,106,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,1,0,1,0,1,1,1,
  	1,1,1,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,
  	1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,1,11,1,11,1,12,1,12,1,12,1,13,1,13,
  	1,13,1,14,1,14,1,14,1,15,1,15,1,15,1,16,4,16,86,8,16,11,16,12,16,87,1,
  	17,4,17,91,8,17,11,17,12,17,92,1,18,3,18,96,8,18,1,18,1,18,1,19,4,19,
  	101,8,19,11,19,12,19,102,1,19,1,19,0,0,20,1,1,3,2,5,3,7,4,9,5,11,6,13,
  	7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,
  	19,39,20,1,0,3,2,0,65,90,97,122,1,0,48,57,2,0,9,9,32,32,109,0,1,1,0,0,
  	0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,
  	0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,
  	0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,
  	35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,1,41,1,0,0,0,3,43,1,0,0,0,5,46,1,
  	0,0,0,7,51,1,0,0,0,9,56,1,0,0,0,11,58,1,0,0,0,13,60,1,0,0,0,15,62,1,0,
  	0,0,17,64,1,0,0,0,19,66,1,0,0,0,21,68,1,0,0,0,23,70,1,0,0,0,25,72,1,0,
  	0,0,27,75,1,0,0,0,29,78,1,0,0,0,31,81,1,0,0,0,33,85,1,0,0,0,35,90,1,0,
  	0,0,37,95,1,0,0,0,39,100,1,0,0,0,41,42,5,61,0,0,42,2,1,0,0,0,43,44,5,
  	105,0,0,44,45,5,102,0,0,45,4,1,0,0,0,46,47,5,116,0,0,47,48,5,104,0,0,
  	48,49,5,101,0,0,49,50,5,110,0,0,50,6,1,0,0,0,51,52,5,101,0,0,52,53,5,
  	108,0,0,53,54,5,115,0,0,54,55,5,101,0,0,55,8,1,0,0,0,56,57,5,40,0,0,57,
  	10,1,0,0,0,58,59,5,41,0,0,59,12,1,0,0,0,60,61,5,42,0,0,61,14,1,0,0,0,
  	62,63,5,47,0,0,63,16,1,0,0,0,64,65,5,43,0,0,65,18,1,0,0,0,66,67,5,45,
  	0,0,67,20,1,0,0,0,68,69,5,62,0,0,69,22,1,0,0,0,70,71,5,60,0,0,71,24,1,
  	0,0,0,72,73,5,61,0,0,73,74,5,61,0,0,74,26,1,0,0,0,75,76,5,33,0,0,76,77,
  	5,61,0,0,77,28,1,0,0,0,78,79,5,62,0,0,79,80,5,61,0,0,80,30,1,0,0,0,81,
  	82,5,60,0,0,82,83,5,61,0,0,83,32,1,0,0,0,84,86,7,0,0,0,85,84,1,0,0,0,
  	86,87,1,0,0,0,87,85,1,0,0,0,87,88,1,0,0,0,88,34,1,0,0,0,89,91,7,1,0,0,
  	90,89,1,0,0,0,91,92,1,0,0,0,92,90,1,0,0,0,92,93,1,0,0,0,93,36,1,0,0,0,
  	94,96,5,13,0,0,95,94,1,0,0,0,95,96,1,0,0,0,96,97,1,0,0,0,97,98,5,10,0,
  	0,98,38,1,0,0,0,99,101,7,2,0,0,100,99,1,0,0,0,101,102,1,0,0,0,102,100,
  	1,0,0,0,102,103,1,0,0,0,103,104,1,0,0,0,104,105,6,19,0,0,105,40,1,0,0,
  	0,5,0,87,92,95,102,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  iflanglexerLexerStaticData = staticData.release();
}

}

IFLANGLexer::IFLANGLexer(CharStream *input) : Lexer(input) {
  IFLANGLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *iflanglexerLexerStaticData->atn, iflanglexerLexerStaticData->decisionToDFA, iflanglexerLexerStaticData->sharedContextCache);
}

IFLANGLexer::~IFLANGLexer() {
  delete _interpreter;
}

std::string IFLANGLexer::getGrammarFileName() const {
  return "IFLANG.g4";
}

const std::vector<std::string>& IFLANGLexer::getRuleNames() const {
  return iflanglexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& IFLANGLexer::getChannelNames() const {
  return iflanglexerLexerStaticData->channelNames;
}

const std::vector<std::string>& IFLANGLexer::getModeNames() const {
  return iflanglexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& IFLANGLexer::getVocabulary() const {
  return iflanglexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView IFLANGLexer::getSerializedATN() const {
  return iflanglexerLexerStaticData->serializedATN;
}

const atn::ATN& IFLANGLexer::getATN() const {
  return *iflanglexerLexerStaticData->atn;
}




void IFLANGLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  iflanglexerLexerInitialize();
#else
  ::antlr4::internal::call_once(iflanglexerLexerOnceFlag, iflanglexerLexerInitialize);
#endif
}

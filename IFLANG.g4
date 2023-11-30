grammar IFLANG;

start
    :stat+ #Stats
    ;

stat
    : NEWLINE                       # Blank
    | expr NEWLINE                  # PrintExpr
    | ID '=' expr NEWLINE           # Assign
    | ifStatement                   # IfStmt
    ;

ifStatement
    : 'if' logic 'then' NEWLINE  stat+ ('else' stat+)? NEWLINE #IF
    ;

expr
    : ('+' expr expr)               # Add
    | ('-' expr expr)               # Sub
    | ('*' expr expr)               # Mul
    | ('/' expr expr)               # Div
    | INT                            # Int
    | ID                             # Id
    | '(' expr ')'                   # Parens
    ;
logic
    : ('>' logic logic)               # Greater
     | ('<' logic logic)               # Less
     | ('==' logic logic)              # Equal
     | ('!=' logic logic)              # NotEqual
     | ('>=' logic logic)              # GreaterEqual
     | ('<=' logic logic)              # LessEqual
     | INT                            # IntLogic
     | ID                             # IdLogic
     | '(' logic ')'                   # ParensLogic
     ;


MUL: '*' ;
DIV: '/' ;
ADD: '+' ;
SUB: '-' ;
GT : '>' ;
LT : '<' ;
EQ : '==' ;
NEQ: '!=' ;
GEQ: '>=' ;
LEQ: '<=' ;

ID      : [a-zA-Z]+ ;
INT     : [0-9]+ ;
NEWLINE : '\r'? '\n' ;
WS      : [ \t]+ -> skip ;

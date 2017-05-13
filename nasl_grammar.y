
%{

int number_row = 0;
%}

%token EQ NE LT GT LE GE
%token SEARCH_SUBSTR
%token NOT_SEARCH_SUBSTR
%token POWER
%token ADD SUB
%token MUL DIV
%token MOD /* a % b*/
%token XOR
%token OR

%token IF
%token ELSE
%token FOR
%token FOREACH
%token WHILE
%token REPEAT
%token UNTIL

%token ASSIGN
%token RIGHT_ASSIGN
%token RIGHT_RIGHT_ASSIGN
%token LEFT_ASSIGN
%token ADD_ASSIGN
%token SUB_ASSIGN
%token MUL_ASSIGN
%token DIV_ASSIGN
%token MOD_ASSIGN
%token AND_ASSIGN
%token XOR_ASSIGN
%token OR_ASSIGN
%token RIGHT_OP
%token RIGHT_OP_3
%token LEFT_OP
%token INC_OP
%token DEC_OP
%token AND_OP
%token AND_OP

%token SEMICOLON
%token LEFT_BRACE
%token RIGHT_BRACE
%token COMMA
%token COLON
%token LEFT_PARENTHESIS
%token RIGHT_PARENTHESIS
%token LEFT_SQ_BRACKET
%token RIGHT_SQ_BRACKET
%token POINT
%token NOT

%start start
%%

start: 
	|comm_decl_list
	;
	
comm_decl_list:
	comm_decl
	| comm_decl comm_decl_list
	;
	
comm_decl: comm_decl
	|func_decl
	;
	
func_decl: FUNCTION '(' arg_decl ')' body
	;

arg_decl:  
	| arg_decl_1 
	;

arg_decl_1: identifier 
       | identifier ',' arg_decl_1
	   ;

body: '{' comm_list '}' 
	| '{' '}' 
	;
%%
yyerror(char const *s)
{
	fprintf(stderr, "%s", s);
}

int main()
{
	return(yyparse());
}


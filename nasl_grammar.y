
%{

int number_row = 0;
%}

%token EQ NE LT GT LE GE
%token SEARCH_SUBSTR
%token NOT_SEARCH_SUBSTR
%token POWER
%token ADD SUB
%token MUL DIV
%token MOD 
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
	|command_declaration_list
	;
	
command_declaration_list:
						command_declaration
						| command_declaration command_declaration_list
						;
	
command_declaration: 
					command_declaration
					|function_declaration
					;
	
function_declaration: 
					FUNCTION '(' argument_declaration ')' body
					;

argument_declaration:  
					| first_argument_declaration 
					;

first_argument_declaration: 
							identifier 
							| identifier ',' first_argument_declaration
							;

body: 
	'{' command_list '}' 
	| '{' '}' 
	;
	
command_list: 
			command
			| command command_list
			;
	
command: 
		simple_command ';' 
		| body 
		| if_body 
		| loop 
		;
		
simple_command : 
				| aff 
				| post_pre_incr 
				| rep
				| func_call 
				| ret 
				| inc 
				| loc 
				| glob
				| BREAK 
				| CONTINUE 
				;
				
ret: 
	RETURN expression
	| RETURN
	;
	
if_body: 
		IF '(' expression ')' command
		| IF '(' expression ')' command ELSE command
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


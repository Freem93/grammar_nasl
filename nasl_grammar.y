
%{

#define YYERROR_VERBOSE 1
#define YYDEBUG 1
#define YYPRINT(file, type, value) fprintf(file, "%d", value);
extern int yylineno;
%}

%token EQ NE LT GT LE GE
%token SEARCH_SUBSTR
%token NOT_SEARCH_SUBSTR
%token POWER
%token ADD SUB
%token MUL DIV
%token MOD 
%token XOR
%token OR OR_OP

%token IF
%token ELSE
%token FOR
%token FOREACH
%token WHILE
%token REPEAT
%token UNTIL
%token BREAK
%token CONTINUE
%token RETURN
%token INCLUDE
%token STR_FIRST
%token FUNCTION
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
%token AND

%token SEMICOLON
%token LEFT_BRACE
%token RIGHT_BRACE
%token COMMA
%token COLON
%token LEFT_PARENTHESIS
%token RIGHT_PARENTHESIS
%token LEFT_SQ_BRACKET
%token RIGHT_SQ_BRACKET
%token NOT

%token BIT
%token NOT_BIT
%token ARROW
%token ASSIGN_BIT

%token INTEGER

%token IDENTIFIER
%token LOCAL
%token GLOBAL



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
					command
					|function_declaration
					;
	
function_declaration: 
					FUNCTION LEFT_PARENTHESIS argument_declaration RIGHT_PARENTHESIS body
					;

argument_declaration:  
					| first_argument_declaration 
					;

first_argument_declaration: 
							identifier 
							| identifier ',' first_argument_declaration
							;

body: 
	LEFT_BRACE command_list RIGHT_BRACE 
	| LEFT_BRACE RIGHT_BRACE 
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
				| post_pre_command 
				| function_call 
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
		IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS command
		| IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS command ELSE command
		;
	
loop: 
	for_loop 
	| while_loop 
	| repeat_loop 
	| foreach_loop 
	;

for_loop: 
		FOR LEFT_PARENTHESIS aff_func ';' expression ';' aff_func RIGHT_PARENTHESIS command
		;

while_loop: 
			WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS command
			;

repeat_loop: 
			REPEAT command UNTIL expression ';'
			;

foreach_loop: 
			FOREACH identifier LEFT_PARENTHESIS expression RIGHT_PARENTHESIS  command
			;

aff_func: 
		| aff 
		| post_pre_command 
		| function_call 
		;			
		
inc: 
	INCLUDE LEFT_PARENTHESIS STR_FIRST RIGHT_PARENTHESIS
	;
	
function_call: 
			identifier LEFT_PARENTHESIS argument_list RIGHT_PARENTHESIS
			;
	
argument_list : 
				| first_argument_list | 
				;
first_argument_list: 
					argument 
					| argument ',' first_argument_list
					;

argument: 
		expression
		| identifier ':' expression
		;
		
aff:    
	lvalue '=' expression
	| lvalue ADD_ASSIGN expression
    | lvalue SUB_ASSIGN expression
	| lvalue MUL_ASSIGN expression
	| lvalue DIV_ASSIGN expression  
	| lvalue MOD_ASSIGN expression
	| lvalue RIGHT_ASSIGN expression
	| lvalue RIGHT_RIGHT_ASSIGN expression
	| lvalue LEFT_ASSIGN expression
	;
	
lvalue: 
		identifier 
		| array_elem 
		;
		
identifier: 
			IDENTIFIER
			;

array_elem: 
			identifier '[' array_index ']'
			;

array_index: 
			expression
			;

post_pre_command:
				INC_OP lvalue 
				| DEC_OP lvalue
				| lvalue INC_OP 
				| lvalue DEC_OP 
				;
				
expression:
			LEFT_PARENTHESIS expression RIGHT_PARENTHESIS
			| expression AND_OP expression
			| NOT expression 
			| expression OR_OP expression
			| expression ADD expression
			| expression SUB expression
			| '-' expression 
			| BIT expression
			| expression DIV expression 
			| expression MOD expression 
			| expression AND expression 
			| expression XOR expression
			| expression OR expression 
			| expression RIGHT_OP expression 
			| expression RIGHT_OP_3 expression 
			| expression LEFT_OP expression
			| post_pre_command
			| expression MUL expression
			| expression POWER expression 
			| expression NE expression 
			| expression EQ expression
			| expression LT expression
			| expression GT expression 
			| expression LE expression 
			| expression GE expression
			| expression ASSIGN_BIT expression 
			| expression NOT_BIT expression
			| expression SEARCH_SUBSTR expression 
			| expression NOT_SEARCH_SUBSTR expression
			| var 	
			| aff 
			| ipaddr 
			| atom 
			| const_array 
			;
			
const_array:    
			'[' list_array_data ']' 
			;

list_array_data: 
				array_data 
				| array_data ',' list_array_data
				;

array_data: 
			simple_array_data 
			| STR_FIRST ARROW simple_array_data 
			;
			
		
			
atom: 
	INTEGER 
    | STR_FIRST
	; 

simple_array_data: 
				atom
				;

var: 
	var_name 
	| array_elem 
	| function_call
	;

var_name: 
		identifier
		;
		
ipaddr: 
		INTEGER '.' INTEGER '.' INTEGER '.' INTEGER
		;

loc: 
	LOCAL argument_declaration
	;

glob: 
	GLOBAL argument_declaration
	;		
			
	
%%
yyerror(char const *s)
{
	
	printf("\n%d\n", yylineno);
	fflush(stdout);

	fprintf(stderr, "%s", s);
}
extern char yytext[];
extern int column;

lex()
{
;
}

int main()
{
	return(yyparse());
}


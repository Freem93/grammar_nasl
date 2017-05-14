D [0-9]
L [a-zA-Z_]
H [a-fA-F0-9]
E [Ee][+-]?{D}+
FS (f|F|l|L)
IS (u|U|l|L)*

%{
#include <stdio.h>
#include "y_tab.h"
void count();

%}

%option outfile="lex.yy.c"
%option noyywrap
%option yylineno


%%
[#].* { count(); return(COMMENT); }
"function" { count(); return(FUNCTION); }
"local_var" { count(); return(LOCAL); }
"global_var" { count(); return(GLOBAL); }
">>=" { count(); return(RIGHT_ASSIGN); }
">>>=" { count(); return(RIGHT_RIGHT_ASSIGN); }
"<<=" { count(); return(LEFT_ASSIGN); }
"+=" { count(); return(ADD_ASSIGN); }
"-=" { count(); return(SUB_ASSIGN); }
"*=" { count(); return(MUL_ASSIGN); }
"/=" { count(); return(DIV_ASSIGN); }
"%=" { count(); return(MOD_ASSIGN); }
"&=" { count(); return(AND_ASSIGN); }
"^=" { count(); return(XOR_ASSIGN); }
"|=" { count(); return(OR_ASSIGN); }
">>" { count(); return(RIGHT_OP); }
">>>" { count(); return(RIGHT_OP_3); }
"<<" { count(); return(LEFT_OP); }
"++" { count(); return(INC_OP); }
"--" { count(); return(DEC_OP); }

"&&" { count(); return(AND_OP); }
"||" { count(); return(OR_OP); }
"==" { count(); return(EQ); }
"!=" { count(); return(NE); }
";" { count(); return(SEMICOLON); }
"{" { count(); return(LEFT_BRACE); }
"}" { count(); return(RIGHT_BRACE); }
"," { count(); return(COMMA); }
":" { count(); return(COLON); }
"=" { count(); return(ASSIGN); }
"(" { count(); return(LEFT_PARENTHESIS); }
")" { count(); return(RIGHT_PARENTHESIS); }
"[" { count(); return(LEFT_SQ_BRACKET); }
"]" { count(); return(RIGHT_SQ_BRACKET); }
"&" { count(); return(AND); }
"!" { count(); return(NOT); }

"=~" { count(); return(ASSIGN_BIT); }
"!~" { count(); return(NOT_BIT); }
"~" { count(); return(BIT); }
"->" { count(); return(ARROW); }
\"([^\\"\r\n]|(\\.))*\" { count(); return(STR_FIRST); }
[-]?[0-9]+ { count(); return(INTEGER); }

"else" { count(); return (ELSE); }

"if" { count(); return(IF); }
"include" { count(); return(INCLUDE); }
"return" { count(); return(RETURN); }
"break" { count(); return(BREAK); }


"continue" { count(); return(CONTINUE); }
"for" { count(); return(FOR); }
"foreach" { count(); return(FOREACH); }
"while" { count(); return(WHILE); }
"repeat" { count(); return(REPEAT); }
"until" { count(); return(UNTIL); }



"><" { count(); return(SEARCH_SUBSTR); }
">|<" { count(); return(NOT_SEARCH_SUBSTR); }
"**" { count(); return(POWER); }
"-" { count(); return(SUB); }
"+" { count(); return(ADD); }
"*" { count(); return(MUL); }
"/" { count(); return(DIV); }
"%" { count(); return(MOD); }
"<" { count(); return(LT); }
">" { count(); return(GT); }
"<=" { count(); return(LE); }
">=" { count(); return(GE); }
"^" { count(); return(XOR); }
"|" { count(); return(OR); }
"?" { count(); return('?'); }
"." { count(); return(POINT); }



[a-zA-Z_0-9]+ { count(); return(IDENTIFIER); }

[ \t\v\n\f] { count(); }


%%



int column = 0;
void count()
{
	int i;
	for (i = 0; yytext[i] != '\0'; i++)
		if (yytext[i] == '\n')
			column = 0;
		else if (yytext[i] == '\t')
			column += 8 - (column % 8);
		else
		column++;
	ECHO;
}

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
[#].*\n { /*Коммент-рабочий*/ }
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
"->" { count(); return(PTR_OP); }
"&&" { count(); return(AND_OP); }
"||" { count(); return(OR_OP); }
"<=" { count(); return(LE_OP); }
">=" { count(); return(GE_OP); }
"==" { count(); return(EQ_OP); }
"!=" { count(); return(NE_OP); }
";" { count(); return(SEMICOLON); }
"{" { count(); return(LEFT_BRACE); }
"}" { count(); return(RIGHT_BRACE); }
"," { count(); return(COMMA); }
":" { count(); return(COLON); }
"=" { count(); return('='); }
"(" { count(); return('('); }
")" { count(); return(')'); }
"[" { count(); return('['); }
"]" { count(); return(']'); }
"." { count(); return('.'); }
"&" { count(); return('&'); }
"!" { count(); return('!'); }

"><" { count(); return(SEARCH_STR); }
"**" { count(); return(POWER); }
"-" { count(); return('-'); }
"+" { count(); return('+'); }
"*" { count(); return('*'); }
"/" { count(); return('/'); }
"%" { count(); return('%'); }
"<" { count(); return('<'); }
">" { count(); return('>'); }
"^" { count(); return('^'); }
"|" { count(); return('|'); }
"?" { count(); return('?'); }
[ \t\v\n\f] { count(); }
. { /* ignore bad characters */ }

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

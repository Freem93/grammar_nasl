flex.exe lex.l
bison.exe -dy nasl_grammar.y

gcc lex.yy.c y_tab.c -o parse.exe

parse.exe < test.nasl

pause
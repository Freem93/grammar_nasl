del les.yy.cc
del parse.exe
del y_tab.c
del y_tab.h
flex.exe lex.l
bison.exe -dy nasl_grammar.y
gcc lex.yy.c y_tab.c -o parse.exe

parse.exe < tests\signed.nasl
parse.exe < tests\test_blowfish.nasl
parse.exe < tests\test_bn.nasl
parse.exe < tests\test_dh.nasl
parse.exe < tests\test_dsa.nasl
parse.exe < tests\test_hexstr.nasl
parse.exe < tests\test_isotime.nasl
parse.exe < tests\test_md.nasl
parse.exe < tests\test_privkey.nasl
parse.exe < tests\test_rsa.nasl
parse.exe < tests\test_socket.nasl
parse.exe < tests\testsuiteinit.nasl
parse.exe < tests\testsuitesummary.nasl
pause
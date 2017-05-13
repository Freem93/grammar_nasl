
%{

int number_row = 0;
%}

%token DIGIT
%start line
%%

line:
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


%{
#include <stdio.h>
#include "y.tab.h"

extern YYSTYPE yylval;
%}

%%

[ \t];

[A-Z] {
 	yylval.s = yytext;
 	return LETTER;
}

0|[1-9][0-9]* {
 	yylval.s = yytext;
 	return INTEGER;
}

[0-9]+\.[0-9]+ {
	yylval.s = yytext;
	return DECIMAL;
}

%%
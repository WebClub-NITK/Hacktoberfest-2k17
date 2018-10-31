%{
#include "y.tab.h"
%}

%%
[0-9]+ {
         yylval.str=yytext[0];
         return NUM; 
        }
. return yytext[0];
\n return 0;
%%

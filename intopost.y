%{
 #include<stdio.h>
 #include<math.h>
 int k=0;
 int i;
 char sym[28];
%}
%union{
       char str;
      }
%token <str> NUM
%left '-''+'
%left '*''/'
%type <str> exp

%%
exp:NUM {$$=$1;sym[k]=(char)$$;k++; }
| exp '-' exp {sym[k]='-';k++;}
| exp '*' exp {sym[k]='*';k++;}
| exp '+' exp {sym[k]='+';k++;}
| exp '/' exp {sym[k]='/';k++;}
| '(' exp ')' {$$=(char)$2;}
;
%%

main()
{
int i;
printf("Enter the Expression\n");
if(yyparse()==0)
{
for(i=0;i<k;i++)
{
 printf("%c",sym[i]);
}
printf("\nValid\n");
}
}

yywrap(){}

yyerror()
{
printf("Error\n");
} 

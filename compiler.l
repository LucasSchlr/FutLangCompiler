%{
  #include<stdio.h>
  #include<stdlib.h>
  #include<compiler.tab.h>    
%}

%option noyywrap
 
%%

[ ]+            {  printf("encontrei espaco\n"); return ' '; }

jogada_ensaiada { return K_JOG_ENS; }
passe_longo     { return K_PASSE_LONGO; }
tava_impedido   { return K_TAVA_IMPEDIDO; }
dar_entrevista  { return K_DAR_ENTREVISTA; }
jogada_valida   { return K_JOGADA_VALIDA; }
lancamento      { return K_LANCAMENTO; }
rebote          { return yytext[0]; }

[,\(\){};]      { printf("enontrei controldrd\n"); return yytext[0]; }
[-+*/]          { printf("enontrei controldrd\n");  yylval.string=malloc(yyleng); sprintf(yylval.string,"%s",yytext); return OPERATOR; }
:=              { printf("encontrei attr\n"); return ATRIBUITION; }
[a-zA-Z0-9_]+   { printf("encontrei IDENTIFIER: |%s|\n", yytext); yylval.string=malloc(yyleng); sprintf(yylval.string,"%s",yytext); return IDENTIFIER; }

%%

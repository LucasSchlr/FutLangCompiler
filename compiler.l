%option noyywrap 

%{
#include "y.tab.h"

int yyparse();

%}

%%


"jogada_ensaiada" {printf("encontrei jogada_ensaiada\n"); return K_JOGADA_ENSAIADA;}
"passe_longo"     {printf("encontrei passe_longo\n"); return K_PASSE_LONGO;}
"tava_impedido"   {printf("encontrei tava_impedido\n"); return K_TAVA_IMPEDIDO;}
"dar_entrevista"  {printf("encontrei dar_entrevista\n"); return K_DAR_ENTREVISTA;}
"jogada_valida"   {printf("encontrei jogada_valida\n"); return K_JOGADA_VALIDA;}
"lancamento"      {printf("encontrei lancamento\n"); return K_LANCAMENTO;}
"rebote"          {printf("encontrei rebote\n"); return K_REBOTE;}
"futlang_init"    {printf("encontrei jogada_ensaiada\n"); return K_FUTLANG_INIT;}

\"(\\.|[^"\\])*\"         {
  printf("encontrei uma string\n");
	yylval.vName=malloc(yyleng); 
	sprintf(yylval.vName,"%s",yytext);
  return VAR;
}

"++"|"--" {
	yylval.vName=malloc(yyleng); 
	sprintf(yylval.vName,"%s",yytext);
  return FOR_OPERATOR;
}

"+"|"-"|"*"|"/"|"^" {
	yylval.vName=malloc(yyleng); 
	sprintf(yylval.vName,"%s",yytext);
	return OPERATOR;
}

"=="|">"|">="|"<"|"<="|"!=" {
	yylval.vName=malloc(yyleng); 
	sprintf(yylval.vName,"%s",yytext);
	return CMP;
}

"("|")"|"{"|"}" {
	return yytext[0];
}

[0-9]+ {
	yylval.iValue=malloc(yyleng); 
	sprintf(yylval.iValue,"%s",yytext);
//  printf("encontrei number:|%s|\n", yytext);
	return NUMBER;
	}

[A-Za-z0-9_]+ {
	yylval.vName=malloc(yyleng); 
	sprintf(yylval.vName,"%s",yytext);
//  printf("encontrei var:|%s|\n", yytext);
	return VAR;
}

":=" {
  return yytext[0];
}

[=;,] {
	return yytext[0];
}

[ \t\n] ;

.	{
	return UNK;
	}

"//".*$   { /*komentarz*/ }

%%

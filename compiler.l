%option noyywrap 
/* eliminuje jakis rzaki bug wystepujacy we flexie, gdzie funkcja yywrap() wywolywana na koncu pliku nie dziala tak jak powinna z niokreslonych przyczyn */

%{
#include "y.tab.h"

int yyparse();

%}

%%


"jogada_ensaiada" return K_JOGADA_ENSAIADA;
"passe_longo"     return K_PASSE_LONGO;
"tava_impedido"   return K_TAVA_IMPEDIDO;
"dar_entrevista"  return K_DAR_ENTREVISTA;
"jogada_valida"   return K_JOGADA_VALIDA;
"lancamento"      return K_LANCAMENTO;
"rebote"          return K_REBOTE;
"futlang_init"    return K_FUTLANG_INIT;

\"(\\.|[^"\\])*\"         {
  printf("encontrei uma string\n");
	yylval.vName=malloc(yyleng); 
	sprintf(yylval.vName,"%s",yytext);
  return VAR;
}

"++"|"--" {
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
	yylval.iValue=atoi(yytext);
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

%option noyywrap 

%{
#include "y.tab.h"

int yyparse();

%}

%%

"jogada_ensaiada" {return K_JOGADA_ENSAIADA;}
"passe_longo"     {return K_PASSE_LONGO;}
"tava_impedido"   {return K_TAVA_IMPEDIDO;}
"dar_entrevista"  {return K_DAR_ENTREVISTA;}
"jogada_valida"   {return K_JOGADA_VALIDA;}
"lancamento"      {return K_LANCAMENTO;}
"rebote"          {return K_REBOTE;}
"futlang_init"    {return K_FUTLANG_INIT;}

\"(\\.|[^"\\])*\" {
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
	return NUMBER;
	}

[A-Za-z0-9_]+ {
	yylval.vName=malloc(yyleng); 
	sprintf(yylval.vName,"%s",yytext);
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

%{
  #include<stdio.h>
  #include<stdlib.h>
  #include<string.h>
  
  extern int yylex();
  extern FILE *yyin;
  void yyerror(char *msg);
%}

%union{
  char *string;
  int integer;
}


%type <string> MATH_OPERATION   
%type <string> ESPACO ASSIGMENT OPERANDO

%token <string>  K_JOG_ENS
%token <string>  K_PASSE_LONGO
%token <string>  K_TAVA_IMPEDIDO
%token <string>  K_DAR_ENTREVISTA
%token <string>  K_JOGADA_VALIDA
%token <string>  K_LANCAMENTO

%token <string>  IDENTIFIER ATRIBUITION OPERATOR
%token <integer> NUMBER 

%%

S :
  ASSIGMENT   {
	    FILE *fptr;	
	    fptr = fopen("D:\\OneDrive\\Documentos\\Escola\\AulasFACCAT\\Compiladores\\TrabalhoG2\\output.js","w"); 
      //fwrite(&$1, sizeof($1), 1, fptr); 
      fprintf(fptr, "%s", $1);
    	fclose(fptr); 
    }
  ;

ASSIGMENT :
  IDENTIFIER ESPACO ATRIBUITION ESPACO MATH_OPERATION ';'{
      printf("ASSIGMENT\n");
      char *tmp = (char*) malloc (200);
      sprintf(tmp, "%s=%s", $1, $5);
      $$ = tmp; 
  }
  ;

MATH_OPERATION : 
  OPERANDO { $$ = $1; }
  | '(' ESPACO MATH_OPERATION ESPACO ')' {    
      char *tmp = (char*) malloc (200);
      sprintf(tmp, "(%s)", $3);
      $$ = tmp; 
    }
  | MATH_OPERATION ESPACO OPERATOR ESPACO OPERANDO {
      char *tmp = (char*) malloc (200);
      sprintf(tmp, "%s%s%s", $1, $3, $5);
      $$ = tmp; 
    }
  ; 

OPERANDO : IDENTIFIER {$$ = $1;}
  ;

ESPACO: 
  ' '      {printf("espaco\n");}
  | /* empty */  {printf("also espaco\n");}
  ;

%%

void yyerror(char *msg){
  fprintf(stderr, "erro: %s\n", msg);
  exit(1);
}


int main(){
  printf("custom main\n");
  yyin = fopen("D:\\OneDrive\\Documentos\\Escola\\AulasFACCAT\\Compiladores\\TrabalhoG2\\input.bola","r"); 
  yyparse();
  return 0;
}

#include "lex.yy.c"
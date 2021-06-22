%{
  #include<stdio.h>
  #include<stdlib.h>
  #include<string.h>

	/* Funkcje narzedzia lex */
  FILE *yyin;
	int yylex();
	void yyerror(char *msg);

%}

%union {
    int iValue;
    char *vName;
  	char *Instructions;
    char *Expressions;
};

/* Wyrażenia nieterminalne */
%start PROGRAM //START of BISON interpratation
%type <Expressions> EXP //EXPRESSION - Wyrazenie
%type <iValue> CONDITION //CONDITION
%type <Instructions> ASSIGN // VAR ASSIGMENT
%type <Instructions> INSTRUCTION
%type <Instructions> PARAM_LIST // VAR ASSIGMENT
%type <vName> VAR // VARIABLE

/* Tokeny z typem */
%token <iValue> NUMBER
%token <vName> CMP // COMPARATOR
%token <vName> OPERATOR //Instruction operator

/* Tokeny bez typu */
%token UNK PRINT VAR IF WHILE K_JOGADA_ENSAIADA K_PASSE_LONGO K_TAVA_IMPEDIDO K_DAR_ENTREVISTA K_JOGADA_VALIDA K_LANCAMENTO K_REBOTE K_FUTLANG_INIT FOR_OPERATOR


%%
PROGRAM : INSTRUCTION { 
				 printf("something 12\n");
		}
		| /* nic */
		;
    //com a adição de INSTRUCTION + O RESTANTE ele ta juntando TODO o input para "instruction" para depois variar para program
    // TENTAR ADICIONAR K_FUTLANG_INIT

INSTRUCTION : 
      K_DAR_ENTREVISTA EXP ';'{ 
				 printf("something 10\n");}
      | VAR '(' PARAM_LIST ')'';'{
          printf("something 14\n");
      }
			| ASSIGN ';' { 
				 printf("something 9\n"); }
			| K_PASSE_LONGO '(' CONDITION ')' '{' INSTRUCTION '}' { 
				 printf("something 8\n");
			}
      | K_PASSE_LONGO '(' CONDITION ')' '{' INSTRUCTION '}' K_TAVA_IMPEDIDO '{' INSTRUCTION '}' { 
				 printf("something 8.1\n");
			}
			| K_JOGADA_VALIDA  K_JOGADA_VALIDA '(' CONDITION ')' '{' INSTRUCTION '}'{
				 printf("something 7\n");
			}
      | K_JOGADA_ENSAIADA VAR '('PARAM_LIST')' '{' INSTRUCTION '}'{
        printf("something 13\n");
      }
      | K_REBOTE EXP ';'{
        printf("something 15\n");
      }
			| K_LANCAMENTO '(' VAR ';' CONDITION ';' VAR FOR_OPERATOR ')' '{' INSTRUCTION '}' {
				 printf("V2 FOR LOOP\n");
			}
      /////////////////////////
      | INSTRUCTION K_DAR_ENTREVISTA EXP ';'{ 
				 printf("V2 something 10\n");}
      | INSTRUCTION VAR '('PARAM_LIST')'';'{
          printf("V2 something 14\n");
      }
			| INSTRUCTION ASSIGN ';' { 
				 printf("V2 something 9\n"); }
			| INSTRUCTION K_PASSE_LONGO '(' CONDITION ')' '{' INSTRUCTION '}' { 
				 printf("V2 something 8\n");
			}
      | INSTRUCTION K_PASSE_LONGO '(' CONDITION ')' '{' INSTRUCTION '}' K_TAVA_IMPEDIDO '{' INSTRUCTION '}' { 
				 printf("V2 something 8.1\n");
			}
      | INSTRUCTION K_JOGADA_ENSAIADA VAR '(' PARAM_LIST ')' '{' INSTRUCTION '}'{
        printf("V2 something 13\n");
      }
			| INSTRUCTION K_JOGADA_VALIDA '(' CONDITION ')' '{' INSTRUCTION '}' {
				 printf("V2 something 7\n");
			}
      | INSTRUCTION K_REBOTE EXP ';'{
        printf("V2 something 15\n");
      }
			| INSTRUCTION K_LANCAMENTO '(' VAR ';' CONDITION ';' VAR FOR_OPERATOR ')' '{' INSTRUCTION '}' {
				 printf("V2 FOR LOOP\n");
			}
			;

ASSIGN : VAR ':=' EXP { 
				 printf("something 6\n");}

EXP : NUMBER { 
				 printf("something 5: %d\n", $1);
  }
	| VAR { 
				 printf("something 4: %s\n", $1);
		}
	| EXP OPERATOR NUMBER { 
				 printf("something 3\n");
	}
	| EXP OPERATOR VAR { 
				 printf("something 2\n");
	}
	;

PARAM_LIST
  : VAR {printf("PARAM_LIST 1\n");}
  | NUMBER {printf("PARAM_LIST 1\n");}
  | PARAM_LIST ',' VAR {
      printf("PARAM_LIST 2\n");
    }
  | PARAM_LIST ',' NUMBER {
      printf("PARAM_LIST 2\n");
    }
  |  /* empty */
  ;

CONDITION : EXP { 
				 printf("something 1\n");
			}
			| EXP CMP EXP {
				 printf("something\n");
			}
			;

%%

void yyerror(char *msg){
  fprintf(stderr, "erro: %s\n", msg);
  exit(1);
}

int main(){
  yyin = fopen("D:\\OneDrive\\Documentos\\Escola\\AulasFACCAT\\Compiladores\\TrabalhoG2\\input.bola","r"); 
  yyparse();
  return 0;
}

#include "lex.yy.c"
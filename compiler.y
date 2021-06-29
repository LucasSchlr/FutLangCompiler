%{
	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>

    FILE *yyin;
	char outputFileName[150];
	int yylex();
	void yyerror(char *msg);
	void trata_params();
	char *concatString(int strLength, char *string);
%}

%union {
    char *iValue;
    char *vName;
  	char *Instructions;
    char *Expressions;
};

%start PROGRAM 
%type <Expressions> EXP
%type <iValue> CONDITION 
%type <Instructions> ASSIGN 
%type <Instructions> INSTRUCTION
%type <Instructions> PARAM_LIST
%type <vName> VAR 

%token <iValue> NUMBER
%token <vName> CMP 
%token <vName> OPERATOR 

%token VAR
%token <iValue> UNK PRINT IF WHILE K_JOGADA_ENSAIADA K_PASSE_LONGO K_TAVA_IMPEDIDO K_DAR_ENTREVISTA K_JOGADA_VALIDA K_LANCAMENTO K_REBOTE K_FUTLANG_INIT FOR_OPERATOR


%%
PROGRAM 
	: INSTRUCTION { 
		FILE *fptr;	
	    fptr = fopen(outputFileName,"w"); 
      	fprintf(fptr, "%s", $1);
    	fclose(fptr); 
	}
	| /* nic */
	;

INSTRUCTION 
	: K_DAR_ENTREVISTA EXP ';'{
		char *tmp = (char*) malloc (strlen($2) + 20 );
		sprintf(tmp, "console.log(%s)", $2);
		$$ = tmp;
	}
    | VAR '(' PARAM_LIST ')'';'{
		char *tmp = (char*) malloc ( strlen($1) + strlen($3) +5 );
		sprintf(tmp, " %s(%s)", $1, $3);
		$$ = tmp;
    }
	| ASSIGN ';' { 
		$$ = $1; 
	}
	| K_PASSE_LONGO '(' CONDITION ')' '{' INSTRUCTION '}' { 
		char *tmp = (char*) malloc ( strlen($1) + strlen($6) +10);
		sprintf(tmp, " if(%s){\n%s\n}", $3, $6);
		$$ = tmp;
	}
    | K_PASSE_LONGO '(' CONDITION ')' '{' INSTRUCTION '}' K_TAVA_IMPEDIDO '{' INSTRUCTION '}' { 
		char *tmp = (char*) malloc ( strlen($3) + strlen($6) + strlen($10) +10 );
		sprintf(tmp, " if(%s){\n%s\n}else{\n%s\n}", $3, $6, $10);
		$$ = tmp;
	}
	| K_JOGADA_VALIDA  '(' CONDITION ')' '{' INSTRUCTION '}'{
		char *tmp = (char*) malloc (strlen($3) + strlen($6) +15);
		sprintf(tmp, "while (%s){\n%s\n}", $3,$6);
		$$ = tmp;
	}
    | K_JOGADA_ENSAIADA VAR '('PARAM_LIST')' '{' INSTRUCTION '}'{
		char *tmp = (char*) malloc ( strlen($2) + strlen($4) + strlen($1) + strlen($7) + 20 );
		sprintf(tmp, "function %s (%s){%s}", $2,$4,$7);
		$$ = tmp;
    }
    | K_REBOTE EXP ';'{
		char *tmp = (char*) malloc (strlen($2)+15 );
		sprintf(tmp, "nreturn %s", $2);
		$$ = tmp;
    }
	| K_LANCAMENTO '(' VAR ';' CONDITION ';' VAR FOR_OPERATOR ')' '{' INSTRUCTION '}' {
		char *tmp = (char*) malloc ( strlen($3) + strlen($5) + strlen($7) + strlen($8) + strlen($11) +25);
		sprintf(tmp, "for(%s; %s; %s%s){\n%s\n}", $3, $5, $7, $8, $11);
		$$ = tmp;
	}
      /////////////////////////
    | INSTRUCTION K_DAR_ENTREVISTA EXP ';'{
		char *tmp = (char*) malloc ( strlen($1) + strlen($3) +20);
		sprintf(tmp, "%s\nconsole.log(%s)", $1, $3);
		$$ = tmp;
	}
    | INSTRUCTION VAR '('PARAM_LIST')'';'{
		char *tmp = (char*) malloc (strlen($1) + strlen($2) +strlen($4)+5  );
		sprintf(tmp, "%s\n%s(%s)", $1, $2, $4);
		$$ = tmp;
    }
	| INSTRUCTION ASSIGN ';' { 
		char *tmp = (char*) malloc ( strlen($1) + strlen($2) +2);
		sprintf(tmp, "%s\n%s", $1, $2);
		$$ = tmp; 
	}
	| INSTRUCTION K_PASSE_LONGO '(' CONDITION ')' '{' INSTRUCTION '}' {
		char *tmp = (char*) malloc ( strlen($1) + strlen($4) + strlen($7) +15);
		sprintf(tmp, "%s\nif(%s){\n%s\n}", $1, $4, $7);
		$$ = tmp;
	}
    | INSTRUCTION K_PASSE_LONGO '(' CONDITION ')' '{' INSTRUCTION '}' K_TAVA_IMPEDIDO '{' INSTRUCTION '}' { 
		char *tmp = (char*) malloc ( strlen($1) + strlen($4) +strlen($7) + strlen($11) +20);
		sprintf(tmp, "%s\nif(%s){\n%s\n}else{\n%s\n}", $1, $4, $7, $11);
		$$ = tmp;
	}
    | INSTRUCTION K_JOGADA_ENSAIADA VAR '(' PARAM_LIST ')' '{' INSTRUCTION '}'{
		char *tmp = (char*) malloc ( strlen($1) + strlen($3) + strlen($5) + strlen($8)+15);
		sprintf(tmp, "%s\nfunction %s (%s){\n%s\n}", $1,$3,$5,$8);
		$$ = tmp;
    }
	| INSTRUCTION K_JOGADA_VALIDA '(' CONDITION ')' '{' INSTRUCTION '}' {
		char *tmp = (char*) malloc ( strlen($1) + strlen($4)+ strlen($7) +15 );
		sprintf(tmp, "%s\nwhile (%s){\n%s\n}", $1,$4,$7);
		$$ = tmp;
	}
    | INSTRUCTION K_REBOTE EXP ';'{
		char *tmp = (char*) malloc ( strlen($1) + strlen($3) +10);
		sprintf(tmp, "%s\nreturn %s", $1,$3);
		$$ = tmp;
    }
	| INSTRUCTION K_LANCAMENTO '(' VAR ';' CONDITION ';' VAR FOR_OPERATOR ')' '{' INSTRUCTION '}' {
		char *tmp = (char*) malloc ( strlen($1) + strlen($4) + strlen($6) + strlen($8) + strlen($9) + strlen($12) + 25);
		sprintf(tmp, "%s\nfor(%s; %s; %s%s){\n%s\n}", $1, $4, $6, $8, $9, $12);
		$$ = tmp;
	}
	;

ASSIGN 
	: VAR ':=' EXP { 
		char *tmp = (char*) malloc ( strlen($1) + strlen($3)+1);
		sprintf(tmp, "%s=%s", $1, $3);
		$$ = tmp; 
	}
	| VAR ':=' VAR '('PARAM_LIST')' {
		char *tmp = (char*) malloc (strlen($1) + strlen($3) +strlen($5)+10 );
		sprintf(tmp, "%s=%s(%s)", $1, $3, $5);
		$$ = tmp;
	}

EXP 
	: NUMBER { 
		$$ = $1;
	}
	| VAR { 
		$$ = $1;
	}
	| EXP OPERATOR NUMBER { 
		char *tmp = (char*) malloc ( strlen($1) + strlen($2) +strlen($3) );
		sprintf(tmp, "%s%s%s", $1,$2,$3);
		$$ = tmp;
	}
	| EXP OPERATOR VAR {
		char *tmp = (char*) malloc (strlen($1) + strlen($2) +strlen($3) );
		sprintf(tmp, "%s%s%s", $1,$2,$3);
		$$ = tmp;
	}
	;

PARAM_LIST
	: VAR {		
		$$=$1;
	}
  	| NUMBER {
		$$=$1;
	}
  	| PARAM_LIST ',' VAR {
		char *tmp = (char*) malloc ( strlen($1) + strlen($3)+1);
		sprintf(tmp, "%s,%s",$1,$3);
		$$ = tmp;
	}
  	| PARAM_LIST ',' NUMBER {
		char *tmp = (char*) malloc (strlen($1) + strlen($3)+1);
		sprintf(tmp, "%s,%s",$1,$3);
		$$ = tmp;
    }
  	|  /* empty */
  	;

CONDITION 
	: EXP { 
		$$=$1;
	}
	| EXP CMP EXP {
		char *tmp = (char*) malloc (strlen($1) + strlen($3) +strlen($2) );
		sprintf(tmp, "%s%s%s", $1,$2,$3);
		$$ = tmp;
	}
	;

%%

void yyerror(char *msg){
  fprintf(stderr, "erro: %s\n", msg);
  exit(1);
}

void trata_params(int argc, char *argv[]){
    int i;
	int count = 0;
	char paramName[150];
	char paramValue[150];
	yyin = fopen("input.bola","r"); 
	strcpy(outputFileName, "output.js");

    if( argc >= 2 ) {
		for(i = 1; i < argc; i++){

			if (count == 0){
				strcpy(paramName, argv[i]);
				count = 1;
			}else if (count == 1){
				strcpy(paramValue, argv[i]);
				count = 2;
			}		

			if (count == 2 || strcmp(paramName, "-h")==0){
				count = 0;	
				if (strcmp(paramName, "-i") == 0){
					yyin = fopen(paramValue,"r"); 
				}
				else if (strcmp(paramName, "-o") == 0){
					strcpy(outputFileName, paramValue);
				}
				else if (strcmp(paramName, "-h") == 0){
					printf("-i {VALUE} indicates the path for the input file. Default value is \" input.bola\n");
					printf("-o {VALUE} indicates the path for the output file. Default value is \" output.js\n");
				}else{
					printf("Invalid param list, type -h to view a list of all params\n");
					i = argc;
				}
			}else if (count == 0){
				printf("Invalid param list, type -h to view a list of all params\n");
				i = argc;
			}
        }
    }
    else{
		printf("Accepted params\n");
		printf("-i {VALUE} indicates the path for the input file. Default value is \"input.bola\"\n");
		printf("-o {VALUE} indicates the path for the output file. Default value is \"output.js\"\n");
    }
}

int main(int argc, char *argv[]){
	trata_params(argc, argv);
	yyparse();
	return 0;
}

#include "lex.yy.c"
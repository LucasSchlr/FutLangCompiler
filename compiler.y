%{
  #include<stdio.h>
  #include<stdlib.h>
  #include<string.h>

  FILE *yyin;
	int yylex();
	void yyerror(char *msg);

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
		printf("GERANDO output\n");
		FILE *fptr;	
	    fptr = fopen("D:\\OneDrive\\Documentos\\Escola\\AulasFACCAT\\Compiladores\\TrabalhoG2\\output.js","w"); 
      	fprintf(fptr, "%s", $1);
    	fclose(fptr); 
	}
	| /* nic */
	;
    //com a adição de INSTRUCTION + O RESTANTE ele ta juntando TODO o input para "instruction" para depois variar para program
    // TENTAR ADICIONAR K_FUTLANG_INIT

INSTRUCTION 
	: K_DAR_ENTREVISTA EXP ';'{
		printf("PONTO 1;\n");

		char *tmp = (char*) malloc (strlen($2) + 20 );
		sprintf(tmp, "Console.log(%s)", $2);
		$$ = tmp;

		printf("PONTO 1.2;\n");
	}
    | VAR '(' PARAM_LIST ')'';'{
		printf("PONTO 2;\n");

		char *tmp = (char*) malloc ( strlen($1) + strlen($3) +5 );
		sprintf(tmp, " %s(%s)", $1, $3);
		$$ = tmp;

		printf("PONTO 2.1;\n");
    }
	| ASSIGN ';' { 
		$$ = $1; 
	}
	| K_PASSE_LONGO '(' CONDITION ')' '{' INSTRUCTION '}' { 
		printf("PONTO 3;\n");

		char *tmp = (char*) malloc ( strlen($1) + strlen($6) +10);
		sprintf(tmp, " if(%s){\n%s\n}", $3, $6);
		$$ = tmp;

		printf("PONTO 3.1;\n");
	}
    | K_PASSE_LONGO '(' CONDITION ')' '{' INSTRUCTION '}' K_TAVA_IMPEDIDO '{' INSTRUCTION '}' { 
		printf("PONTO 4;\n");

		char *tmp = (char*) malloc ( strlen($3) + strlen($6) + strlen($10) +10 );
		sprintf(tmp, " if(%s){\n%s\n}else{\n%s\n}", $3, $6, $10);
		$$ = tmp;

		printf("PONTO 4.1;\n");
	}
	| K_JOGADA_VALIDA  '(' CONDITION ')' '{' INSTRUCTION '}'{
		printf("PONTO 5;\n");

		char *tmp = (char*) malloc (strlen($3) + strlen($6) +15);
		sprintf(tmp, "while (%s){\n%s\n}", $3,$6);
		$$ = tmp;

		printf("PONTO 5.1;\n");
	}
    | K_JOGADA_ENSAIADA VAR '('PARAM_LIST')' '{' INSTRUCTION '}'{
		printf("PONTO 6;\n");
		
		char *tmp = (char*) malloc ( strlen($2) + strlen($4) + strlen($1) + strlen($7) + 20 );
		sprintf(tmp, "function %s (%s){%s}", $2,$4,$7);
		$$ = tmp;

		printf("PONTO 6.1;\n");
    }
    | K_REBOTE EXP ';'{
		printf("PONTO 7;\n");

		char *tmp = (char*) malloc (strlen($2)+15 );
		sprintf(tmp, "nreturn %s", $2);
		$$ = tmp;

		printf("PONTO 7.1;\n");
    }
	| K_LANCAMENTO '(' VAR ';' CONDITION ';' VAR FOR_OPERATOR ')' '{' INSTRUCTION '}' {
		printf("PONTO 8;\n");

		char *tmp = (char*) malloc ( strlen($3) + strlen($5) + strlen($7) + strlen($8) + strlen($11) +25);
		sprintf(tmp, "for(let %s; %s; %s%s){\n%s\n}", $3, $5, $7, $8, $11);
		$$ = tmp;

		printf("PONTO 8.1;\n");
	}
      /////////////////////////
    | INSTRUCTION K_DAR_ENTREVISTA EXP ';'{
		printf("PONTO 9;\n");

		char *tmp = (char*) malloc ( strlen($1) + strlen($3) +20);
		sprintf(tmp, "%s\nConsole.log(%s)", $1, $3);
		$$ = tmp;

		printf("PONTO 9.1;\n");
	}
    | INSTRUCTION VAR '('PARAM_LIST')'';'{
		printf("PONTO 10;\n");

		char *tmp = (char*) malloc (strlen($1) + strlen($2) +strlen($4)+5  );
		sprintf(tmp, "%s\n%s(%s)", $1, $2, $4);
		$$ = tmp;

		printf("PONTO 10.1;\n");
    }
	| INSTRUCTION ASSIGN ';' { 
		printf("PONTO 11;\n");

		char *tmp = (char*) malloc ( strlen($1) + strlen($2) +2);
		sprintf(tmp, "%s\n%s", $1, $2);
		$$ = tmp; 

		printf("PONTO 11.1;\n");
	}
	| INSTRUCTION K_PASSE_LONGO '(' CONDITION ')' '{' INSTRUCTION '}' {
		printf("PONTO 12;\n");

		char *tmp = (char*) malloc ( strlen($1) + strlen($4) + strlen($7) +15);
		sprintf(tmp, "%s\nif(%s){\n%s\n}", $1, $4, $7);
		$$ = tmp;

		printf("PONTO 12.1;\n");
	}
    | INSTRUCTION K_PASSE_LONGO '(' CONDITION ')' '{' INSTRUCTION '}' K_TAVA_IMPEDIDO '{' INSTRUCTION '}' { 
		printf("PONTO 13;\n");

		char *tmp = (char*) malloc ( strlen($1) + strlen($4) +strlen($7) + strlen($11) +20);
		sprintf(tmp, "%s\nif(%s){\n%s\n}else{\n%s\n}", $1, $4, $7, $11);
		$$ = tmp;

		printf("PONTO 13.1;\n");
	}
    | INSTRUCTION K_JOGADA_ENSAIADA VAR '(' PARAM_LIST ')' '{' INSTRUCTION '}'{
		printf("PONTO 14;\n");

		char *tmp = (char*) malloc ( strlen($1) + strlen($3) + strlen($5) + strlen($8)+15);
		sprintf(tmp, "%s\nfunction %s (%s){\n%s\n}", $1,$3,$5,$8);
		$$ = tmp;

		printf("PONTO 14.1;\n");
    }
	| INSTRUCTION K_JOGADA_VALIDA '(' CONDITION ')' '{' INSTRUCTION '}' {
		printf("PONTO 15;\n");

		char *tmp = (char*) malloc ( strlen($1) + strlen($4)+ strlen($7) +15 );
		sprintf(tmp, "%s\nwhile (%s){\n%s\n}", $1,$4,$7);
		$$ = tmp;

		printf("PONTO 15.1;\n");
	}
    | INSTRUCTION K_REBOTE EXP ';'{
		printf("PONTO 16;\n");

		char *tmp = (char*) malloc ( strlen($1) + strlen($3) +10);
		sprintf(tmp, "%s\nreturn %s", $1,$3);
		$$ = tmp;

		printf("PONTO 16.1;\n");
    }
	| INSTRUCTION K_LANCAMENTO '(' VAR ';' CONDITION ';' VAR FOR_OPERATOR ')' '{' INSTRUCTION '}' {
		printf("PONTO 17;\n");
		
		char *tmp = (char*) malloc ( strlen($1) + strlen($4) + strlen($6) + strlen($8) + strlen($9) + strlen($12) + 25);
		sprintf(tmp, "%s\nfor(let %s; %s; %s%s){\n%s\n}", $1, $4, $6, $8, $9, $12);
		$$ = tmp;

		printf("PONTO 17.1;\n");
	}
	;

ASSIGN 
	: VAR ':=' EXP { 
		printf("PONTO 18;\n");

		char *tmp = (char*) malloc ( strlen($1) + strlen($3)+1);
		sprintf(tmp, "%s=%s", $1, $3);
		$$ = tmp; 

		printf("PONTO 18.1;\n");
	}

EXP 
	: NUMBER { 
		printf("PONTO 19;\n");

		$$ = $1;

		printf("PONTO 19.1;\n");
	}
	| VAR { 
		printf("PONTO 20;\n");

		$$ = $1;

		printf("PONTO 20.1;\n");
	}
	| EXP OPERATOR NUMBER { 
		printf("PONTO 21;\n");

		char *tmp = (char*) malloc ( strlen($1) + strlen($2) +strlen($3) );
		sprintf(tmp, "%s%s%s", $1,$2,$3);
		$$ = tmp; 

		printf("PONTO 21.1;\n");
	}
	| EXP OPERATOR VAR {
		printf("PONTO 22;\n");

		char *tmp = (char*) malloc (strlen($1) + strlen($2) +strlen($3) );
		sprintf(tmp, "%s%s%s", $1,$2,$3);
		$$ = tmp;

		printf("PONTO 22.1;\n");
	}
	;

PARAM_LIST
	: VAR {		
		printf("PONTO 23\n");

		$$=$1;
		
		printf("PONTO 23.1;\n");
	}
  	| NUMBER {
		printf("PONTO 24;\n");
		
		$$=$1;

		printf("PONTO 24.1;\n");
	}
  	| PARAM_LIST ',' VAR {
		printf("PONTO 25;\n");

		char *tmp = (char*) malloc ( strlen($1) + strlen($3)+1);
		sprintf(tmp, "%s,%s",$1,$3);
		$$ = tmp;

		printf("PONTO 25.1;\n");
	}
  	| PARAM_LIST ',' NUMBER {
		printf("PONTO 26;\n");

		char *tmp = (char*) malloc (strlen($1) + strlen($3)+1);
		sprintf(tmp, "%s,%s",$1,$3);
		$$ = tmp;

		printf("PONTO 26.1;\n");
    }
  	|  /* empty */
  	;

CONDITION 
	: EXP { 
		printf("PONTO 27;\n");
		$$=$1;
		printf("PONTO 27.1;\n");
	}
	| EXP CMP EXP {
		printf("PONTO 28;\n");

		char *tmp = (char*) malloc (strlen($1) + strlen($3) +strlen($2) );
		sprintf(tmp, "%s%s%s", $1,$2,$3);
		$$ = tmp;

		printf("PONTO 28.1;\n");
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
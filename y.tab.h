
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUMBER = 258,
     CMP = 259,
     OPERATOR = 260,
     VAR = 261,
     UNK = 262,
     PRINT = 263,
     IF = 264,
     WHILE = 265,
     K_JOGADA_ENSAIADA = 266,
     K_PASSE_LONGO = 267,
     K_TAVA_IMPEDIDO = 268,
     K_DAR_ENTREVISTA = 269,
     K_JOGADA_VALIDA = 270,
     K_LANCAMENTO = 271,
     K_REBOTE = 272,
     K_FUTLANG_INIT = 273,
     FOR_OPERATOR = 274
   };
#endif
/* Tokens.  */
#define NUMBER 258
#define CMP 259
#define OPERATOR 260
#define VAR 261
#define UNK 262
#define PRINT 263
#define IF 264
#define WHILE 265
#define K_JOGADA_ENSAIADA 266
#define K_PASSE_LONGO 267
#define K_TAVA_IMPEDIDO 268
#define K_DAR_ENTREVISTA 269
#define K_JOGADA_VALIDA 270
#define K_LANCAMENTO 271
#define K_REBOTE 272
#define K_FUTLANG_INIT 273
#define FOR_OPERATOR 274




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 12 "compiler.y"

    char *iValue;
    char *vName;
  	char *Instructions;
    char *Expressions;



/* Line 1676 of yacc.c  */
#line 99 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;



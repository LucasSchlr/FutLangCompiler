
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "compiler.y"

  #include<stdio.h>
  #include<stdlib.h>
  #include<string.h>

  FILE *yyin;
	int yylex();
	void yyerror(char *msg);



/* Line 189 of yacc.c  */
#line 85 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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

/* Line 214 of yacc.c  */
#line 12 "compiler.y"

    char *iValue;
    char *vName;
  	char *Instructions;
    char *Expressions;



/* Line 214 of yacc.c  */
#line 168 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 180 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  21
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   233

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  27
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  7
/* YYNRULES -- Number of rules.  */
#define YYNRULES  33
/* YYNRULES -- Number of states.  */
#define YYNSTATES  121

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   274

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      21,    22,     2,     2,    26,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    25,    20,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    23,     2,    24,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     6,    10,    16,    19,    27,    39,
      47,    56,    60,    73,    78,    85,    89,    98,   111,   121,
     130,   135,   149,   153,   155,   157,   161,   165,   167,   169,
     173,   177,   178,   180
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      28,     0,    -1,    29,    -1,    -1,    14,    31,    20,    -1,
       6,    21,    32,    22,    20,    -1,    30,    20,    -1,    12,
      21,    33,    22,    23,    29,    24,    -1,    12,    21,    33,
      22,    23,    29,    24,    13,    23,    29,    24,    -1,    15,
      21,    33,    22,    23,    29,    24,    -1,    11,     6,    21,
      32,    22,    23,    29,    24,    -1,    17,    31,    20,    -1,
      16,    21,     6,    20,    33,    20,     6,    19,    22,    23,
      29,    24,    -1,    29,    14,    31,    20,    -1,    29,     6,
      21,    32,    22,    20,    -1,    29,    30,    20,    -1,    29,
      12,    21,    33,    22,    23,    29,    24,    -1,    29,    12,
      21,    33,    22,    23,    29,    24,    13,    23,    29,    24,
      -1,    29,    11,     6,    21,    32,    22,    23,    29,    24,
      -1,    29,    15,    21,    33,    22,    23,    29,    24,    -1,
      29,    17,    31,    20,    -1,    29,    16,    21,     6,    20,
      33,    20,     6,    19,    22,    23,    29,    24,    -1,     6,
      25,    31,    -1,     3,    -1,     6,    -1,    31,     5,     3,
      -1,    31,     5,     6,    -1,     6,    -1,     3,    -1,    32,
      26,     6,    -1,    32,    26,     3,    -1,    -1,    31,    -1,
      31,     4,    31,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    37,    37,    44,    50,    59,    68,    71,    80,    89,
      98,   107,   116,   126,   135,   144,   153,   162,   171,   180,
     189,   198,   210,   221,   228,   235,   244,   256,   263,   270,
     279,   288,   292,   297
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "CMP", "OPERATOR", "VAR",
  "UNK", "PRINT", "IF", "WHILE", "K_JOGADA_ENSAIADA", "K_PASSE_LONGO",
  "K_TAVA_IMPEDIDO", "K_DAR_ENTREVISTA", "K_JOGADA_VALIDA", "K_LANCAMENTO",
  "K_REBOTE", "K_FUTLANG_INIT", "FOR_OPERATOR", "';'", "'('", "')'", "'{'",
  "'}'", "':'", "','", "$accept", "PROGRAM", "INSTRUCTION", "ASSIGN",
  "EXP", "PARAM_LIST", "CONDITION", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
      59,    40,    41,   123,   125,    58,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    27,    28,    28,    29,    29,    29,    29,    29,    29,
      29,    29,    29,    29,    29,    29,    29,    29,    29,    29,
      29,    29,    30,    31,    31,    31,    31,    32,    32,    32,
      32,    32,    33,    33
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     3,     5,     2,     7,    11,     7,
       8,     3,    12,     4,     6,     3,     8,    12,     9,     8,
       4,    13,     3,     1,     1,     3,     3,     1,     1,     3,
       3,     0,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       0,    31,     0,     0,     0,    23,    24,     0,     0,     0,
       0,     1,     0,     0,     0,     0,     0,     0,     0,     0,
       6,    28,    27,     0,    22,    31,    32,     0,     0,     4,
       0,     0,    11,    31,     0,     0,     0,     0,     0,     0,
      15,     0,     0,     0,     0,     0,    25,    26,     0,     0,
       0,    31,     0,    13,     0,     0,    20,     5,    30,    29,
       0,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    14,     0,     0,     0,     0,     0,
       7,     9,     0,     0,     0,     0,     0,    10,     0,     0,
       0,    16,    19,     0,     0,     0,    18,     0,     0,     0,
       0,     0,     0,     8,     0,     0,     0,    12,    17,     0,
      21
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     8,     9,    10,    36,    33,    37
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -67
static const yytype_int16 yypact[] =
{
     209,   -13,     7,    -6,    43,    30,    34,    43,    25,   216,
      47,    57,    43,    48,    43,   -67,   -67,    -1,    43,    64,
       4,   -67,    -3,    65,    53,    43,    54,    55,    43,    59,
     -67,   -67,   -67,    13,    72,    57,    29,    56,    58,   -67,
      60,    61,   -67,    57,    66,    43,    11,    43,    77,    12,
     -67,    68,    62,    14,    43,    73,   -67,   -67,    74,    43,
      15,    57,    76,   -67,    79,    84,   -67,   -67,   -67,   -67,
      92,    72,   209,   209,    87,    96,    21,    95,   101,    43,
     209,    42,    78,    93,   -67,   106,   209,   209,    99,    97,
     107,   -67,   113,   209,   111,   125,   124,   -67,   110,   112,
     139,   130,   -67,   119,   209,   121,   -67,   123,   126,   153,
     209,   209,   129,   -67,   167,   181,   209,   -67,   -67,   195,
     -67
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -67,   -67,   -66,    -9,    -2,   -32,   -17
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      29,    40,    17,    53,    38,    20,    81,    82,    11,    38,
      34,    60,    12,    13,    89,    14,    38,    38,    43,    39,
      94,    95,    12,    46,    42,    21,    49,   100,    62,    76,
      64,    63,    66,    54,    38,    51,    70,    75,   109,    52,
      52,    52,    74,    85,   114,   115,    15,    52,    22,    16,
     119,    18,    71,    23,    24,    19,    25,    26,    27,    28,
      31,    56,    88,    32,    57,    68,    90,    30,    69,    35,
      41,    44,    29,    29,    45,    47,    48,    38,    55,    50,
      29,    59,    58,    65,    22,    29,    29,    61,    67,    23,
      24,    29,    25,    26,    27,    28,    72,    73,    77,    92,
      29,    78,    91,    22,    79,    29,    29,    83,    23,    24,
      29,    25,    26,    27,    28,    80,    84,    22,    86,    96,
      98,    97,    23,    24,    87,    25,    26,    27,    28,    93,
     103,    22,    99,   104,   105,   101,    23,    24,   108,    25,
      26,    27,    28,   107,   110,    22,   111,     0,   112,   102,
      23,    24,   116,    25,    26,    27,    28,     0,     0,    22,
       0,     0,     0,   106,    23,    24,     0,    25,    26,    27,
      28,     0,     0,    22,     0,     0,     0,   113,    23,    24,
       0,    25,    26,    27,    28,     0,     0,    22,     0,     0,
       0,   117,    23,    24,     0,    25,    26,    27,    28,     0,
       0,    22,     0,     0,     0,   118,    23,    24,     0,    25,
      26,    27,    28,     0,     0,     1,     0,     0,     0,   120,
       2,     3,    22,     4,     5,     6,     7,    23,    24,     0,
      25,    26,    27,    28
};

static const yytype_int8 yycheck[] =
{
       9,    18,     4,    35,     5,     7,    72,    73,    21,     5,
      12,    43,    25,     6,    80,    21,     5,     5,    21,    20,
      86,    87,    25,    25,    20,     0,    28,    93,    45,    61,
      47,    20,    20,     4,     5,    22,    22,    22,   104,    26,
      26,    26,    59,    22,   110,   111,     3,    26,     6,     6,
     116,    21,    54,    11,    12,    21,    14,    15,    16,    17,
       3,     3,    79,     6,     6,     3,    24,    20,     6,    21,
       6,     6,    81,    82,    21,    21,    21,     5,    22,    20,
      89,    20,    22,     6,     6,    94,    95,    21,    20,    11,
      12,   100,    14,    15,    16,    17,    23,    23,    22,     6,
     109,    22,    24,     6,    20,   114,   115,    20,    11,    12,
     119,    14,    15,    16,    17,    23,    20,     6,    23,    20,
      13,    24,    11,    12,    23,    14,    15,    16,    17,    23,
       6,     6,    19,    23,    22,    24,    11,    12,    19,    14,
      15,    16,    17,    13,    23,     6,    23,    -1,    22,    24,
      11,    12,    23,    14,    15,    16,    17,    -1,    -1,     6,
      -1,    -1,    -1,    24,    11,    12,    -1,    14,    15,    16,
      17,    -1,    -1,     6,    -1,    -1,    -1,    24,    11,    12,
      -1,    14,    15,    16,    17,    -1,    -1,     6,    -1,    -1,
      -1,    24,    11,    12,    -1,    14,    15,    16,    17,    -1,
      -1,     6,    -1,    -1,    -1,    24,    11,    12,    -1,    14,
      15,    16,    17,    -1,    -1,     6,    -1,    -1,    -1,    24,
      11,    12,     6,    14,    15,    16,    17,    11,    12,    -1,
      14,    15,    16,    17
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    11,    12,    14,    15,    16,    17,    28,    29,
      30,    21,    25,     6,    21,     3,     6,    31,    21,    21,
      31,     0,     6,    11,    12,    14,    15,    16,    17,    30,
      20,     3,     6,    32,    31,    21,    31,    33,     5,    20,
      33,     6,    20,    21,     6,    21,    31,    21,    21,    31,
      20,    22,    26,    32,     4,    22,     3,     6,    22,    20,
      32,    21,    33,    20,    33,     6,    20,    20,     3,     6,
      22,    31,    23,    23,    33,    22,    32,    22,    22,    20,
      23,    29,    29,    20,    20,    22,    23,    23,    33,    29,
      24,    24,     6,    23,    29,    29,    20,    24,    13,    19,
      29,    24,    24,     6,    23,    22,    24,    13,    19,    29,
      23,    23,    22,    24,    29,    29,    23,    24,    24,    29,
      24
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 37 "compiler.y"
    { 
		printf("GERANDO output\n");
		FILE *fptr;	
	    fptr = fopen("output.js","w"); 
      	fprintf(fptr, "%s", (yyvsp[(1) - (1)].Instructions));
    	fclose(fptr); 
	}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 50 "compiler.y"
    {
		printf("PONTO 1;\n");

		char *tmp = (char*) malloc (strlen((yyvsp[(2) - (3)].Expressions)) + 20 );
		sprintf(tmp, "console.log(%s)", (yyvsp[(2) - (3)].Expressions));
		(yyval.Instructions) = tmp;

		printf("PONTO 1.2;\n");
	}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 59 "compiler.y"
    {
		printf("PONTO 2;\n");

		char *tmp = (char*) malloc ( strlen((yyvsp[(1) - (5)].vName)) + strlen((yyvsp[(3) - (5)].Instructions)) +5 );
		sprintf(tmp, " %s(%s)", (yyvsp[(1) - (5)].vName), (yyvsp[(3) - (5)].Instructions));
		(yyval.Instructions) = tmp;

		printf("PONTO 2.1;\n");
    }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 68 "compiler.y"
    { 
		(yyval.Instructions) = (yyvsp[(1) - (2)].Instructions); 
	}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 71 "compiler.y"
    { 
		printf("PONTO 3;\n");

		char *tmp = (char*) malloc ( strlen((yyvsp[(1) - (7)].iValue)) + strlen((yyvsp[(6) - (7)].Instructions)) +10);
		sprintf(tmp, " if(%s){\n%s\n}", (yyvsp[(3) - (7)].iValue), (yyvsp[(6) - (7)].Instructions));
		(yyval.Instructions) = tmp;

		printf("PONTO 3.1;\n");
	}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 80 "compiler.y"
    { 
		printf("PONTO 4;\n");

		char *tmp = (char*) malloc ( strlen((yyvsp[(3) - (11)].iValue)) + strlen((yyvsp[(6) - (11)].Instructions)) + strlen((yyvsp[(10) - (11)].Instructions)) +10 );
		sprintf(tmp, " if(%s){\n%s\n}else{\n%s\n}", (yyvsp[(3) - (11)].iValue), (yyvsp[(6) - (11)].Instructions), (yyvsp[(10) - (11)].Instructions));
		(yyval.Instructions) = tmp;

		printf("PONTO 4.1;\n");
	}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 89 "compiler.y"
    {
		printf("PONTO 5;\n");

		char *tmp = (char*) malloc (strlen((yyvsp[(3) - (7)].iValue)) + strlen((yyvsp[(6) - (7)].Instructions)) +15);
		sprintf(tmp, "while (%s){\n%s\n}", (yyvsp[(3) - (7)].iValue),(yyvsp[(6) - (7)].Instructions));
		(yyval.Instructions) = tmp;

		printf("PONTO 5.1;\n");
	}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 98 "compiler.y"
    {
		printf("PONTO 6;\n");
		
		char *tmp = (char*) malloc ( strlen((yyvsp[(2) - (8)].vName)) + strlen((yyvsp[(4) - (8)].Instructions)) + strlen((yyvsp[(1) - (8)].iValue)) + strlen((yyvsp[(7) - (8)].Instructions)) + 20 );
		sprintf(tmp, "function %s (%s){%s}", (yyvsp[(2) - (8)].vName),(yyvsp[(4) - (8)].Instructions),(yyvsp[(7) - (8)].Instructions));
		(yyval.Instructions) = tmp;

		printf("PONTO 6.1;\n");
    }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 107 "compiler.y"
    {
		printf("PONTO 7;\n");

		char *tmp = (char*) malloc (strlen((yyvsp[(2) - (3)].Expressions))+15 );
		sprintf(tmp, "nreturn %s", (yyvsp[(2) - (3)].Expressions));
		(yyval.Instructions) = tmp;

		printf("PONTO 7.1;\n");
    }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 116 "compiler.y"
    {
		printf("PONTO 8;\n");

		char *tmp = (char*) malloc ( strlen((yyvsp[(3) - (12)].vName)) + strlen((yyvsp[(5) - (12)].iValue)) + strlen((yyvsp[(7) - (12)].vName)) + strlen((yyvsp[(8) - (12)].iValue)) + strlen((yyvsp[(11) - (12)].Instructions)) +25);
		sprintf(tmp, "for(%s; %s; %s%s){\n%s\n}", (yyvsp[(3) - (12)].vName), (yyvsp[(5) - (12)].iValue), (yyvsp[(7) - (12)].vName), (yyvsp[(8) - (12)].iValue), (yyvsp[(11) - (12)].Instructions));
		(yyval.Instructions) = tmp;

		printf("PONTO 8.1;\n");
	}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 126 "compiler.y"
    {
		printf("PONTO 9;\n");

		char *tmp = (char*) malloc ( strlen((yyvsp[(1) - (4)].Instructions)) + strlen((yyvsp[(3) - (4)].Expressions)) +20);
		sprintf(tmp, "%s\nconsole.log(%s)", (yyvsp[(1) - (4)].Instructions), (yyvsp[(3) - (4)].Expressions));
		(yyval.Instructions) = tmp;

		printf("PONTO 9.1;\n");
	}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 135 "compiler.y"
    {
		printf("PONTO 10;\n");

		char *tmp = (char*) malloc (strlen((yyvsp[(1) - (6)].Instructions)) + strlen((yyvsp[(2) - (6)].vName)) +strlen((yyvsp[(4) - (6)].Instructions))+5  );
		sprintf(tmp, "%s\n%s(%s)", (yyvsp[(1) - (6)].Instructions), (yyvsp[(2) - (6)].vName), (yyvsp[(4) - (6)].Instructions));
		(yyval.Instructions) = tmp;

		printf("PONTO 10.1;\n");
    }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 144 "compiler.y"
    { 
		printf("PONTO 11;\n");

		char *tmp = (char*) malloc ( strlen((yyvsp[(1) - (3)].Instructions)) + strlen((yyvsp[(2) - (3)].Instructions)) +2);
		sprintf(tmp, "%s\n%s", (yyvsp[(1) - (3)].Instructions), (yyvsp[(2) - (3)].Instructions));
		(yyval.Instructions) = tmp; 

		printf("PONTO 11.1;\n");
	}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 153 "compiler.y"
    {
		printf("PONTO 12;\n");

		char *tmp = (char*) malloc ( strlen((yyvsp[(1) - (8)].Instructions)) + strlen((yyvsp[(4) - (8)].iValue)) + strlen((yyvsp[(7) - (8)].Instructions)) +15);
		sprintf(tmp, "%s\nif(%s){\n%s\n}", (yyvsp[(1) - (8)].Instructions), (yyvsp[(4) - (8)].iValue), (yyvsp[(7) - (8)].Instructions));
		(yyval.Instructions) = tmp;

		printf("PONTO 12.1;\n");
	}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 162 "compiler.y"
    { 
		printf("PONTO 13;\n");

		char *tmp = (char*) malloc ( strlen((yyvsp[(1) - (12)].Instructions)) + strlen((yyvsp[(4) - (12)].iValue)) +strlen((yyvsp[(7) - (12)].Instructions)) + strlen((yyvsp[(11) - (12)].Instructions)) +20);
		sprintf(tmp, "%s\nif(%s){\n%s\n}else{\n%s\n}", (yyvsp[(1) - (12)].Instructions), (yyvsp[(4) - (12)].iValue), (yyvsp[(7) - (12)].Instructions), (yyvsp[(11) - (12)].Instructions));
		(yyval.Instructions) = tmp;

		printf("PONTO 13.1;\n");
	}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 171 "compiler.y"
    {
		printf("PONTO 14;\n");

		char *tmp = (char*) malloc ( strlen((yyvsp[(1) - (9)].Instructions)) + strlen((yyvsp[(3) - (9)].vName)) + strlen((yyvsp[(5) - (9)].Instructions)) + strlen((yyvsp[(8) - (9)].Instructions))+15);
		sprintf(tmp, "%s\nfunction %s (%s){\n%s\n}", (yyvsp[(1) - (9)].Instructions),(yyvsp[(3) - (9)].vName),(yyvsp[(5) - (9)].Instructions),(yyvsp[(8) - (9)].Instructions));
		(yyval.Instructions) = tmp;

		printf("PONTO 14.1;\n");
    }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 180 "compiler.y"
    {
		printf("PONTO 15;\n");

		char *tmp = (char*) malloc ( strlen((yyvsp[(1) - (8)].Instructions)) + strlen((yyvsp[(4) - (8)].iValue))+ strlen((yyvsp[(7) - (8)].Instructions)) +15 );
		sprintf(tmp, "%s\nwhile (%s){\n%s\n}", (yyvsp[(1) - (8)].Instructions),(yyvsp[(4) - (8)].iValue),(yyvsp[(7) - (8)].Instructions));
		(yyval.Instructions) = tmp;

		printf("PONTO 15.1;\n");
	}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 189 "compiler.y"
    {
		printf("PONTO 16;\n");

		char *tmp = (char*) malloc ( strlen((yyvsp[(1) - (4)].Instructions)) + strlen((yyvsp[(3) - (4)].Expressions)) +10);
		sprintf(tmp, "%s\nreturn %s", (yyvsp[(1) - (4)].Instructions),(yyvsp[(3) - (4)].Expressions));
		(yyval.Instructions) = tmp;

		printf("PONTO 16.1;\n");
    }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 198 "compiler.y"
    {
		printf("PONTO 17;\n");
		
		char *tmp = (char*) malloc ( strlen((yyvsp[(1) - (13)].Instructions)) + strlen((yyvsp[(4) - (13)].vName)) + strlen((yyvsp[(6) - (13)].iValue)) + strlen((yyvsp[(8) - (13)].vName)) + strlen((yyvsp[(9) - (13)].iValue)) + strlen((yyvsp[(12) - (13)].Instructions)) + 25);
		sprintf(tmp, "%s\nfor(%s; %s; %s%s){\n%s\n}", (yyvsp[(1) - (13)].Instructions), (yyvsp[(4) - (13)].vName), (yyvsp[(6) - (13)].iValue), (yyvsp[(8) - (13)].vName), (yyvsp[(9) - (13)].iValue), (yyvsp[(12) - (13)].Instructions));
		(yyval.Instructions) = tmp;

		printf("PONTO 17.1;\n");
	}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 210 "compiler.y"
    { 
		printf("PONTO 18;\n");

		char *tmp = (char*) malloc ( strlen((yyvsp[(1) - (3)].vName)) + strlen((yyvsp[(3) - (3)].Expressions))+1);
		sprintf(tmp, "%s=%s", (yyvsp[(1) - (3)].vName), (yyvsp[(3) - (3)].Expressions));
		(yyval.Instructions) = tmp; 

		printf("PONTO 18.1;\n");
	}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 221 "compiler.y"
    { 
		printf("PONTO 19;\n");

		(yyval.Expressions) = (yyvsp[(1) - (1)].iValue);

		printf("PONTO 19.1;\n");
	}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 228 "compiler.y"
    { 
		printf("PONTO 20;\n");

		(yyval.Expressions) = (yyvsp[(1) - (1)].vName);

		printf("PONTO 20.1;\n");
	}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 235 "compiler.y"
    { 
		printf("PONTO 21;\n");

		char *tmp = (char*) malloc ( strlen((yyvsp[(1) - (3)].Expressions)) + strlen((yyvsp[(2) - (3)].vName)) +strlen((yyvsp[(3) - (3)].iValue)) );
		sprintf(tmp, "%s%s%s", (yyvsp[(1) - (3)].Expressions),(yyvsp[(2) - (3)].vName),(yyvsp[(3) - (3)].iValue));
		(yyval.Expressions) = tmp; 

		printf("PONTO 21.1;\n");
	}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 244 "compiler.y"
    {
		printf("PONTO 22;\n");

		char *tmp = (char*) malloc (strlen((yyvsp[(1) - (3)].Expressions)) + strlen((yyvsp[(2) - (3)].vName)) +strlen((yyvsp[(3) - (3)].vName)) );
		sprintf(tmp, "%s%s%s", (yyvsp[(1) - (3)].Expressions),(yyvsp[(2) - (3)].vName),(yyvsp[(3) - (3)].vName));
		(yyval.Expressions) = tmp;

		printf("PONTO 22.1;\n");
	}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 256 "compiler.y"
    {		
		printf("PONTO 23\n");

		(yyval.Instructions)=(yyvsp[(1) - (1)].vName);
		
		printf("PONTO 23.1;\n");
	}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 263 "compiler.y"
    {
		printf("PONTO 24;\n");
		
		(yyval.Instructions)=(yyvsp[(1) - (1)].iValue);

		printf("PONTO 24.1;\n");
	}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 270 "compiler.y"
    {
		printf("PONTO 25;\n");

		char *tmp = (char*) malloc ( strlen((yyvsp[(1) - (3)].Instructions)) + strlen((yyvsp[(3) - (3)].vName))+1);
		sprintf(tmp, "%s,%s",(yyvsp[(1) - (3)].Instructions),(yyvsp[(3) - (3)].vName));
		(yyval.Instructions) = tmp;

		printf("PONTO 25.1;\n");
	}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 279 "compiler.y"
    {
		printf("PONTO 26;\n");

		char *tmp = (char*) malloc (strlen((yyvsp[(1) - (3)].Instructions)) + strlen((yyvsp[(3) - (3)].iValue))+1);
		sprintf(tmp, "%s,%s",(yyvsp[(1) - (3)].Instructions),(yyvsp[(3) - (3)].iValue));
		(yyval.Instructions) = tmp;

		printf("PONTO 26.1;\n");
    }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 292 "compiler.y"
    { 
		printf("PONTO 27;\n");
		(yyval.iValue)=(yyvsp[(1) - (1)].Expressions);
		printf("PONTO 27.1;\n");
	}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 297 "compiler.y"
    {
		printf("PONTO 28;\n");

		char *tmp = (char*) malloc (strlen((yyvsp[(1) - (3)].Expressions)) + strlen((yyvsp[(3) - (3)].Expressions)) +strlen((yyvsp[(2) - (3)].vName)) );
		sprintf(tmp, "%s%s%s", (yyvsp[(1) - (3)].Expressions),(yyvsp[(2) - (3)].vName),(yyvsp[(3) - (3)].Expressions));
		(yyval.iValue) = tmp;

		printf("PONTO 28.1;\n");
	}
    break;



/* Line 1455 of yacc.c  */
#line 1907 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 308 "compiler.y"


void yyerror(char *msg){
  fprintf(stderr, "erro: %s\n", msg);
  exit(1);
}

int main(){
  yyin = fopen("input.bola","r"); 
  yyparse();
  return 0;
}

#include "lex.yy.c"

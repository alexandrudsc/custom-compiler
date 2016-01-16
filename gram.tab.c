/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "gram.y"

						/************** ------ includere header-e; 			  ------- **********/
						/************** ------ sectiunea trece neinterpretata ------- **********/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "func.h"
#include "gram.tab.h"	

			/* fisier pentru cod output. Definifit in op_fisier.h */
extern FILE *f;

			/* Stochez variabile. Definite in mem.h */
extern double variabile_valori[100];
extern char* variabile_cuvinte[100];
extern int variable_set[100];

			/* functii si variabile flex */
extern int yylex(void);
extern void yyterminate();
void yyerror(const char *s);
extern FILE* yyin;

extern int yylineno;

/* Line 371 of yacc.c  */
#line 95 "gram.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "gram.tab.h".  */
#ifndef YY_YY_GRAM_TAB_H_INCLUDED
# define YY_YY_GRAM_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IMPARTIRE = 258,
     INMULTIRE = 259,
     ADUNARE = 260,
     SCADERE = 261,
     EGAL = 262,
     PI = 263,
     PUTERE = 264,
     RAD = 265,
     FACTORIAL = 266,
     MOD = 267,
     LOG2 = 268,
     LOG10 = 269,
     ROT_ADAUGARE = 270,
     ROT_SCADERE = 271,
     MODUL = 272,
     COS = 273,
     SIN = 274,
     TAN = 275,
     COSH = 276,
     SINH = 277,
     TANH = 278,
     GBP_IN_USD = 279,
     USD_IN_GBP = 280,
     GBP_IN_EURO = 281,
     EURO_IN_GBP = 282,
     USD_IN_EURO = 283,
     EURO_IN_USD = 284,
     CEL_IN_FAH = 285,
     FAH_IN_CEL = 286,
     M_IN_KM = 287,
     KM_IN_M = 288,
     VAR_KEYWORD = 289,
     VARIABLE = 290,
     NUMAR = 291,
     CUVANT = 292,
     AFISEAZA = 293,
     L_BRACKET = 294,
     R_BRACKET = 295,
     EOL = 296,
     STOP = 297,
     IF = 298,
     WHILE = 299,
     FOR = 300,
     NEXT = 301
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 33 "gram.y"

	int index;
	double num;
	char* str;


/* Line 387 of yacc.c  */
#line 191 "gram.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_GRAM_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 219 "gram.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   599

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  68
/* YYNRULES -- Number of states.  */
#define YYNSTATES  107

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,    47,     2,    48,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    12,    16,    19,    20,
      22,    24,    26,    28,    30,    32,    35,    37,    39,    41,
      43,    47,    51,    55,    59,    63,    67,    71,    73,    75,
      77,    82,    86,    90,    93,    96,    99,   102,   107,   109,
     111,   113,   115,   118,   121,   124,   127,   130,   133,   136,
     139,   142,   145,   148,   151,   154,   156,   158,   161,   164,
     167,   170,   173,   176,   179,   182,   185,   188,   193
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      50,     0,    -1,    -1,    50,    51,    -1,    41,    -1,    54,
      41,    -1,    47,    53,    48,    -1,    53,    54,    -1,    -1,
      56,    -1,    57,    -1,    58,    -1,    60,    -1,    67,    -1,
       8,    -1,     6,    56,    -1,    36,    -1,    35,    -1,    55,
      -1,    60,    -1,    56,     3,    56,    -1,    56,     4,    56,
      -1,    39,    56,    40,    -1,    56,     5,    56,    -1,    56,
       6,    56,    -1,    56,     9,    56,    -1,    56,    12,    56,
      -1,    59,    -1,    45,    -1,    42,    -1,    45,    56,    46,
      56,    -1,    44,    56,    54,    -1,    44,    56,    52,    -1,
      38,    35,    -1,    38,    36,    -1,    38,    37,    -1,    38,
      60,    -1,    38,    56,     5,    56,    -1,    64,    -1,    62,
      -1,    61,    -1,    63,    -1,    10,    56,    -1,    56,    11,
      -1,    17,    56,    -1,    15,    56,    -1,    16,    56,    -1,
      18,    56,    -1,    19,    56,    -1,    20,    56,    -1,    13,
      56,    -1,    14,    56,    -1,    21,    56,    -1,    22,    56,
      -1,    23,    56,    -1,    65,    -1,    66,    -1,    56,    24,
      -1,    56,    25,    -1,    56,    26,    -1,    56,    27,    -1,
      56,    28,    -1,    56,    29,    -1,    56,    30,    -1,    56,
      31,    -1,    56,    32,    -1,    56,    33,    -1,    34,    35,
       7,    54,    -1,    35,     7,    54,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   105,   105,   106,   110,   111,   116,   118,   119,   123,
     124,   125,   126,   127,   132,   136,   137,   139,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   154,   155,
     160,   162,   163,   166,   170,   173,   176,   179,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   201,   202,   203,
     207,   208,   212,   213,   214,   218,   219,   220,   221,   222,
     223,   224,   225,   229,   230,   233,   234,   237,   238
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IMPARTIRE", "INMULTIRE", "ADUNARE",
  "SCADERE", "EGAL", "PI", "PUTERE", "RAD", "FACTORIAL", "MOD", "LOG2",
  "LOG10", "ROT_ADAUGARE", "ROT_SCADERE", "MODUL", "COS", "SIN", "TAN",
  "COSH", "SINH", "TANH", "GBP_IN_USD", "USD_IN_GBP", "GBP_IN_EURO",
  "EURO_IN_GBP", "USD_IN_EURO", "EURO_IN_USD", "CEL_IN_FAH", "FAH_IN_CEL",
  "M_IN_KM", "KM_IN_M", "VAR_KEYWORD", "VARIABLE", "NUMAR", "CUVANT",
  "AFISEAZA", "L_BRACKET", "R_BRACKET", "EOL", "STOP", "IF", "WHILE",
  "FOR", "NEXT", "'{'", "'}'", "$accept", "program_input", "line",
  "calculations_compus", "lista_calculation", "calculation", "constant",
  "expr", "structura_for", "structura_while", "afisare_ecran", "function",
  "trig_function", "log_function", "hyperbolic_function", "conversion",
  "temperature_conversion", "distance_conversion", "atribuire", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    50,    50,    51,    51,    52,    53,    53,    54,
      54,    54,    54,    54,    55,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      57,    58,    58,    59,    59,    59,    59,    59,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    61,    61,    61,
      62,    62,    63,    63,    63,    64,    64,    64,    64,    64,
      64,    64,    64,    65,    65,    66,    66,    67,    67
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     3,     2,     0,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     1,
       4,     3,     3,     2,     2,     2,     2,     4,     1,     1,
       1,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     4,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,    14,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    17,    16,
       0,     0,     4,    29,     0,    28,     3,     0,    18,     9,
      10,    11,    27,    12,    40,    39,    41,    38,    55,    56,
      13,    17,    28,    15,    19,    42,    50,    51,    45,    46,
      44,    47,    48,    49,    52,    53,    54,     0,     0,    33,
      34,    35,     0,    36,     0,     0,     0,     5,     0,     0,
       0,     0,     0,    43,     0,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,     0,    68,     0,    22,     0,
       8,    32,    31,     0,    20,    21,    23,    24,    25,    26,
      67,    37,    15,     0,    30,     6,     7
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,    26,    91,   103,    27,    28,    29,    30,    31,
      32,    44,    34,    35,    36,    37,    38,    39,    40
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -38
static const yytype_int16 yypact[] =
{
     -38,    90,   -38,    20,   -38,    20,    20,    20,    20,    20,
      20,    20,    20,    20,    20,    20,    20,   -34,    -5,   -38,
     303,    20,   -38,   -38,    20,    20,   -38,   -37,   -38,   357,
     -38,   -38,   -38,   480,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   490,   -38,   566,   357,   357,   357,   357,
     357,   357,   357,   357,   357,   357,   357,    10,   263,   367,
     398,   -38,   408,   439,   325,   133,   188,   -38,    20,    20,
      20,    20,    20,   -38,    20,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   263,   -38,    20,   -38,    20,
     -38,   -38,   -38,    20,   556,   531,   521,   490,   566,   357,
     -38,   449,   178,   222,   357,   -38,   -38
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -38,   -38,   -38,   -38,   -38,   -36,   -38,     0,   -38,   -38,
     -38,    -1,   -38,   -38,   -38,   -38,   -38,   -38,   -38
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -25
static const yytype_int8 yytable[] =
{
      33,    57,    58,    43,    67,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    85,     0,    63,
      62,    64,    86,     0,    65,    66,     3,     0,     4,    92,
       5,     0,     0,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,     0,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,    41,    19,    33,    20,    21,
       0,     0,    23,     0,    33,    42,     0,   106,    94,    95,
      96,    97,    98,     0,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    33,     0,     0,   101,     0,   102,
       2,     0,     0,   104,     0,     0,     3,     0,     4,     0,
       5,     0,    33,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    17,    18,    19,     0,    20,    21,
       0,    22,    23,     0,    24,    25,    68,    69,    70,    89,
       0,     4,    72,     5,    73,    74,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    17,    18,    19,
       0,    20,    21,     0,     0,    23,     0,    24,    25,     0,
      90,    68,    69,    70,     0,     0,     0,    72,     0,    73,
      74,    68,    69,    70,    71,     0,     0,    72,     0,    73,
      74,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,     0,     0,     0,   -24,     0,     0,     3,     0,
       4,     0,     5,     0,    93,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    17,    18,    19,     0,
      20,    21,     0,     0,    23,     0,    24,    25,     0,     3,
     105,     4,     0,     5,     0,     0,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    17,    18,    19,
       0,    20,    21,     0,     0,    23,     0,    24,    25,     3,
       0,     4,     0,     5,     0,     0,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,     0,    68,    69,
      70,    71,     0,     0,    72,     0,    73,    74,    59,    60,
      61,    20,    21,     0,     0,    23,     0,     0,    42,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,     0,
      68,    69,    70,    71,     0,    88,    72,     0,    73,    74,
     -17,   -17,   -17,   -17,     0,     0,   -17,     0,   -17,   -17,
       0,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,   -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,
     -17,   -16,   -16,   -16,   -16,     0,     0,   -16,     0,   -16,
     -16,    68,    69,    87,    71,     0,     0,    72,     0,    73,
      74,     0,   -16,   -16,   -16,   -16,   -16,   -16,   -16,   -16,
     -16,   -16,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,   -19,   -19,   -19,   -19,     0,     0,   -19,     0,
     -19,   -19,    68,    69,   -23,   -23,     0,     0,    72,     0,
      73,    74,     0,   -19,   -19,   -19,   -19,   -19,   -19,   -19,
     -19,   -19,   -19,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,   -19,   -19,   -19,     0,     0,     0,   -19,
       0,   -19,   -19,    68,    69,    70,     0,     0,     0,    72,
       0,    73,    74,     0,   -19,   -19,   -19,   -19,   -19,   -19,
     -19,   -19,   -19,   -19,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    68,    69,     0,     0,     0,     0,
      72,     0,    73,    74,    68,     0,     0,     0,     0,     0,
      72,     0,    73,    74,     0,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    72,     0,    73,    74,     0,
       0,     0,     0,     0,     0,     0,     0,    73,    74,     0,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-38)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int8 yycheck[] =
{
       1,    35,     7,     3,    41,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,     7,    -1,    20,
      20,    21,    58,    -1,    24,    25,     6,    -1,     8,    65,
      10,    -1,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    35,    36,    58,    38,    39,
      -1,    -1,    42,    -1,    65,    45,    -1,   103,    68,    69,
      70,    71,    72,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    -1,    -1,    87,    -1,    89,
       0,    -1,    -1,    93,    -1,    -1,     6,    -1,     8,    -1,
      10,    -1,   103,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    -1,    38,    39,
      -1,    41,    42,    -1,    44,    45,     3,     4,     5,     6,
      -1,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    38,    39,    -1,    -1,    42,    -1,    44,    45,    -1,
      47,     3,     4,     5,    -1,    -1,    -1,     9,    -1,    11,
      12,     3,     4,     5,     6,    -1,    -1,     9,    -1,    11,
      12,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    -1,    -1,    -1,    47,    -1,    -1,     6,    -1,
       8,    -1,    10,    -1,    46,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,    -1,
      38,    39,    -1,    -1,    42,    -1,    44,    45,    -1,     6,
      48,     8,    -1,    10,    -1,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      -1,    38,    39,    -1,    -1,    42,    -1,    44,    45,     6,
      -1,     8,    -1,    10,    -1,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,     3,     4,
       5,     6,    -1,    -1,     9,    -1,    11,    12,    35,    36,
      37,    38,    39,    -1,    -1,    42,    -1,    -1,    45,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    -1,
       3,     4,     5,     6,    -1,    40,     9,    -1,    11,    12,
       3,     4,     5,     6,    -1,    -1,     9,    -1,    11,    12,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,     3,     4,     5,     6,    -1,    -1,     9,    -1,    11,
      12,     3,     4,     5,     6,    -1,    -1,     9,    -1,    11,
      12,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,     3,     4,     5,     6,    -1,    -1,     9,    -1,
      11,    12,     3,     4,     5,     6,    -1,    -1,     9,    -1,
      11,    12,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,     3,     4,     5,    -1,    -1,    -1,     9,
      -1,    11,    12,     3,     4,     5,    -1,    -1,    -1,     9,
      -1,    11,    12,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,     3,     4,    -1,    -1,    -1,    -1,
       9,    -1,    11,    12,     3,    -1,    -1,    -1,    -1,    -1,
       9,    -1,    11,    12,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,     9,    -1,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    12,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    50,     0,     6,     8,    10,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    34,    35,    36,
      38,    39,    41,    42,    44,    45,    51,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    35,    45,    56,    60,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    35,     7,    35,
      36,    37,    56,    60,    56,    56,    56,    41,     3,     4,
       5,     6,     9,    11,    12,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,     7,    54,     5,    40,     6,
      47,    52,    54,    46,    56,    56,    56,    56,    56,    56,
      54,    56,    56,    53,    56,    48,    54
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
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




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

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

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
        case 4:
/* Line 1792 of yacc.c  */
#line 110 "gram.y"
    { printf("Introduceti o comanda:\n"); }
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 111 "gram.y"
    { 
							}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 132 "gram.y"
    { (yyval.num) = 3.142; }
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 136 "gram.y"
    { (yyval.num) = -(yyvsp[(2) - (2)].num); }
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 137 "gram.y"
    { (yyval.num) = (yyvsp[(1) - (1)].num); }
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 139 "gram.y"
    { 
								(yyval.num) = variabile_valori[(yyvsp[(1) - (1)].index)]; 
								}
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 144 "gram.y"
    { if ((yyvsp[(3) - (3)].num) == 0) { yyerror("Nu se poate imaprti la 0"); exit(1); } else (yyval.num) = (yyvsp[(1) - (3)].num) 							/ (yyvsp[(3) - (3)].num); }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 145 "gram.y"
    {  (yyval.num) = (yyvsp[(1) - (3)].num) * (yyvsp[(3) - (3)].num);}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 146 "gram.y"
    { (yyval.num) = (yyvsp[(2) - (3)].num); }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 147 "gram.y"
    { (yyval.num) = (yyvsp[(1) - (3)].num) + (yyvsp[(3) - (3)].num); }
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 148 "gram.y"
    { (yyval.num) = (yyvsp[(1) - (3)].num) - (yyvsp[(3) - (3)].num); }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 149 "gram.y"
    { (yyval.num) = pow((yyvsp[(1) - (3)].num), (yyvsp[(3) - (3)].num)); }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 150 "gram.y"
    { (yyval.num) = modulo((yyvsp[(1) - (3)].num), (yyvsp[(3) - (3)].num)); }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 155 "gram.y"
    { 
								printf("salut :)\n"); exit(0); 
								}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 166 "gram.y"
    { 
								printf("%f\n", (float)variabile_valori[(yyvsp[(2) - (2)].index)]);
								}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 170 "gram.y"
    { 
								printf("%f\n", (float)(yyvsp[(2) - (2)].num));
								}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 173 "gram.y"
    { 
								printf("%s\n", (char*)(yyvsp[(2) - (2)].str));
								}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 176 "gram.y"
    { 
								printf("%f\n", (float)(yyvsp[(2) - (2)].num));
								}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 180 "gram.y"
    {
								(yyvsp[(2) - (4)].num) = (yyvsp[(2) - (4)].num) + (yyvsp[(4) - (4)].num); 
								printf("%f\n", (float)(yyvsp[(2) - (4)].num));
								}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 193 "gram.y"
    { (yyval.num) = sqrt((yyvsp[(2) - (2)].num)); }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 194 "gram.y"
    { (yyval.num) = factorial((yyvsp[(1) - (2)].num)); }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 195 "gram.y"
    { (yyval.num) = abs((yyvsp[(2) - (2)].num)); }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 196 "gram.y"
    { (yyval.num) = ceil((yyvsp[(2) - (2)].num)); }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 197 "gram.y"
    { (yyval.num) = floor((yyvsp[(2) - (2)].num)); }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 201 "gram.y"
    { (yyval.num) = cos((yyvsp[(2) - (2)].num)); }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 202 "gram.y"
    { (yyval.num) = sin((yyvsp[(2) - (2)].num)); }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 203 "gram.y"
    { (yyval.num) = tan((yyvsp[(2) - (2)].num)); }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 207 "gram.y"
    { (yyval.num) = log2((yyvsp[(2) - (2)].num)); }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 208 "gram.y"
    { (yyval.num) = log10((yyvsp[(2) - (2)].num)); }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 212 "gram.y"
    { (yyval.num) = cosh((yyvsp[(2) - (2)].num)); }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 213 "gram.y"
    { (yyval.num) = sinh((yyvsp[(2) - (2)].num)); }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 214 "gram.y"
    { (yyval.num) = tanh((yyvsp[(2) - (2)].num)); }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 220 "gram.y"
    { (yyval.num) = gbp_to_usd((yyvsp[(1) - (2)].num)); }
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 221 "gram.y"
    { (yyval.num) = usd_to_gbp((yyvsp[(1) - (2)].num)); }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 222 "gram.y"
    { (yyval.num) = gbp_to_euro((yyvsp[(1) - (2)].num)); }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 223 "gram.y"
    { (yyval.num) = euro_to_gbp((yyvsp[(1) - (2)].num)); }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 224 "gram.y"
    { (yyval.num) = usd_to_euro((yyvsp[(1) - (2)].num)); }
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 225 "gram.y"
    { (yyval.num) = euro_to_usd((yyvsp[(1) - (2)].num)); }
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 229 "gram.y"
    { (yyval.num) = cel_to_fah((yyvsp[(1) - (2)].num)); }
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 230 "gram.y"
    { (yyval.num) = fah_to_cel((yyvsp[(1) - (2)].num)); }
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 233 "gram.y"
    { (yyval.num) = m_to_km((yyvsp[(1) - (2)].num)); }
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 234 "gram.y"
    { (yyval.num) = km_to_m((yyvsp[(1) - (2)].num)); }
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 237 "gram.y"
    { (yyval.num) = set_variabila((yyvsp[(2) - (4)].index), (yyvsp[(4) - (4)].num));}
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 238 "gram.y"
    {(yyval.num) = set_variabila((yyvsp[(1) - (3)].index), (yyvsp[(3) - (3)].num));}
    break;


/* Line 1792 of yacc.c  */
#line 1886 "gram.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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


/* Line 2055 of yacc.c  */
#line 240 "gram.y"



				/****************** punct de start *********************************/

int main(int argc, char **argv)
{
	char* c = "";

	// deschide fisier output
	deschide_fisier("output.py");

	// import modulele pentru operatii matematice, conversii monede si distante
	fprintf(f, "%s\n%s\n%s\n%s\n\n\n", 	"#!/usr/bin/python", "import math", "import currency.converter",
	"from measurement.measures import Distance");

	//printf("Command line ASor File? (Enter C or F): ");
	//scanf("%s", c);
	

	if (strcmp(c, "f")==0 || strcmp(c, "F")==0) {
		// File input
		printf("Ok, please tell me the name of the file: ");
		scanf("%s", c);

		yyin = fopen(c, "r");
		if (!yyin) {
			printf("ERROR: Couldn't open file %s\n", c);
			exit(-1);
		}
		yyparse();
		
		printf("All done with %s\n", c);
	}
	else {
		// Command line
		printf("Ok, command line it is!\n");
		
		yyin = stdin;
		yyparse();
	}

	inchide_fisier();
}


/* Afiseaza mesaj de eroare */
void yyerror(const char *s)
{
	printf("EROARE: %s\n la linia: %d", s, yylineno);
}
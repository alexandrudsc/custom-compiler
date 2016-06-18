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
						/************** ------ sectiunea trece neinterpretata de bison ------- **********/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "func.h"
#include "gram.tab.h"

#define REAL 1
#define INTREG 2
#define WORD 3

int tastatura = 1;		/* daca inputul este de la tastatura sau nu */

			/* fisier pentru cod output. Definifit in op_fisier.h */
extern FILE *f;

			/* Stochez variabile. Definite in mem.h */
extern double variabile_valori[100];
extern int variabile_valori_int[100];
extern char* variabile_cuvinte[100];
extern int variabile_set[100];

			/* functii si variabile flex */
extern int yylex(void);			// functie apelata pentru recunoastere token-uri din input si returnare la
								// parser 
extern void yyterminate();		// functie apelata pentru terminare parsare
void yyerror(const char *s);	// functie apelata la eroare de parsare
extern FILE* yyin;				// pointer pentru fluxul de intrare

extern int yylineno;			// numarul liniei - folosit la indicare eroare

/* Line 371 of yacc.c  */
#line 103 "gram.tab.c"

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
     MAI_MIC = 279,
     MAI_MARE = 280,
     EGALITATE = 281,
     M_IN_KM = 282,
     KM_IN_M = 283,
     VAR_DECLAR = 284,
     VAR_DECLAR_INT = 285,
     VARIABILA = 286,
     VARIABILA_STR = 287,
     NUMAR = 288,
     CUVANT = 289,
     AFISEAZA = 290,
     DOUA_PCT = 291,
     VIRGULA = 292,
     EOL = 293,
     START = 294,
     STOP = 295,
     IF = 296,
     ELSE = 297,
     WHILE = 298,
     FOR = 299,
     NEXT = 300,
     ACOLADA_D = 301,
     ACOLADA_S = 302,
     PARANTEZA_D = 303,
     PARANTEZA_S = 304
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 41 "gram.y"

	int index;
	double num;
	char* str;


/* Line 387 of yacc.c  */
#line 202 "gram.tab.c"
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
#line 230 "gram.tab.c"

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
#define YYLAST   489

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  65
/* YYNRULES -- Number of states.  */
#define YYNSTATES  161

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    12,    14,    17,    20,
      22,    24,    26,    28,    30,    32,    34,    36,    39,    41,
      43,    45,    47,    51,    55,    59,    63,    67,    69,    73,
      75,    82,    86,    90,    94,    98,   104,   112,   113,   118,
     123,   130,   135,   137,   139,   141,   143,   148,   153,   158,
     163,   168,   173,   178,   183,   188,   193,   198,   203,   208,
     210,   215,   220,   225,   230,   234
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      51,     0,    -1,    -1,    51,    52,    -1,    38,    -1,    53,
      38,    -1,    70,    -1,    54,    38,    -1,    62,    38,    -1,
      56,    -1,    58,    -1,    63,    -1,    69,    -1,    61,    -1,
      59,    -1,    60,    -1,     8,    -1,     6,    56,    -1,    33,
      -1,    31,    -1,    55,    -1,    63,    -1,    56,     3,    56,
      -1,    56,     4,    56,    -1,    49,    56,    48,    -1,    56,
       5,    56,    -1,    56,     6,    56,    -1,    57,    -1,    56,
      12,    56,    -1,    40,    -1,     9,    49,    56,    37,    56,
      48,    -1,    56,    24,    56,    -1,    56,    25,    56,    -1,
      56,    26,    56,    -1,    43,    56,    53,    -1,    41,    58,
      53,    42,    53,    -1,    44,    49,    56,    45,    48,    36,
      53,    -1,    -1,    35,    49,    58,    48,    -1,    35,    49,
      34,    48,    -1,    35,    49,    34,    37,    56,    48,    -1,
      35,    49,    56,    48,    -1,    67,    -1,    65,    -1,    64,
      -1,    66,    -1,    10,    49,    56,    48,    -1,    11,    49,
      56,    48,    -1,    17,    49,    56,    48,    -1,    15,    49,
      56,    48,    -1,    16,    49,    56,    48,    -1,    18,    49,
      56,    48,    -1,    19,    49,    56,    48,    -1,    20,    49,
      56,    48,    -1,    13,    49,    56,    48,    -1,    14,    49,
      56,    48,    -1,    21,    49,    56,    48,    -1,    22,    49,
      56,    48,    -1,    23,    49,    56,    48,    -1,    68,    -1,
      27,    49,    56,    48,    -1,    28,    49,    56,    48,    -1,
      29,    31,     7,    53,    -1,    30,    31,     7,    53,    -1,
      31,     7,    53,    -1,    32,     7,    34,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   110,   110,   111,   116,   117,   118,   119,   120,   125,
     126,   127,   128,   133,   134,   135,   139,   144,   145,   147,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     172,   177,   178,   179,   182,   186,   190,   194,   194,   199,
     204,   208,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   229,   230,   231,   236,   239,   246,   247,   248,   252,
     257,   258,   262,   263,   264,   267
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
  "COSH", "SINH", "TANH", "MAI_MIC", "MAI_MARE", "EGALITATE", "M_IN_KM",
  "KM_IN_M", "VAR_DECLAR", "VAR_DECLAR_INT", "VARIABILA", "VARIABILA_STR",
  "NUMAR", "CUVANT", "AFISEAZA", "DOUA_PCT", "VIRGULA", "EOL", "START",
  "STOP", "IF", "ELSE", "WHILE", "FOR", "NEXT", "ACOLADA_D", "ACOLADA_S",
  "PARANTEZA_D", "PARANTEZA_S", "$accept", "program_input", "linie",
  "linie_exec", "structura_control", "constant", "expr", "op_putere",
  "comparare", "structura_while", "structura_if", "structura_for",
  "afisare_ecran", "functie", "functii_trig", "logaritm", "functii_hiper",
  "conversie", "conv_distanta", "atribuire", "atribuire_str", YY_NULL
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    51,    52,    52,    52,    52,    52,    53,
      53,    53,    53,    54,    54,    54,    55,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      57,    58,    58,    58,    59,    60,    61,    62,    62,    62,
      62,    62,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    64,    64,    64,    65,    65,    66,    66,    66,    67,
      68,    68,    69,    69,    69,    70
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     3,     3,     3,     3,     3,     1,     3,     1,
       6,     3,     3,     3,     3,     5,     7,     0,     4,     4,
       6,     4,     1,     1,     1,     1,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     1,
       4,     4,     4,     4,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,    16,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    19,     0,    18,     0,     4,    29,     0,
       0,     0,     0,     3,     0,     0,    20,     9,    27,    10,
      14,    15,    13,     0,    21,    44,    43,    45,    42,    59,
      12,     6,    19,    17,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     5,     7,     0,     0,     0,     0,     0,     0,     0,
       0,     8,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      64,    65,     0,     0,     0,     0,     0,    34,     0,    24,
      22,    23,    25,    26,    28,    31,    32,    33,     0,    46,
      47,    54,    55,    49,    50,    48,    51,    52,    53,    56,
      57,    58,    60,    61,    62,    63,     0,    39,    41,    38,
       0,    26,     0,     0,     0,    35,     0,    30,    40,     0,
      36
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    54,    45,    46,    47,    48,    49,    50,
      51
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -69
static const yytype_int16 yypact[] =
{
     -69,   104,   -69,   432,   -69,   -42,   -41,   -23,   -22,   -21,
       1,     5,    24,    25,    32,    43,    50,    51,    52,    54,
      56,   -10,    17,    42,   102,   -69,    62,   -69,   -69,   432,
     432,    80,   432,   -69,    92,   103,   -69,   463,   -69,   -69,
     -69,   -69,   -69,   105,   -36,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,    19,   -69,   432,   432,   432,   432,   432,
     432,   432,   432,   432,   432,   432,   432,   432,   432,   432,
     432,   133,   143,   358,   117,   395,   463,   358,   151,   432,
      30,   -69,   -69,   432,   432,   432,   432,   432,   432,   432,
     432,   -69,   345,    90,   192,   206,   210,   220,   230,   240,
     244,   257,   261,   271,   281,   291,   295,   308,   358,   358,
     -69,   -69,   -33,   182,   127,   110,   432,   -69,     8,   -69,
     164,    68,    94,    19,    40,    40,    40,    40,   432,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   432,   -69,   -69,   -69,
     358,    13,   129,   312,   322,   -69,   147,   -69,   -69,   358,
     -69
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -69,   -69,   -69,   -68,   -69,   -69,     0,   -69,   -28,   -69,
     -69,   -69,   -69,    -1,   -69,   -69,   -69,   -69,   -69,   -69,
     -69
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -18
static const yytype_int16 yytable[] =
{
      44,    77,   -11,    53,   146,   110,   -11,    55,    56,   115,
     117,    83,    84,    85,    86,   147,    83,    84,    85,   -17,
      87,    71,    83,    84,    85,    87,    57,    58,    59,    76,
      78,    87,    80,    83,    84,    85,    86,   -17,   -17,   -17,
     144,   145,    87,    83,    84,    85,    86,   114,    72,    73,
      60,   -17,    87,   152,    61,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,    83,    44,    62,    63,   113,    44,    44,   119,   118,
      87,    64,   155,   120,   121,   122,   123,   124,   125,   126,
     127,   160,    65,    83,    84,    85,    86,    83,    84,    66,
      67,    68,    87,    69,     2,    70,    87,    44,    44,    74,
       3,    75,     4,     5,     6,     7,   151,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,   153,    79,
      81,    19,    20,    21,    22,    23,    24,    25,   129,    26,
     108,    82,    27,    91,    28,    29,   154,    30,    31,    44,
     109,   111,   150,    32,    83,    84,    85,   116,    44,     4,
       5,     6,     7,    87,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,   149,    87,   156,    19,    20,
      21,    22,    23,   159,    25,    83,    84,    85,    86,     0,
       0,    28,     0,     0,    87,    83,    84,    85,    86,     0,
      32,     0,     0,     0,    87,     0,    88,    89,    90,    83,
      84,    85,    86,    83,    84,    85,    86,     0,    87,     0,
       0,     0,    87,    83,    84,    85,    86,     0,     0,     0,
     148,     0,    87,    83,    84,    85,    86,     0,     0,     0,
     130,     0,    87,    83,    84,    85,    86,    83,    84,    85,
      86,     0,    87,     0,   131,     0,    87,     0,   132,     0,
      83,    84,    85,    86,    83,    84,    85,    86,   133,    87,
       0,     0,     0,    87,    83,    84,    85,    86,   134,     0,
       0,     0,     0,    87,    83,    84,    85,    86,   135,     0,
       0,     0,   136,    87,    83,    84,    85,    86,    83,    84,
      85,    86,     0,    87,     0,   137,     0,    87,     0,   138,
       0,    83,    84,    85,    86,    83,    84,    85,    86,   139,
      87,     0,     0,     0,    87,    83,    84,    85,    86,   140,
       0,     0,     0,     0,    87,     0,     0,     0,     0,   141,
       0,     0,     0,   142,     0,     0,     0,     0,    83,    84,
      85,    86,     0,     0,     0,     0,   143,    87,     0,     0,
     157,     0,     0,     0,     3,     0,     4,     5,     6,     7,
     158,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,   128,     0,     0,    19,    20,    21,    22,    23,
       0,    25,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     3,     0,     4,     5,     6,     7,    32,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,     0,
       0,     0,    19,    20,     0,     0,    52,     0,    25,   112,
       0,     0,     0,     0,     0,    28,     0,     0,     3,     0,
       4,     5,     6,     7,    32,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,     0,     0,     0,    19,
      20,     0,     0,    52,     0,    25,    83,    84,    85,    86,
       0,     0,    28,     0,     0,    87,     0,     0,     0,     0,
       0,    32,     0,     0,     0,     0,     0,    88,    89,    90
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-69)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       1,    29,    38,     3,    37,    73,    42,    49,    49,    77,
      78,     3,     4,     5,     6,    48,     3,     4,     5,     6,
      12,    31,     3,     4,     5,    12,    49,    49,    49,    29,
      30,    12,    32,     3,     4,     5,     6,    24,    25,    26,
     108,   109,    12,     3,     4,     5,     6,    75,    31,     7,
      49,    38,    12,    45,    49,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,     3,    73,    49,    49,    75,    77,    78,    48,    79,
      12,    49,   150,    83,    84,    85,    86,    87,    88,    89,
      90,   159,    49,     3,     4,     5,     6,     3,     4,    49,
      49,    49,    12,    49,     0,    49,    12,   108,   109,     7,
       6,    49,     8,     9,    10,    11,   116,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,   128,    49,
      38,    27,    28,    29,    30,    31,    32,    33,    48,    35,
       7,    38,    38,    38,    40,    41,   146,    43,    44,   150,
       7,    34,    42,    49,     3,     4,     5,     6,   159,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    48,    12,    48,    27,    28,
      29,    30,    31,    36,    33,     3,     4,     5,     6,    -1,
      -1,    40,    -1,    -1,    12,     3,     4,     5,     6,    -1,
      49,    -1,    -1,    -1,    12,    -1,    24,    25,    26,     3,
       4,     5,     6,     3,     4,     5,     6,    -1,    12,    -1,
      -1,    -1,    12,     3,     4,     5,     6,    -1,    -1,    -1,
      48,    -1,    12,     3,     4,     5,     6,    -1,    -1,    -1,
      48,    -1,    12,     3,     4,     5,     6,     3,     4,     5,
       6,    -1,    12,    -1,    48,    -1,    12,    -1,    48,    -1,
       3,     4,     5,     6,     3,     4,     5,     6,    48,    12,
      -1,    -1,    -1,    12,     3,     4,     5,     6,    48,    -1,
      -1,    -1,    -1,    12,     3,     4,     5,     6,    48,    -1,
      -1,    -1,    48,    12,     3,     4,     5,     6,     3,     4,
       5,     6,    -1,    12,    -1,    48,    -1,    12,    -1,    48,
      -1,     3,     4,     5,     6,     3,     4,     5,     6,    48,
      12,    -1,    -1,    -1,    12,     3,     4,     5,     6,    48,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    48,
      -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    48,    12,    -1,    -1,
      48,    -1,    -1,    -1,     6,    -1,     8,     9,    10,    11,
      48,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    37,    -1,    -1,    27,    28,    29,    30,    31,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,     6,    -1,     8,     9,    10,    11,    49,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    27,    28,    -1,    -1,    31,    -1,    33,    34,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,     6,    -1,
       8,     9,    10,    11,    49,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    27,
      28,    -1,    -1,    31,    -1,    33,     3,     4,     5,     6,
      -1,    -1,    40,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    24,    25,    26
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    51,     0,     6,     8,     9,    10,    11,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    27,
      28,    29,    30,    31,    32,    33,    35,    38,    40,    41,
      43,    44,    49,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    31,    56,    63,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    31,    31,     7,     7,    49,    56,    58,    56,    49,
      56,    38,    38,     3,     4,     5,     6,    12,    24,    25,
      26,    38,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,     7,     7,
      53,    34,    34,    56,    58,    53,     6,    53,    56,    48,
      56,    56,    56,    56,    56,    56,    56,    56,    37,    48,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    53,    53,    37,    48,    48,    48,
      42,    56,    45,    56,    56,    53,    48,    48,    48,    36,
      53
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
#line 116 "gram.y"
    { if (tastatura) printf("toy>> "); }
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 117 "gram.y"
    { if (tastatura) printf("toy>> "); }
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 118 "gram.y"
    { if (tastatura) printf("toy>> "); }
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 119 "gram.y"
    { if (tastatura) printf("toy>> "); }
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 120 "gram.y"
    { if (tastatura) printf("toy>> "); }
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 139 "gram.y"
    { (yyval.num) = 3.142; }
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 144 "gram.y"
    { (yyval.num) = -(yyvsp[(2) - (2)].num); }
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 145 "gram.y"
    { (yyval.num) = (yyvsp[(1) - (1)].num); }
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 147 "gram.y"
    { 
								if (variabile_set[(yyvsp[(1) - (1)].index)] == INTREG)
								{
									(yyval.num) = variabile_valori_int[(yyvsp[(1) - (1)].index)];
								}
								else if (variabile_set[(yyvsp[(1) - (1)].index)] == REAL)
								{
									(yyval.num) = variabile_valori[(yyvsp[(1) - (1)].index)];
								}
								}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 159 "gram.y"
    { if ((yyvsp[(3) - (3)].num) == 0) { yyerror("Nu se poate imaprti la 0"); exit(1); } else (yyval.num) = (yyvsp[(1) - (3)].num) 							/ (yyvsp[(3) - (3)].num); }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 160 "gram.y"
    {  (yyval.num) = (yyvsp[(1) - (3)].num) * (yyvsp[(3) - (3)].num);}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 161 "gram.y"
    { (yyval.num) = (yyvsp[(2) - (3)].num); }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 162 "gram.y"
    { (yyval.num) = (yyvsp[(1) - (3)].num) + (yyvsp[(3) - (3)].num); }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 163 "gram.y"
    { (yyval.num) = (yyvsp[(1) - (3)].num) - (yyvsp[(3) - (3)].num); }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 165 "gram.y"
    { (yyval.num) = modulo((yyvsp[(1) - (3)].num), (yyvsp[(3) - (3)].num)); }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 166 "gram.y"
    { 
									if (tastatura)  printf("salut :)\n"); exit(0); 
									}
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 172 "gram.y"
    {
																			(yyval.num) = pow((yyvsp[(3) - (6)].num), (yyvsp[(5) - (6)].num)); 
																		}
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 177 "gram.y"
    { (yyval.num) = (yyvsp[(1) - (3)].num) < (yyvsp[(3) - (3)].num); }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 178 "gram.y"
    { (yyval.num) = (yyvsp[(1) - (3)].num) > (yyvsp[(3) - (3)].num); }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 179 "gram.y"
    { (yyval.num) = (yyvsp[(1) - (3)].num) == (yyvsp[(3) - (3)].num); }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 182 "gram.y"
    {;}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 186 "gram.y"
    { if ((int)(yyvsp[(2) - (5)].num)) printf("if"); else printf("%d\n", (int)(yyvsp[(2) - (5)].num)); }
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 194 "gram.y"
    { if ((int)(yyvsp[(3) - (4)].num) == 1) 
																	printf("Adevarat\n");
																  else
																  	printf("Fals\n");	
																}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 199 "gram.y"
    { 
																	char * _TEMPSTR = (char*)(yyvsp[(3) - (4)].str);
																	_TEMPSTR[strlen(_TEMPSTR) - 1] = '\0';
																	printf("%s ", _TEMPSTR);
																}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 205 "gram.y"
    { 
																	printf("%s %f\n", (char*)(yyvsp[(3) - (6)].str), (float)(yyvsp[(5) - (6)].num));
																}
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 209 "gram.y"
    {
																	printf("%f\n", (float)((yyvsp[(3) - (4)].num)));
																}
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 220 "gram.y"
    { (yyval.num) = sqrt((yyvsp[(3) - (4)].num)); }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 221 "gram.y"
    { (yyval.num) = factorial((yyvsp[(3) - (4)].num)); }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 222 "gram.y"
    { (yyval.num) = abs((yyvsp[(3) - (4)].num)); }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 223 "gram.y"
    { (yyval.num) = ceil((yyvsp[(3) - (4)].num)); }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 224 "gram.y"
    { (yyval.num) = floor((yyvsp[(3) - (4)].num)); }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 229 "gram.y"
    { (yyval.num) = cos((yyvsp[(3) - (4)].num)); }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 230 "gram.y"
    { (yyval.num) = sin((yyvsp[(3) - (4)].num)); }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 231 "gram.y"
    { (yyval.num) = tan((yyvsp[(3) - (4)].num)); }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 236 "gram.y"
    { 			 
																(yyval.num) = log((yyvsp[(3) - (4)].num)); 
															}
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 239 "gram.y"
    { 		
																(yyval.num) = log10((yyvsp[(3) - (4)].num)); 
															}
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 246 "gram.y"
    { (yyval.num) = cosh((yyvsp[(3) - (4)].num)); }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 247 "gram.y"
    { (yyval.num) = sinh((yyvsp[(3) - (4)].num)); }
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 248 "gram.y"
    { (yyval.num) = tanh((yyvsp[(3) - (4)].num)); }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 257 "gram.y"
    { (yyval.num) = m_la_km((yyvsp[(3) - (4)].num)); }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 258 "gram.y"
    { (yyval.num) = km_la_m((yyvsp[(3) - (4)].num)); }
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 262 "gram.y"
    { (yyval.num) = set_variabila((yyvsp[(2) - (4)].index), (yyvsp[(4) - (4)].num)); }
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 263 "gram.y"
    { (yyval.num) = set_variabila_int((yyvsp[(2) - (4)].index), (int)(yyvsp[(4) - (4)].num)); }
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 264 "gram.y"
    { (yyval.num) = set_variabila((yyvsp[(1) - (3)].index), (yyvsp[(3) - (3)].num)); }
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 267 "gram.y"
    { (yyval.str) = (char*)set_variabila_str((yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str)); }
    break;


/* Line 1792 of yacc.c  */
#line 1918 "gram.tab.c"
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
#line 268 "gram.y"



				/****************** punct de start *********************************/

int main(int argc, char **argv)
{

	char* c = "";
	c = (char*)malloc(sizeof(char) * 100);		//sir de caractere alocat dinamic: pentru citire


	// alegem sursa codului
	if (argc > 1) {										// Compilare de fisier
		
		tastatura = 0;									// input-ul nu este de la tastatura

		// deschidere fisier output de cod C
		if (argc > 2)
			deschide_fisier(strcat(argv[2], ".c"));
		else
			deschide_fisier("output\\cod.c");

		yyin = fopen(argv[1], "r");
		if (!yyin) {
			printf("Eroare la deschidere fisier %s\n", argv[1]);
			exit(-1);
		}

		yyparse();
	}
	else {												// Compilare cod din linia de comanda
		
		printf("Bine ai venit\n");
		printf("toy>> ");
		tastatura  = 1;

		// deschidere fisier output de cod python
		deschide_fisier("output\\cod.c");

		yyin = stdin;
		yyparse();
	}

	inchide_fisier();				// inchid fisierul de output pentru cod python
	free(c);						// eliberez pointer-ul alocat dinamic
	free_mem();						// eliberez memoria de pentru variabile string-uri
}


/* Afiseaza mesaj de eroare */
void yyerror(const char *s)
{
	printf("EROARE: %s\n la linia: %d\n", s, yylineno );
	getch();
}
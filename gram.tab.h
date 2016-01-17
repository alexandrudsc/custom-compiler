/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
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
     VAR_DECLAR = 289,
     VARIABILA = 290,
     NUMAR = 291,
     CUVANT = 292,
     AFISEAZA = 293,
     PARANTEZA_S = 294,
     PARANTEZA_D = 295,
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
/* Line 2058 of yacc.c  */
#line 33 "gram.y"

	int index;
	double num;
	char* str;


/* Line 2058 of yacc.c  */
#line 110 "gram.tab.h"
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

%{
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "mem.h"
#include "gram.tab.h"

#include "op_fisier.h"

/* fisier pentru cod output. Definifi in op_fisier.h*/
extern FILE *f;
%}

/* optiune pentru oprire eroare "undefined reference to 'yywrap'" de la Flex */
%option noyywrap
/* optiune pentru numararea liniei curente in interpretare cu Flex */
%option yylineno

/* reguli de gramatica
	[ \t] --spatiu sau tab
	
	[0-9]+(\.[0-9]+)?  -- combinatii de numere 
	
	[a-zA-Z0-9]+ -- combinatii de litere (majuscule sau minuscule) si numere
	
	. 	-- orice alt caracter => EROARE
*/
						/****************** definire gramatica ***************/
%%
[ \t]
[0-9]+(\.[0-9]+)?          					{  yylval.num = atof(yytext); return NUMBER; }
"+"                         					{ return ADD; }
"-"                         					{ return SUB; }
"*"                         					{ return MUL; }
"/"                         					{ return DIV; }
"%"																		{ return MOD; }
"^"                         					{ return POW; }
"="																		{ return EQUALS; }
"("																		{ return L_BRACKET; }
")"																		{ return R_BRACKET; }
"!"                         					{ return FACTORIAL; }
("pi")|("PI")													{ return PI; }
("mod")|("MOD")												{ return MOD; }
("pow")|("POW")												{	return POW; }
("floor")|("FLOOR")				  					{ return FLOOR; }
("ceil")|("CEIL")											{ return CEIL; }
("abs")|("ABS")												{ return ABS; }
("cos")|("COS")												{ return COS; }
("sin")|("SIN")												{ return SIN; }
("tan")|("TAN")												{ return TAN; }
("sinh")|("SINH")											{ return SINH; }
("cosh")|("COSH")											{ return COSH; }
("tanh")|("TANH")											{ return TANH; }
("sqrt")|("SQRT")											{ return SQRT; }
("log2")|("LOG2")											{ return LOG2; }
("log10")|("LOG10")										{ return LOG10; }
("gbp_to_usd")|("GBP_TO_USD")					{ return GBP_TO_USD; }
("usd_to_gbp")|("USD_TO_GBP")					{ return USD_TO_GBP; }
("gbp_to_euro")|("GBP_TO_EURO")				{ return GBP_TO_EURO; }
("euro_to_gbp")|("EURO_TO_GBP") 			{ return EURO_TO_GBP; }
("usd_to_euro")|("USD_TO_EURO")				{ return USD_TO_EURO; }
("euro_to_usd")|("EURO_TO_USD")				{ return EURO_TO_USD; }
("cel_to_fah")|("CEL_TO_FAH")					{ return CEL_TO_FAH; }
("fah_to_cel")|("FAH_TO_CEL")					{ return FAH_TO_CEL; }
("km_to_m")|("KM_TO_M")								{ return KM_TO_M; }
("m_to_km")|("M_TO_KM")								{ return M_TO_KM; }
("afiseaza")										{ return AFISEAZA; }
"gata"	return STOP;
"stop"	return STOP;
("var")|("VAR")												{ return VAR_KEYWORD; }
[a-zA-Z0-9]+  												{ yylval.index = adauga_variabila(yytext); return VARIABLE; }
[\n]                        					{ return EOL; }
. 																		{ yyerror("Simbol nedefinit"); exit(1); } 
%%

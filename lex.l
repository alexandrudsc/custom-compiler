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
	
	["a-zA-Z0-9"]+ -- cuvinte	

	. 	-- orice alt caracter => EROARE
*/
						/****************** definire gramatica ***************/
%%
[ \t]
[0-9]+(\.[0-9]+)?          					{  yylval.num = atof(yytext); return NUMAR; }
"+"                         					{ return ADUNARE; }
"-"                         					{ return SCADERE; }
"*"                         					{ return INMULTIRE; }
"/"                         					{ return IMPARTIRE; }
"%"																		{ return MOD; }
"^"                         					{ return PUTERE; }
"="																		{ return EGAL; }
"("																		{ return L_BRACKET; }
")"																		{ return R_BRACKET; }
"!"                         					{ return FACTORIAL; }
("pi")|("PI")													{ return PI; }
("mod")|("MOD")												{ return MOD; }
("PUTERE")|("PUTERE")												{	return PUTERE; }
("|sus")|("ROT_ADAUGARE")				  				{ return ROT_ADAUGARE; }
("|jos")|("ROT_SCADERE")								{ return ROT_SCADERE; }
("MODUL")|("MODUL")											{ return MODUL; }
("cos")|("COS")												{ return COS; }
("sin")|("SIN")												{ return SIN; }
("tan")|("TAN")												{ return TAN; }
("sinh")|("SINH")											{ return SINH; }
("cosh")|("COSH")											{ return COSH; }
("tanh")|("TANH")											{ return TANH; }
("RAD")|("RAD")												{ return RAD; }
("log2")|("LOG2")											{ return LOG2; }
("log10")|("LOG10")											{ return LOG10; }
("gbp_in_usd")|("GBP_IN_USD")					{ return GBP_IN_USD; }
("usd_in_gbp")|("USD_IN_GBP")					{ return USD_IN_GBP; }
("gbp_in_euro")|("GBP_IN_EURO")				{ return GBP_IN_EURO; }
("euro_in_gbp")|("EURO_IN_GBP") 			{ return EURO_IN_GBP; }
("usd_in_euro")|("USD_IN_EURO")				{ return USD_IN_EURO; }
("euro_in_usd")|("EURO_IN_USD")				{ return EURO_IN_USD; }
("cel_in_fah")|("CEL_IN_FAH")					{ return CEL_IN_FAH; }
("fah_in_cel")|("FAH_IN_CEL")					{ return FAH_IN_CEL; }
("km_in_m")|("KM_IN_M")								{ return KM_IN_M; }
("m_in_km")|("M_IN_KM")								{ return M_IN_KM; }
("->")										{ return AFISEAZA; }


"?"													{return IF;}
"de"												{return FOR;}
"ori"												{return NEXT;}
"cat timp"											{return WHILE;}

"gata"	return STOP;
"stop"	return STOP;
("var")|("VAR")												{ return VAR_KEYWORD; }

[a-zA-Z0-9]+  												{ yylval.index = adauga_variabila(yytext); return VARIABLE; }
["a-zA-Z0-9"]+												{ yylval.str = yytext; return CUVANT; }
[\n]                        								{ return EOL; }

. 																		{ yyerror("Simbol nedefinit"); exit(1); } 
%%

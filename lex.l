%{
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "mem.h"
#include "gram.tab.h"

#include "op_fisier.h"

/* fisier pentru cod output. Definifit in op_fisier.h*/
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
[0-9]+(\.[0-9]+)?          					{  yylval.num = atof(yytext); 
											fprintf(f, "%.2f", yylval.num); return NUMAR; }
"+"                         					{ fprintf(f, " + "); return ADUNARE; }
"-"                         					{ fprintf(f, " - "); return SCADERE; }
"*"                         					{ fprintf(f, " * "); return INMULTIRE; }
"/"                         					{ fprintf(f, " / "); return IMPARTIRE; }
"%"												{ fprintf(f, " % ");return MOD; }
"^"                         					{ fprintf(f, " math.pow"); return PUTERE; }
"="												{ fprintf(f, " = "); return EGAL; }
"("												{ fprintf(f, " ( ");return L_BRACKET; }
")"												{ fprintf(f, " ) ");return R_BRACKET; }
"!"                         					{ return FACTORIAL; }
("pi")|("PI")											{ return PI; }
("mod")|("MOD")											{ return MOD; }
("PUTERE")|("PUTERE")									{ fprintf(f, " math.pow"); return PUTERE; }
("|sus")|("ROT_ADAUGARE")				  				{ fprintf(f, " math.ceil"); return ROT_ADAUGARE; }
("|jos")|("ROT_SCADERE")								{ fprintf(f, " math.floor"); return ROT_SCADERE; }
("MODUL")|("MODUL")											{ fprintf(f, " abs"); return MODUL; }
("cos")|("COS")												{ fprintf(f, " math.cos"); return COS; }
("sin")|("SIN")												{ fprintf(f, " math.sin"); return SIN; }
("tan")|("TAN")												{ fprintf(f, " math.tan"); return TAN; }
("sinh")|("SINH")											{ fprintf(f, " math.sinh( "); return SINH; }
("cosh")|("COSH")											{ fprintf(f, " math.cosh( "); return COSH; }
("tanh")|("TANH")											{ fprintf(f, " math.tanh( "); return TANH; }
("RAD")|("RAD")												{ fprintf(f, " math.sqrt( "); return RAD; }
("log2")|("LOG2")											{ fprintf(f, " math.log( "); return LOG2; }
("log10")|("LOG10")											{ fprintf(f, " math.log( "); return LOG10; }
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
("->")										{ fprintf(f, "print "); return AFISEAZA; }


"?"													{ fprintf(f, " if "); return IF;}
"de"												{ fprintf(f, " for ");  return FOR;}
"ori"												{ return NEXT;}
"cat timp"											{ fprintf(f, " while "); return WHILE;}

"gata"												{ fprintf(f, "exit()"); return STOP;}
"stop"												{ fprintf(f, "exit()"); return STOP;}
("var")|("VAR")												{ return VAR_KEYWORD; }

[a-zA-Z0-9]+  												{ yylval.index = adauga_variabila(yytext); 
															fprintf(f, "%s", yytext);
															return VARIABLE; }

["a-zA-Z0-9"]+												{ yylval.str = yytext;  return CUVANT; }
[\n]                        								{ fprintf(f, "\n"); return EOL; }

. 															{ yyerror("Simbol nedefinit"); exit(1); } 
%%

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
						/****************** definire simboluri ***************/
%%
[ \t]											/* ignor spatiu si tab */

"start"|"START"									{ return START; }
"stop"|"STOP"									{ fprintf(f, "getchar();\nreturn 0; \n}"); return STOP; }
"gata"|"GATA"									{ fprintf(f, "getchar();\nreturn 0; \n}"); return STOP; }

[0-9]+(\.[0-9]+)?          						{ yylval.num = atof(yytext); 
												  fprintf(f, "%.2f", yylval.num); return NUMAR; }

"+"                         					{ fprintf(f, " + "); return ADUNARE; }
"-"                         					{ fprintf(f, " - "); return SCADERE; }
"*"                         					{ fprintf(f, " * "); return INMULTIRE; }
"/"                         					{ fprintf(f, " / "); return IMPARTIRE; }
"%"												{ fprintf(f, " % ");return MOD; }
"^"                         					{ fprintf(f, "pow"); return PUTERE; }
"="												{ fprintf(f, " = "); return EGAL; }

">"												{ fprintf(f, " > "); return MAI_MARE; }
"<"												{ fprintf(f, " < "); return MAI_MIC; }
"=="											{ fprintf(f, " == "); return EGALITATE; }

"("												{ fprintf(f, " ( ");return PARANTEZA_S; }
")"												{ fprintf(f, " ) ");return PARANTEZA_D; }
":"												{ fprintf(f, "; "); return DOUA_PCT; }
","												{ fprintf(f, ", "); return VIRGULA; }

"fact"                         					{ fprintf(f, "factorial"); return FACTORIAL; }
("pi")|("PI")											{ fprintf(f, "M_PI"); return PI; }
("mod")|("MOD")											{ return MOD; }
("putere")|("PUTERE")										{ fprintf(f, "pow"); return PUTERE; }
("|sus")									  				{ fprintf(f, "ceil"); return ROT_ADAUGARE; }
("|jos")													{ fprintf(f, "floor"); return ROT_SCADERE; }
("modul")|("MODUL")											{ fprintf(f, "abs"); return MODUL; }
("cos")|("COS")												{ fprintf(f, "cos"); return COS; }
("sin")|("SIN")												{ fprintf(f, "sin"); return SIN; }
("tan")|("TAN")												{ fprintf(f, "tan"); return TAN; }
("sinh")|("SINH")											{ fprintf(f, "sinh"); return SINH; }
("cosh")|("COSH")											{ fprintf(f, "cosh"); return COSH; }
("tanh")|("TANH")											{ fprintf(f, "tanh"); return TANH; }
("rad")|("RAD")												{ fprintf(f, "sqrt"); return RAD; }
("loge")|("LOGE")											{ fprintf(f, "log"); return LOG2; }
("log10")|("LOG10")											{ fprintf(f, "log10"); return LOG10; }

("km_>>_m")|("KM_>>_M")								{ fprintf(f, "km_la_m"); return KM_IN_M; }
("m_>>_km")|("M_>>_KM")								{ fprintf(f, "m_la_km");return M_IN_KM; }

("->")											{ fprintf(f, "AFISEAZA "); return AFISEAZA; }


"?"													{ fprintf(f, "if ( "); return IF;}
"??"												{ fprintf(f, "else ( "); return ELSE;}

"de"												{ 
													fprintf(f, "int i; for (i = 1; i < 5; i++) \n");
													return FOR;
													}
"ori"												{ return NEXT;}

"cat timp"											{ fprintf(f, " while "); return WHILE;}

("var")|("VAR")												{ fprintf(f, "double "); return VAR_DECLAR; }
("real")|("REAL")											{ fprintf(f, "double "); return VAR_DECLAR; }
("intreg")|("INTREG")										{ fprintf(f, "int "); return VAR_DECLAR_INT; }
[a-zA-Z0-9]+  												{ 
															yylval.index = adauga_variabila(yytext); 
															fprintf(f, "%s", yytext);
															return VARIABILA; }

["a-zA-Z0-9_"]+												{ fprintf(f, "%s", yytext); yylval.str = yytext;  return CUVANT; }
[\n]                        								{ fprintf(f, ";\n"); return EOL; }

. 															{ yyerror("Simbol nedefinit"); exit(1); } 
%%

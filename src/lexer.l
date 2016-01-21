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
						/****************** definire gramatica/token-uri ***************/
%%
[ \t]											/* ignor spatiu si tab */

"start"|"START"									{ return START; }
"stop"|"STOP"									{ fprintf(f, "exit()"); return STOP; }
"gata"|"GATA"									{ fprintf(f, "exit()"); return STOP; }

[0-9]+(\.[0-9]+)?          						{ yylval.num = atof(yytext); 
												  fprintf(f, "%.2f", yylval.num); return NUMAR; }

"+"                         					{ fprintf(f, " + "); return ADUNARE; }
"-"                         					{ fprintf(f, " - "); return SCADERE; }
"*"                         					{ fprintf(f, " * "); return INMULTIRE; }
"/"                         					{ fprintf(f, " / "); return IMPARTIRE; }
"%"												{ fprintf(f, " % ");return MOD; }
"^"                         					{ fprintf(f, "math.pow"); return PUTERE; }
"="												{ fprintf(f, " = "); return EGAL; }

">"												{ fprintf(f, " > "); return MAI_MARE; }
"<"												{ fprintf(f, " < "); return MAI_MIC; }
"=="											{ fprintf(f, " == "); return EGALITATE; }

"("												{ fprintf(f, " ( ");return PARANTEZA_S; }
")"												{ fprintf(f, " ) ");return PARANTEZA_D; }
":"												{ fprintf(f, ": "); return DOUA_PCT; }
","												{ fprintf(f, ", "); return VIRGULA; }

"!"                         					{ fprintf(f, "math.factorial"); return FACTORIAL; }
("pi")|("PI")											{ fprintf(f, "math.pi"); return PI; }
("mod")|("MOD")											{ return MOD; }
("putere")|("PUTERE")										{ fprintf(f, "math.pow"); return PUTERE; }
("|sus")									  				{ fprintf(f, "math.ceil"); return ROT_ADAUGARE; }
("|jos")													{ fprintf(f, "math.floor"); return ROT_SCADERE; }
("modul")|("MODUL")											{ fprintf(f, "abs"); return MODUL; }
("cos")|("COS")												{ fprintf(f, "math.cos"); return COS; }
("sin")|("SIN")												{ fprintf(f, "math.sin"); return SIN; }
("tan")|("TAN")												{ fprintf(f, "math.tan"); return TAN; }
("sinh")|("SINH")											{ fprintf(f, "math.sinh"); return SINH; }
("cosh")|("COSH")											{ fprintf(f, "math.cosh"); return COSH; }
("tanh")|("TANH")											{ fprintf(f, "math.tanh"); return TANH; }
("rad")|("RAD")												{ fprintf(f, "math.sqrt"); return RAD; }
("log2")|("LOG2")											{ fprintf(f, "math.log"); return LOG2; }
("log10")|("LOG10")											{ fprintf(f, "math.log"); return LOG10; }

("km_>>_m")|("KM_>>_M")								{ fprintf(f, "km_la_m"); return KM_IN_M; }
("m_>>_km")|("M_>>_KM")								{ fprintf(f, "m_la_km");return M_IN_KM; }

("->")										{ fprintf(f, "print "); return AFISEAZA; }


"?"													{ fprintf(f, "if: "); return IF;}
"??"												{ fprintf(f, "else: "); return ELSE;}

"de"												{ 
													fprintf(f, "for idx in range");
													return FOR;
													}
"ori"												{ return NEXT;}

"cat timp"											{ fprintf(f, " while "); return WHILE;}

("var")|("VAR")												{ return VAR_DECLAR; }

[a-zA-Z0-9]+  												{ 
															yylval.index = adauga_variabila(yytext); 
															fprintf(f, "%s", yytext);
															return VARIABILA; }

["a-zA-Z0-9_"]+												{ fprintf(f, "%s", yytext); yylval.str = yytext;  return CUVANT; }
[\n]                        								{ fprintf(f, "\n"); return EOL; }

. 															{ yyerror("Simbol nedefinit"); exit(1); } 
%%

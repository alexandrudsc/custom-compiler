%{
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
%}

						/************** ------declaratii bison ------- **************/



						/**** specificare tipuri de date ******/
%union {
	int index;
	double num;
	char* str;
}

						/******* definire token-uri ******/

			/* token-uri aritmetica */
%token<num> IMPARTIRE INMULTIRE ADUNARE SCADERE EGAL
%token<num> PI
%token<num> PUTERE RAD FACTORIAL MOD
%token<num> LOG2 LOG10
%token<num> ROT_ADAUGARE ROT_SCADERE MODUL
%token<num> COS SIN TAN COSH SINH TANH
			/* token-uri aritmetica conversii monede */
%token<num> GBP_IN_USD USD_IN_GBP 
%token<num> GBP_IN_EURO EURO_IN_GBP 
%token<num> USD_IN_EURO EURO_IN_USD
			/* token-uri aritmetica conversii grade*/
%token<num> CEL_IN_FAH FAH_IN_CEL
			/* token-uri aritmetica conversii distanta*/
%token<num> M_IN_KM KM_IN_M
			
			/* token-uri declarare variabile */
%token<num> VAR_KEYWORD 
%token<index> VARIABLE

			/* token-uri tipuri de date */
%token<num> NUMAR
%token<str> CUVANT
			
			/* token-uri functii */

%token      AFISEAZA

			/* token-uri sintaxa */
%token<num> L_BRACKET R_BRACKET
%token<num> EOL
%type<num> program_input
%type<num> line
%type<num> calculation
%type<num> constant
%type<num> expr
%type<num> function
%type<num> log_function
%type<num> trig_function
%type<num> hyperbolic_function
%type<num> atribuire
%type<num> conversion
%type<num> temperature_conversion
%type<num> distance_conversion

%token STOP

					/* token-uri structuri de control */
%token IF WHILE FOR NEXT
					/* token-uri precedenta operatorilor */
%left SCADERE 
%left ADUNARE
%left INMULTIRE 
%left IMPARTIRE 
%left PUTERE RAD 
%left L_BRACKET R_BRACKET

%%


		/**********			Definire gramatica/expresii 									 ************/
		/**********			Cod C asociat fiecarei expresii + Scriere in fisierul de output. ************/


program_input:
	| program_input line
	;
	
line: 
			EOL 			{ printf("Introduceti o comanda:\n"); }
		| calculation EOL  	{ 
							}
    ;

calculations_compus:
		'{' lista_calculation '}'

lista_calculation: lista_calculation calculation
		|
		;

calculation:
		  expr
		| structura_for
		| structura_while
		| function
		| atribuire
		;



constant: PI { $$ = 3.142; }
		;
		
expr:
			SCADERE expr			{ $$ = -$2; }
    	| NUMAR            		{ $$ = $1; }

		| VARIABLE				{ 
								$$ = variabile_valori[$1]; 
								}
		| constant	
		| function
		| expr IMPARTIRE expr     { if ($3 == 0) { yyerror("Nu se poate imaprti la 0"); exit(1); } else $$ = $1 							/ $3; }
		| expr INMULTIRE expr     	{  $$ = $1 * $3;}
		| L_BRACKET expr R_BRACKET { $$ = $2; }
		| expr ADUNARE expr     	{ $$ = $1 + $3; }
		| expr SCADERE expr   		{ $$ = $1 - $3; }
		| expr PUTERE expr     	{ $$ = pow($1, $3); }
		| expr MOD expr     	{ $$ = modulo($1, $3); }
		| afisare_ecran				


		| FOR
		| STOP					{ 
								printf("salut :)\n"); exit(0); 
								}
    ;

structura_for: FOR expr NEXT expr		

structura_while: 	WHILE  expr  calculation
					| WHILE expr calculations_compus
					;

afisare_ecran:	AFISEAZA VARIABLE { 
								printf("%f\n", (float)variabile_valori[$2]);
								}

		| AFISEAZA NUMAR	 	{ 
								printf("%f\n", (float)$2);
								}
		| AFISEAZA CUVANT	 	{ 
								printf("%s\n", (char*)$2);
								}
		| AFISEAZA function	 	{ 
								printf("%f\n", (float)$2);
								}
		| AFISEAZA expr ADUNARE expr
								{
								$2 = $2 + $4; 
								printf("%f\n", (float)$2);
								}

		;


function: 
			conversion
		| log_function
		| trig_function
		| hyperbolic_function
		|	RAD expr      					{ $$ = sqrt($2); }
		| expr FACTORIAL					{ $$ = factorial($1); }
		| MODUL expr 						{ $$ = abs($2); }
		| ROT_ADAUGARE expr 				{ $$ = ceil($2); }
		| ROT_SCADERE expr 					{ $$ = floor($2); }
		;

trig_function:
			COS expr  			  	{ $$ = cos($2); }
		| SIN expr 					{ $$ = sin($2); }
		| TAN expr 					{ $$ = tan($2); }
		;
	
log_function:
			LOG2 expr 				{ $$ = log2($2); }
		| LOG10 expr 				{ $$ = log10($2); }
		;
		
hyperbolic_function:
			COSH expr  			  	{ $$ = cosh($2); }
		| SINH expr 				{ $$ = sinh($2); }
		| TANH expr 				{ $$ = tanh($2); }
		;
		
conversion:
		temperature_conversion
		| distance_conversion
		| expr GBP_IN_USD   { $$ = gbp_to_usd($1); }
		| expr USD_IN_GBP   { $$ = usd_to_gbp($1); }
		| expr GBP_IN_EURO  { $$ = gbp_to_euro($1); }
		| expr EURO_IN_GBP  { $$ = euro_to_gbp($1); }
		| expr USD_IN_EURO  { $$ = usd_to_euro($1); }
		| expr EURO_IN_USD  { $$ = euro_to_usd($1); }
		;

temperature_conversion:
			expr CEL_IN_FAH 	{ $$ = cel_to_fah($1); }
		| expr FAH_IN_CEL 		{ $$ = fah_to_cel($1); }

distance_conversion:
			expr M_IN_KM 			{ $$ = m_to_km($1); }
		| expr KM_IN_M 			{ $$ = km_to_m($1); }
		
atribuire: 
		VAR_KEYWORD VARIABLE EGAL calculation { $$ = set_variabila($2, $4);}
		| VARIABLE EGAL calculation 			{$$ = set_variabila($1, $3);}
		;
%%


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
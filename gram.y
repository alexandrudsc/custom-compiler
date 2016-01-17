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
extern int VARIABILA_set[100];

			/* functii si variabile flex */
extern int yylex(void);			// functie apelata pentru recunoastere token-uri din input si returnare la
								// parser 
extern void yyterminate();		// functie apelata pentru terminare parsare
void yyerror(const char *s);	// functie apelata la eroare de parsare
extern FILE* yyin;				// pointer pentru fluxul de intrare

extern int yylineno;			// numarul liniei - folosit la indicare eroare
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
%token<num> VAR_DECLAR 
%token<index> VARIABILA

			/* token-uri tipuri de date */
%token<num> NUMAR
%token<str> CUVANT
			
			/* token-uri functii */

%token      AFISEAZA

			/* token-uri sintaxa */
%token<num> PARANTEZA_S PARANTEZA_D
%token<num> EOL
%type<num> program_input
%type<num> linie
%type<num> linie_exec
%type<num> constant
%type<num> expr
%type<num> functie
%type<num> logaritm
%type<num> functii_trig
%type<num> functii_hiper
%type<num> atribuire
%type<num> conversie
%type<num> conv_temperatura
%type<num> conv_distanta

%token STOP

					/* token-uri structuri de control */
%token IF WHILE FOR NEXT
					/* token-uri precedenta operatorilor */
%left SCADERE 
%left ADUNARE
%left INMULTIRE 
%left IMPARTIRE 
%left PUTERE RAD 
%left PARANTEZA_S PARANTEZA_D

%%


		/**********			Definire gramatica/expresii 									 ************/
		/**********			Cod C asociat fiecarei expresii + Scriere in fisierul de output. ************/


program_input:
	| program_input linie
	;
	
linie: 
			EOL 			{ printf("Introduceti o comanda:\n"); }
		| linie_exec EOL  	{ }
    ;

linie_execs_compus:
		'{' lista_linie_exec '}'

lista_linie_exec: lista_linie_exec linie_exec
		|
		;

linie_exec:
		  expr
		| structura_for
		| structura_while
		| functie
		| atribuire
		;



constant: PI { $$ = 3.142; }
		;
		
expr:
			SCADERE expr			{ $$ = -$2; }
    	| NUMAR            		{ $$ = $1; }

		| VARIABILA				{ 
								$$ = variabile_valori[$1]; 
								}
		| constant	
		| functie
		| expr IMPARTIRE expr     { if ($3 == 0) { yyerror("Nu se poate imaprti la 0"); exit(1); } else $$ = $1 							/ $3; }
		| expr INMULTIRE expr     	{  $$ = $1 * $3;}
		| PARANTEZA_S expr PARANTEZA_D { $$ = $2; }
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

structura_while: 	WHILE  expr  linie_exec
					| WHILE expr linie_execs_compus
					;

afisare_ecran:	AFISEAZA VARIABILA { 
								printf("%f\n", (float)variabile_valori[$2]);
								}

		| AFISEAZA NUMAR	 	{ 
								printf("%f\n", (float)$2);
								}
		| AFISEAZA CUVANT	 	{ 
								printf("%s\n", (char*)$2);
								}
		| AFISEAZA functie	 	{ 
								printf("%f\n", (float)$2);
								}
		| AFISEAZA expr ADUNARE expr
								{
								$2 = $2 + $4; 
								printf("%f\n", (float)$2);
								}

		;


functie: 
			conversie
		| logaritm
		| functii_trig
		| functii_hiper
		|	RAD expr      					{ $$ = sqrt($2); }
		| expr FACTORIAL					{ $$ = factorial($1); }
		| MODUL expr 						{ $$ = abs($2); }
		| ROT_ADAUGARE expr 				{ $$ = ceil($2); }
		| ROT_SCADERE expr 					{ $$ = floor($2); }
		;

functii_trig:
			COS expr  			  	{ $$ = cos($2); }
		| SIN expr 					{ $$ = sin($2); }
		| TAN expr 					{ $$ = tan($2); }
		;
	
logaritm:
			LOG2 expr 				{ 
									fseek(f, -4, SEEK_CUR);				// formatez functia log cu baza 2 din
									 									// modulul math
									fprintf(f, ", 2)\n"); 
									$$ = log2($2); 
									}
		| LOG10 expr 				{ 
									fseek(f, -4, SEEK_CUR);				// formatez functia log cu baza 10s 
																		// din modulul math
									fprintf(f, ", 10)\n");
									$$ = log10($2); 
									}
		;
		
functii_hiper:
			COSH expr  			  	{ $$ = cosh($2); }
		| SINH expr 				{ $$ = sinh($2); }
		| TANH expr 				{ $$ = tanh($2); }
		;
		
conversie:
		conv_temperatura
		| conv_distanta
		| expr GBP_IN_USD   { $$ = gbp_to_usd($1); }
		| expr USD_IN_GBP   { $$ = usd_to_gbp($1); }
		| expr GBP_IN_EURO  { $$ = gbp_to_euro($1); }
		| expr EURO_IN_GBP  { $$ = euro_to_gbp($1); }
		| expr USD_IN_EURO  { $$ = usd_to_euro($1); }
		| expr EURO_IN_USD  { $$ = euro_to_usd($1); }
		;

conv_temperatura:
			expr CEL_IN_FAH 	{ $$ = cel_to_fah($1); }
		| expr FAH_IN_CEL 		{ $$ = fah_to_cel($1); }

conv_distanta:
			expr M_IN_KM 			{ $$ = m_to_km($1); }
		| expr KM_IN_M 			{ $$ = km_to_m($1); }
		
atribuire: 
		VAR_DECLAR VARIABILA EGAL linie_exec { $$ = set_variabila($2, $4);}
		| VARIABILA EGAL linie_exec 			{$$ = set_variabila($1, $3);}
		;
%%


				/****************** punct de start *********************************/

int main(int argc, char **argv)
{
	char* c = "";

	c = (char*)malloc(sizeof(char) * 100);		//sir de caractere alocat dinamic: pentru citire


	// import modulele pentru operatii matematice, conversii monede si distante
	fprintf(f, "%s\n%s\n%s\n%s\n\n\n", 	"#!/usr/bin/python", "import math", "import currency.converter",
	"from measurement.measures import Distance");

	if (argc > 1) {										// Compilare de fisier
		
		// deschidere fisier output de cod python
		if (argc > 2)
			deschide_fisier(strcat(argv[2], ".py"));
		else
			deschide_fisier("cod_python.py");

		yyin = fopen(argv[1], "r");
		if (!yyin) {
			printf("Eroare la deschidere fisier %s\n", argv[1]);
			exit(-1);
		}

		yyparse();
		printf("Compilare cu succes: %s\n", argv[1]);
	}
	else {												// Compilare cod din linia de comanda
		// deschidere fisier output de cod python
		deschide_fisier("cod_python.py");

		yyin = stdin;
		yyparse();
	}

	inchide_fisier();				// inchid fisierul de output pentru cod python
	free(c);						// eliberez pointer-ul alocat dinamic
}


/* Afiseaza mesaj de eroare */
void yyerror(const char *s)
{
	printf("EROARE: %s\n la linia: %d", s, yylineno);
}
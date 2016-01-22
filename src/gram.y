%{
						/************** ------ includere header-e; 			  ------- **********/
						/************** ------ sectiunea trece neinterpretata de bison ------- **********/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "func.h"
#include "gram.tab.h"	

int tastatura = 1;		/* daca inputul este de la tastatura sau nu */

			/* fisier pentru cod output. Definifit in op_fisier.h */
extern FILE *f;

			/* Stochez variabile. Definite in mem.h */
extern double variabile_valori[100];
extern char* variabile_cuvinte[100];
extern int variabile_set[100];

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

%token<num> MAI_MIC MAI_MARE EGALITATE
			/* token-uri conversii distanta*/
%token<num> M_IN_KM KM_IN_M
			
			/* token-uri declarare variabile */
%token<num> VAR_DECLAR 
%token<index> VARIABILA
%token<str> VARIABILA_STR

			/* token-uri tipuri de date */
%token<num> NUMAR
%token<str> CUVANT
			
			/* token-uri functii */
%token      AFISEAZA

			/* token-uri sintaxa */
%token DOUA_PCT VIRGULA
%token<num> EOL
%type<num> program_input
%type<num> constant
%type<num> linie_exec
%type<num> expr
%type<num> functie
%type<num> comparare
%type<num> logaritm
%type<num> functii_trig
%type<num> functii_hiper
%type<num> atribuire
%type<str> atribuire_str
%type<num> conversie
%type<num> conv_distanta

%token START STOP
					/* token-uri structuri de control */
%token IF ELSE WHILE FOR NEXT
					/* token-uri precedenta operatorilor */
%left SCADERE 
%left ADUNARE
%left INMULTIRE 
%left IMPARTIRE 
%left PUTERE RAD 
%left PARANTEZA_S PARANTEZA_D ACOLADA_S ACOLADA_D

%%


		/**********			Definire reguli gramatica/expresii 								 ************/
		/**********			Cod C asociat fiecarei expresii + Scriere in fisierul de output. ************/

program: START sir_intrare STOP '\n' 

program_input:	/* rand gol */
	| program_input linie
	;

	/** linie de input **/
linie: 
			EOL 				{ if (tastatura) printf("toy>> "); }
		| linie_exec EOL  		{ if (tastatura) printf("toy>> "); }
		| atribuire_str			{ if (tastatura) printf("toy>> "); }
		| structura_control EOL	{ if (tastatura) printf("toy>> "); }
		| afisare_ecran	EOL		{ if (tastatura) printf("toy>> "); }
    ;

	/** linie executabila **/
linie_exec:
		  expr
		| comparare
		| functie
		| atribuire
		;


	/** structuri de control: if for while **/
structura_control: structura_for	
		| structura_while
		| structura_if
		;

	/** constanta PI **/
constant: PI { $$ = 3.142; }
		;
		
	/** definire expresii generale **/	
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
		| expr PUTERE expr     		{ $$ = pow($1, $3); }
		| expr MOD expr     		{ $$ = modulo($1, $3); }			
		| STOP						{ 
									if (tastatura)  printf("salut :)\n"); exit(0); 
									}
    ;

	/** comparare **/
comparare: expr MAI_MIC expr 		{ $$ = $1 < $3; }
		| expr MAI_MARE expr 		{ $$ = $1 > $3; }
		| expr EGALITATE expr 		{ $$ = $1 == $3; }

	/** instructiune while - inca nu este implementata **/
structura_while: 	WHILE  expr  linie_exec 				{;}
					;

	/** if - inca nu este implementata**/
structura_if: IF comparare linie_exec ELSE linie_exec 				{ if ((int)$2) printf("if"); else printf("%d\n", (int)$2); }
			;

    /** instructiune for - inca nu este implementata **/
structura_for: FOR PARANTEZA_S expr NEXT PARANTEZA_D DOUA_PCT linie_exec 			
			;	

	/** modalitati de afisare pe ecran  **/
afisare_ecran:	| AFISEAZA comparare	{ if ((int)$2 == 1) 
											printf("Adevarat\n");
										  else
										  	printf("Fals\n");	
										}
		| AFISEAZA CUVANT	 	{ 
								printf("%s ", (char*)$2);
								}
		| AFISEAZA CUVANT VIRGULA expr
							 	{ 
								printf("%s %f", (char*)$2, (float)$4);
								}
		| AFISEAZA expr
								{
								printf("%f\n", (float)($2));
								}
		;

	/** functii: conversii, logaritm, trigonometrie **/
functie: 
			conversie
		| logaritm
		| functii_trig
		| functii_hiper
		| RAD expr      					{ $$ = sqrt($2); }
		| FACTORIAL	expr 					{ $$ = factorial($2); }
		| MODUL PARANTEZA_S expr PARANTEZA_D 						{ $$ = abs($3); }
		| ROT_ADAUGARE expr 				{ $$ = ceil($2); }
		| ROT_SCADERE expr 					{ $$ = floor($2); }
		;

	/** functii trigonometrice  **/
functii_trig:
			COS expr  			  	{ $$ = cos($2); }
		| SIN expr 					{ $$ = sin($2); }
		| TAN expr 					{ $$ = tan($2); }
		;
	
	/** functie logaritm **/
logaritm:
			LOG2 expr 				{ 
									fseek(f, -4, SEEK_CUR);				// formatez functia python log cu 
									 									// baza 2 din modulul math 
									fprintf(f, ", 2)\n"); 
									$$ = log2($2); 
									}
		| LOG10 expr 				{ 
									fseek(f, -4, SEEK_CUR);				// formatez functia python log cu 
																		// baza 10 din modulul math
									fprintf(f, ", 10)\n");
									$$ = log10($2); 
									}
		;
	
	/** functii hiperbolice **/
functii_hiper:
			COSH expr  			  	{ $$ = cosh($2); }
		| SINH expr 				{ $$ = sinh($2); }
		| TANH expr 				{ $$ = tanh($2); }
		;
	
	/** expresie conversie distanta**/	
conversie: conv_distanta
		;

	/** expresie explicita conversie  distanta **/
conv_distanta:
			M_IN_KM PARANTEZA_S expr PARANTEZA_D			{ $$ = m_la_km($3); }
		| KM_IN_M PARANTEZA_S expr PARANTEZA_D				{ $$ = km_la_m($3); }
	
	/** expresie intitializare si atribuire **/		
atribuire: 
		VAR_DECLAR VARIABILA EGAL linie_exec 	{ $$ = set_variabila($2, $4); }
		| VARIABILA EGAL linie_exec 			{ $$ = set_variabila($1, $3); }
		;
atribuire_str:
		VARIABILA_STR EGAL CUVANT					{ $$ = (char*)set_variabila_str($1, $3); }
%%


				/****************** punct de start *********************************/

int main(int argc, char **argv)
{

	char* c = "";
	c = (char*)malloc(sizeof(char) * 100);		//sir de caractere alocat dinamic: pentru citire


	// alegem sursa codului
	if (argc > 1) {										// Compilare de fisier
		
		tastatura = 0;									// input-ul nu este de la tastatura

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
	}
	else {												// Compilare cod din linia de comanda
		
		printf("Bine ai venit\n");
		printf("toy>> ");
		tastatura  = 1;

		// deschidere fisier output de cod python
		deschide_fisier("cod_python.py");

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
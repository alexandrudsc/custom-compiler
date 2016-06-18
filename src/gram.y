%{
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
%token<num> VAR_DECLAR VAR_DECLAR_INT
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
%type<num> op_putere
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
			SCADERE expr		{ $$ = -$2; }
    	| NUMAR            		{ $$ = $1; }

		| VARIABILA				{ 
								if (variabile_set[$1] == INTREG)
								{
									$$ = variabile_valori_int[$1];
								}
								else if (variabile_set[$1] == REAL)
								{
									$$ = variabile_valori[$1];
								}
								}
		| constant	
		| functie
		| expr IMPARTIRE expr     { if ($3 == 0) { yyerror("Nu se poate imaprti la 0"); exit(1); } else $$ = $1 							/ $3; }
		| expr INMULTIRE expr     	{  $$ = $1 * $3;}
		| PARANTEZA_S expr PARANTEZA_D { $$ = $2; }
		| expr ADUNARE expr     	{ $$ = $1 + $3; }
		| expr SCADERE expr   		{ $$ = $1 - $3; }
		| op_putere
		| expr MOD expr     		{ $$ = modulo($1, $3); }			
		| STOP						{ 
									if (tastatura)  printf("salut :)\n"); exit(0); 
									}
    ;

	/** ridicare la putere **/
op_putere:	PUTERE PARANTEZA_S expr VIRGULA expr PARANTEZA_D     		{
																			$$ = pow($3, $5); 
																		}

	/** comparare **/
comparare: expr MAI_MIC expr 		{ $$ = $1 < $3; }
		| expr MAI_MARE expr 		{ $$ = $1 > $3; }
		| expr EGALITATE expr 		{ $$ = $1 == $3; }

	/** instructiune while - inca nu este implementata **/
structura_while: 	WHILE  expr  linie_exec 				{;}
					;

	/** if - **/
structura_if: IF comparare linie_exec ELSE linie_exec 				{ if ((int)$2) printf("if"); else printf("%d\n", (int)$2); }
			;

    /** instructiune for - **/
structura_for: FOR PARANTEZA_S expr NEXT PARANTEZA_D DOUA_PCT linie_exec 			
			;	

	/** modalitati de afisare pe ecran  **/
afisare_ecran:	| AFISEAZA PARANTEZA_S comparare PARANTEZA_D	{ if ((int)$3 == 1) 
																	printf("Adevarat\n");
																  else
																  	printf("Fals\n");	
																}
		| AFISEAZA PARANTEZA_S CUVANT PARANTEZA_D	 			{ 
																	char * _TEMPSTR = (char*)$3;
																	_TEMPSTR[strlen(_TEMPSTR) - 1] = '\0';
																	printf("%s ", _TEMPSTR);
																}
		| AFISEAZA PARANTEZA_S CUVANT VIRGULA expr PARANTEZA_D
															 	{ 
																	printf("%s %f\n", (char*)$3, (float)$5);
																}
		| AFISEAZA PARANTEZA_S expr PARANTEZA_D
																{
																	printf("%f\n", (float)($3));
																}
		;

	/** functii: conversii, logaritm, trigonometrie **/
functie: 
			conversie
		| logaritm
		| functii_trig
		| functii_hiper
		| RAD PARANTEZA_S expr PARANTEZA_D      					{ $$ = sqrt($3); }
		| FACTORIAL	PARANTEZA_S expr PARANTEZA_D 					{ $$ = factorial($3); }
		| MODUL PARANTEZA_S expr PARANTEZA_D 						{ $$ = abs($3); }
		| ROT_ADAUGARE PARANTEZA_S expr PARANTEZA_D 				{ $$ = ceil($3); }
		| ROT_SCADERE PARANTEZA_S expr PARANTEZA_D 					{ $$ = floor($3); }
		;

	/** functii trigonometrice  **/
functii_trig:
			COS PARANTEZA_S expr PARANTEZA_D  			  	{ $$ = cos($3); }
		| SIN PARANTEZA_S expr PARANTEZA_D 					{ $$ = sin($3); }
		| TAN PARANTEZA_S expr PARANTEZA_D 					{ $$ = tan($3); }
		;
	
	/** functie logaritm **/
logaritm:
			LOG2 PARANTEZA_S expr PARANTEZA_D 				{ 			 
																$$ = log($3); 
															}
		| LOG10 PARANTEZA_S expr PARANTEZA_D 				{ 		
																$$ = log10($3); 
															}
		;
	
	/** functii hiperbolice **/
functii_hiper:
			COSH PARANTEZA_S expr PARANTEZA_D  			  	{ $$ = cosh($3); }
		| SINH PARANTEZA_S expr PARANTEZA_D 				{ $$ = sinh($3); }
		| TANH PARANTEZA_S expr PARANTEZA_D 				{ $$ = tanh($3); }
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
		VAR_DECLAR VARIABILA EGAL linie_exec 		{ $$ = set_variabila($2, $4); }
		| VAR_DECLAR_INT VARIABILA EGAL linie_exec 	{ $$ = set_variabila_int($2, (int)$4); }
		| VARIABILA EGAL linie_exec 				{ $$ = set_variabila($1, $3); }
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
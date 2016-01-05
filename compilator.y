%{
void yyerror (char *s);
#include <stdio.h>     			/* C */
#include <stdlib.h>

	
int sim[52];					// toate simbolurile posibile ca variabile

int simVal(char simbol);		// returneaza valoarea simbolului
void updateSimVal(char simbol, int val);		// seteaza valoarea simbolului

%}

%union {int num; char id;}         /* Definitii bison */
%start line
%token scrie
%token exit_cmd
%token <num> number
%token <id> identifier
%type <num> line exp term 
%type <id> assignment

%%

/* descriptions of expected inputs     corresponding actions (in C) */

line    : assignment			{;}
		| exit_cmd 				{exit(EXIT_SUCCESS);}
		| scrie exp 			{printf("Se scrie: %d\n", $2);}
		| line assignment 		{;}
		| line scrie exp 		{printf("Se scrie: %d\n", $3);}
		| line exit_cmd 		{exit(EXIT_SUCCESS);}
        ;

assignment : identifier '=' exp  { updateSimVal($1,$3); }
			;
exp    	: term                  {$$ = $1;}
       	| exp '+' term          {$$ = $1 + $3;}
       	| exp '-' term          {$$ = $1 - $3;}
       	| exp '*' term          {$$ = $1 * $3;}
       	| exp '/' term          {$$ = $1 / $3;}
       	;
term   	: number                {$$ = $1;}
		| identifier			{$$ = simVal($1);} 
        ;

%%                     
					/* cod C */

int simbolLaIndex(char simbol)
{
	int idx = -1;
	if(islower(simbol)) {
		idx = simbol - 'a' + 26;
	} else if(isupper(simbol)) {
		idx = simbol - 'A';
	}
	return idx;
} 

/* valoarea unui anumit simbol */
int simVal(char simbol)
{
	int ind = simbolLaIndex(simbol);
	return sim[ind];
}

/* modifica valoarea unui simbol */
void updateSimVal(char simbol, int val)
{
	int ind = simbolLaIndex(simbol);
	sim[ind] = val;
}

int main (void) {
	/* intializare tabel simbol */
	int i;
	for(i=0; i<52; i++) {
		sim[i] = 0;
	}

	return yyparse ( );
}

void yyerror (char *s) {fprintf (stderr, "%s\n", s);} 


#include <stdio.h>
#include <math.h>
#include "../src/func.h"
int main () 
{
int numar1 = 20.00;
double numar2 = 123.43;
AFISEAZA  ( "Primul_numar" ) ;
AFISEAZA  ( numar1 ) ;
AFISEAZA  ( "Al_doilea_numar" ) ;
AFISEAZA  ( numar2 ) ;
double suma = numar1 + numar2;
AFISEAZA  ( "Suma" ) ;
AFISEAZA  ( suma ) ;
double prod = numar1 * numar2;
AFISEAZA  ( "Produs" ) ;
AFISEAZA  ( prod ) ;
double dif = numar1 - numar2;
AFISEAZA  ( "Diferenta" ) ;
AFISEAZA  ( dif ) ;
double cat = numar1 / numar2;
AFISEAZA  ( "Cat" ) ;
AFISEAZA  ( cat ) ;
AFISEAZA  ( "Numar1_mai_mic_numar2" ) ;
AFISEAZA  ( numar1 < numar2 ) ;
getchar();
return 0; 
}
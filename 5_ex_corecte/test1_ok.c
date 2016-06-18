#include <stdio.h>
#include <math.h>
#include "../src/func.h"
int main () 
{
double x = 20.00;
x = x + 0.40;
AFISEAZA  ( x ) ;
x = log ( 4.00 ) ;
AFISEAZA  ( "Logaritm_e" ) ;
AFISEAZA  ( x ) ;
x = x - 0.23;
AFISEAZA  ( x ) ;
double xRotAd = ceil ( x ) ;
AFISEAZA  ( "Rotunjire_adaugare" ) ;
AFISEAZA  ( xRotAd ) ;
double xRotSc = floor ( x ) ;
AFISEAZA  ( "Rotunjire_scadere" ) ;
AFISEAZA  ( xRotSc ) ;
getchar();
return 0; 
}
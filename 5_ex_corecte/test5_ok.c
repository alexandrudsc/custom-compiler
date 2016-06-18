#include <stdio.h>
#include <math.h>
#include "../src/func.h"
int main () 
{
int nrNeg =  - 1.00;
AFISEAZA  ( "Numar_negativ" ) ;
AFISEAZA  ( nrNeg ) ;
AFISEAZA  ( "Modul" ) ;
double nrPositiv = abs ( nrNeg ) ;
AFISEAZA  ( nrPositiv ) ;
int i; for (i = 1; i < 5; i++) 
 ( nrPositiv ) ; nrPositiv = nrPositiv + 1.00;
AFISEAZA  ( "Rezultat_for" ) ;
AFISEAZA  ( nrPositiv ) ;
double fac = factorial ( 3.00 ) ;
AFISEAZA  ( "Factorial" ) ;
AFISEAZA  ( fac ) ;
AFISEAZA  ( "Factorial2" ) ;
AFISEAZA  ( factorial ( fac )  ) ;
getchar();
return 0; 
}
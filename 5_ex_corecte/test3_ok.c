#include <stdio.h>
#include <math.h>
#include "../src/func.h"
int main () 
{
double nr = 5.00;
AFISEAZA  ( "Distanta_kilometri" ) ;
AFISEAZA  ( m_la_km ( nr )  ) ;
double nrNeg =  - 10.00;
AFISEAZA  ( "Negativ" ) ;
AFISEAZA  ( nrNeg ) ;
AFISEAZA  ( "Modul" ) ;
AFISEAZA  ( abs ( nrNeg )  ) ;
AFISEAZA  ( "Putere" ) ;
double res = pow ( 3.00, 4.00 ) ;
AFISEAZA  ( res ) ;
getchar();
return 0; 
}
#include <stdio.h>
#include <math.h>
#include "../src/func.h"
int main () 
{
double unghi = 1.00;
AFISEAZA  ( sin ( unghi )  ) ;
AFISEAZA  ( cos ( M_PI )  ) ;
double constanta = M_PI;
AFISEAZA  ( constanta ) ;
int razaCerc = 4.00;
AFISEAZA  ( "Raza" ) ;
AFISEAZA  ( razaCerc ) ;
double aria = pow ( M_PI * razaCerc, 2.00 ) ;
AFISEAZA  ( "Aria" ) ;
AFISEAZA  ( aria ) ;
razaCerc = 3.00;
AFISEAZA  ( "Raza" ) ;
AFISEAZA  ( razaCerc ) ;
AFISEAZA  ( "Aria2" ) ;
aria = pow ( M_PI * razaCerc, 2.00 ) ;
AFISEAZA  ( "Aria2" ) ;
AFISEAZA  ( aria ) ;
getchar();
return 0; 
}
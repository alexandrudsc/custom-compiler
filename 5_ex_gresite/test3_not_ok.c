#include <stdio.h>
#include <math.h>
#include "../src/func.h"
int main () 
{
double nr = log10 ( 100.00 ) ;
nr = nr + 0.40;
AFISEAZA  ( nr ) ;
AFISEAZA  ( ceil ( nr )  ) ;
AFISEAZA  ( floor ( nr )  ) ;
programgetchar();
return 0; 
}getch();
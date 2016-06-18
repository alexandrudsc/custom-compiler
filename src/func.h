#ifndef FUNC_H
#define FUNC_H

/** MACRO-uri utile **/
#define AFISEAZA(x) { if ( sizeof(x) == 4) 		\
						printf("%d\n", x);		\
					  else if ( sizeof(x) == 8) \
					  	printf("%f\n", x); 		\
					  else						\
					  	printf("%s\n", x);		\
					}

/** Functii utilizate in calcul factorial si conversii distante  **/

// Converteste kilometeri la metri
double km_la_m(double km) 		  { return km * 1000; }
// Converteste metri la kilometeri 
double m_la_km(double m)  		  { return m / 1000;} 

// Calculeaza factorial
double factorial(double n) 
{
	double x; 
	double f=1;
	
	for (x=1; x<=n; x++) { 
		f *= x; 
	}
	
	return f;
}

// Calculeaza modulo
int modulo(double x, double y) 
{
	return (int)x % (int)y;
}

#endif
#ifndef MEM_H
#define MEM_H

/* Functii pentru pastrarea variabileleor  in memorie*/

// Nume variabile
char* nume_variabile[100]; 
// Flag-uri pentru setarea variabilelor
int variable_set[100];
// Numarul de variabile
int variable_counter = 0; 
// Valoare variabile
double variabile_valori[100];
// Valoare variabile string-uri
char* variabile_cuvinte[100];

/* Adauga o variabila in memorie */
int adauga_variabila(char* var_name)
{
	int x; // Index var
	
	/* Cauta variabila dupa nume si returnez index-ul ei (daca exista)*/	
	for (x = 0; x < variable_counter; x++) {
		if (strcmp (var_name, nume_variabile[x]) == 0) {
				return x;
		}
	}

	/* Daca variabila nu exista, o adaug */
	variable_counter++;
	nume_variabile[x] = strdup(var_name);
	return x;
}

/* Seteaza valoarea unei variabile */
double set_variabila(int index, double val)
{
	variabile_valori[index] = val;
	variable_set[index] = 1;
	
	return val;
}

/* Seteaza valoarea unei variabile */
char* set_variabila_str(int index, char* val)
{
	variabile_cuvinte[index] = (char*)malloc(sizeof(char*) * 1000);
	strcpy(variabile_cuvinte[index], val);
	variable_set[index] = 1;
	
	return val;
}


char* nume_variabila(int index)
{
	return nume_variabile[index];
}

void free_mem()
{
	int x = 0;
	for (x = 0; x < 100; x++)
		free(variabile_cuvinte[x]);
}

#endif
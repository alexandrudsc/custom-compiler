#ifndef OP_FISIER_H
#define OP_FISIER_H
#include <stdio.h>
#include <stdlib.h>

FILE *f;

void deschide_fisier(char * numef)
{
	f = fopen(numef, "w");

	// import modulele pentru operatii matematice, conversii monede si distante
	fprintf(f, "%s\n%s\n%s\n%s\n%s\n", "#include <stdio.h>", 
				"#include <math.h>", "#include \"../src/func.h\"", "int main () ", "{");
}

void scrie_fisier(char * text)
{
	fprintf(f, "%s", text);
}

void fisier_newline()
{
	fprintf(f, "\n");
}

void inchide_fisier()
{
	fprintf(f, "getch();");
	fclose(f);
}
#endif
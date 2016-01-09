#ifndef OP_FISIER_H
#define OP_FISIER_H
#include <stdio.h>
#include <stdlib.h>

FILE *f;

void deschide_fisier(char * numef)
{
	f = fopen(numef, "w");
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
	fclose(f);
}
#endif
#ifndef OP_FISIER_H
#define OP_FISIER_H
#include <stdio.h>
#include <stdlib.h>

FILE *f;

void deschide_fisier(char * numef)
{
	f = fopen(numef, "w");

	// import modulele pentru operatii matematice, conversii monede si distante
	fprintf(f, "%s\n%s\n%s\n%s\n\n", 	"#!/usr/bin/python", "import math", 
				"from func import m_la_km", "from func import km_la_m");
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
// bucles.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>
#include <stdlib.h>

typedef struct {
	int edad;
	char *nombre;
} usuario;

int lefaltan(usuario * user, unsigned int n) {
	return n-user->edad;
}

int main(int argc, char **argv)
{
		usuario user;
		usuario *p = &user;

		p->edad = atoi(argv[1]);
		p->nombre = (char *)malloc(30);

		strcpy(p->nombre, argv[2]);
		printf("Un groso %s\n", p->nombre);
		printf("para llegar a 80 le faltan %d anios", lefaltan(p, 80));

		return 0;
}


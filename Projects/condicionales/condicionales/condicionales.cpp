// funciones.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

#define SUMA 1

int resta(int n, int k) {
	return n-k;
}

int suma(int n, int k){
	return n+k;
}

int main(int argc, char **argv)
{
	char flag[] = "funcion main";
	int i, j;

	if(argc != 4){
		printf("Uso: %s operacion n k\n");
		printf("operacion: 1 para suma, 2 para resta\n");
		printf("n primer entero\n");
		printf("k segundo entero\n");
		return -1;
	}

	i = atoi(argv[2]);
	j = atoi(argv[3]);

	if(atoi(argv[1]) == SUMA)
		printf("sumados: %d\n", suma(i, j));
	else
		printf("restados: %d\n", resta(i, j));
	return 0;
}




// funciones.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

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

	i = atoi(argv[1]);
	j = atoi(argv[2]);

	printf("sumados: %d\n", suma(i, j));
	printf("restados: %d\n", resta(i, j));
	return 0;
}

// crackme1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

int main(int argc, char **argv)
{
	if(argc != 3){
		printf("Uso: %s username password\n");
		return -1;
	}

	printf("[*] Obteniendo hash del nombre...\n", argv[0]);
	int i = 0;
	int sum = 0;
	while(argv[1][i] != NULL){
		sum += argv[1][i++];
	}

	if(atoi(argv[2]) == (sum^0x1337))
		printf("Has conseguido el flag\n");
	else
		printf("La proxima sera\n");

	return 0;
}


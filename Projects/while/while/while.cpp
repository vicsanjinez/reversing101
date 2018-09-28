// bucles.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>

int main(int argc, char **argv)
{
	if(argc != 2){
		printf("Uso: %s message\n", argv[0]);
		return -1;
	}

	int i = 0;
	while(argv[1][i] != NULL) {
		printf("letra %c\n", argv[1][i++]);
	}

	return 0;
}


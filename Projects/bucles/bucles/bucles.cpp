// bucles.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>

int main(int argc, char **argv)
{
	printf("contando...\n");
	for(int i = 0; i <= 9; i++){
		Sleep(1000);
		printf("pasaron %d segundos\n", i);
	}

	return 0;
}


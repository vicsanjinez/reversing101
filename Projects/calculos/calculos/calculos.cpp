// calculos.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

int main(int argc, char **argv)
{
	int c = atoi(argv[1]);
	printf("en fahrenheit es: %d\n", c*9/5+32);
	return 0;
}


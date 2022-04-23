#include <stdio.h>

/**
  * Description: main - entry point.
  * Return: 0 or 1 On succes Always.
  */

int main(void)
{
/*
*	Declaring a variable to hold data.
*	variables are memory allocation that can data.
*	a declared var is allocated memory in the primary memory.
*/
	int aVar;
	aVar = 5;
	float afloat;
	afloat = 3.142f;
	double adouble;
	adouble = 5.64234;
	
	printf("This is an:%d integer", &aVar);
	printf("This is a:%f float", &afloat);
	printf("This is a:

	return (0);
}

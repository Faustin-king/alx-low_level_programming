#include "main.h"
#include <stdio.h>


/**
* reset_to_98 - takes a pointer to an int as parameter
* and updates the value it points to to 98
* @n: An pointer input
*
* Return: Nothing
*/


void reset_to_98(int *n)
{
	int a;

	a = 98;

	a = *n;

	printf("a=%d\n", a);
	printf("n=%d\n", *n);
}

#include "main.h"
#include <stdio.h>


/**
* swap_int - function that swaps the values of two integers
* @a: An integer input
* @b: An integer input
*
* Return: Nothing
*/

void swap_int(int *a, int *b)
{

	*a = 48;
	*b = 32;

	printf("a=%d, b=%d\n", *a, *b);

	swap_int(a, b);

	printf("a=%d, b=%d\n", *a, *b);
}

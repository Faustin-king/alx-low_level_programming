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
	*a = *a + *b;

	*b = *a - *b;

	*a = *a - *b;
}

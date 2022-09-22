#include "main.h"
#include <stdio.h>


/**
* print_array - prints n elements of an array of integers
* @n: The number of an elements to be printed.
* @a: the array to print
* Followed by new line
*
* Return: Nothing
*/


void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)

			printf("%d", a[i]);
		else

			printf(", %d", a[i]);
	}

	printf("\n");
}


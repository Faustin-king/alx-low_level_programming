#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - check main
 * @n: An integer input
 * Decription: prints all natural numbers from n to 98
 * followed by a new line
 * Return: Nothing
 */

void print_to_98(int n)
{
	int a, b;


	if (n <= 98)
	{
		for (a = 0; a <= 98; a++)
		{
			if (a != 98)

				printf("%d, ", a);
			else if (a == 98)

				printf("%d\n", a);
		}
	} else if (n >= 98)
	{

		for (b = 0; b >= 98; b--)
		{
			if (b != 98)

				printf("%d, ", b);
			else if (b == 98)
				printf("%d\n");
		}

	}

}

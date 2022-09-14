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
			printf("%d", a);

			if (a == 98)

				continue;
			printf(",");
		}

		printf("\n");
	} else
	{

		for (b = 0; b >= 98; b--)
		{
			printf("%d", b);

			if (b == 98)

				continue;
			printf(",");
		}

		printf("\n");

	}

}

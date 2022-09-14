#include "main.h"

/**
 * times_table - check main
 * Decription: prints rhe 9 times table, staring with 0.
 *
 * Return: Nothing
 */

void times_table(void)
{
	int a, b, n;


	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			n = b * a;

			if (b == 0)
			{
				_putchar(n + '0');
			}

			if (n < 10 && b != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			} else if (n >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}

		_putchar('\n');
	}
}

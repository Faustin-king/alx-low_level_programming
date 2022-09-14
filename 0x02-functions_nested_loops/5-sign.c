#include "main.h"


/**
 * print_sign - prints the sign of a number.
 *
 *@n: An input number
 *
 * Return: 1 if n is greater than zero or 0 if n is zero
 * -1 if n is less than zero
 *
 */

int print_ sign(int n)
{
	int i;

	for (i = 1; i >= -1; i--)
	{
		if (n > 0)
			
			_putchar('+');
		
				return (1);

		else if (n == 0)

			_putchar('0')

				return (0);
		else
			_putchar('-');


				return (-1);
	}

}

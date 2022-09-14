#include "main.h"


/**
 * print_last_digit - check main
 *@n: An integer input
 * Decription: this function prints the last digitof a number.
 *
 * Return: The value of last digit
 */


int print_last_digit(int n)
{
	int r;

	if (n < 0)

		r = -1 * (n % 10);

	else

		r = n % 10;

	_putchar((r % 10) + '0');

	return (r % 10);

}

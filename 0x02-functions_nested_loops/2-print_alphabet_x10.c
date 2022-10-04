#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * followed by new line.
 *
 */

void print_alphabet_X10(void)
{
	char j;

	int i;

	for ( i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)

			_putchar(i);
		_putchar('\n');
	}
}

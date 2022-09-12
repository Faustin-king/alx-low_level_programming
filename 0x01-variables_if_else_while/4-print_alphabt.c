#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all the letters in lowercase except q and e
 *
 * followed by new line
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')

			putchar(letter);
	}

	putchar('\n');

	return (0);
}

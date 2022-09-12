#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all single digit numbers of base 10
 *
 * followed by new line.
 * Return: Always 0 (Success)
 */


int main(void)
{
	int n;

	for (n = '0'; n <= '10'; n++)

		putchar(n);
	putchar('\n')


	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * folowed by new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int numbers;

	char lower;

	for (numbers = '0'; numbers <= '9'; numbers++)

		putchar(numbers);

	for (lower = 'a'; lower <= 'f'; lower++)

		putchar(lower);

	putchar('\n');

	return (0);
}

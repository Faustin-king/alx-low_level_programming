#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - prints the lowercase alphabet in reverse
 *
 * followed by new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char al;

	for (al = 'z'; al >= 'a'; al--)

		putchar(al);

	putchar('\n');

	return (0);
}

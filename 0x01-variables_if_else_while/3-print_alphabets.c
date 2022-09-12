#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase and then in Uppercase.
 *
 * followed bynew line
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)

		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)

		putchar(ch);

	putchar('\n');

	return (0);

}

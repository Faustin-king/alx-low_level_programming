#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - prints all possible different combinations of two digits
 *
 * followed by new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;


	for (i = '0'; i < '9'; i++)
	{
		for (j = i + 1; J <= '9'; J++)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);


				if (i == '8' && j == '9')

					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	puchar('\n');

	return (0);
}

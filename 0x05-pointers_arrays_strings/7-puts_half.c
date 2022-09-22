#include "main.h"
#include <stdio.h>


/**
* puts_half - prints hailf of a string
* Followed by new line
* @str: string to print
*
* Return: Nothing
*/


void puts_half(char *str)
{
	int len, j, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			putchar(str[i]);
		}

	} else if (len % 2)
	{
		for (j = (len - 1) / 2; j < len - 1; j++)
		{
			putchar(str[j + 1]);
		}
	}
	putchar('\n');
}


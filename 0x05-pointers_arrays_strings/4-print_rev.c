#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* print_rev - prints a string
* @s: An input character
* Followed by new line
*
* Return: Nothing
*/

void print_rev(char *s)
{
	char str[11] = "Holberton!";

	int i = (strlen(s) - 1);

	s = str;

	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');
}


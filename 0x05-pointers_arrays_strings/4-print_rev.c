#include "main.h"
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
	int a, b, length;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	length = a;

	for (b = length - 1; b >= 0; b--)
	{
		putchar(s[b]);
	}

	putchar('\n');
}






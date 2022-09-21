#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* rev_string - reverses a string
* @s: string to reverse
*
* Return: Nothing
*/

void rev_string(char *s)
{
	char str[] = " ";

	int i = (strlen(s) - 1);

	s = str;

	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	}
}

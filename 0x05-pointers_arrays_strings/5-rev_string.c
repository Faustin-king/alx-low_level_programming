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

	int i = 0;

	s = str;

	while (str[i] != '\0')
	{
		putchar(s[i]);
		i--;
	}
}


#include "main.h"


/**
* rev_string - reverses a string
* @s: string to reverse
*
* Return: Nothing
*/

void rev_string(char *s)
{
	char str;

	int i, j, len;

	j = 0;
	len = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	len = j - 1;

	for (i = 0; i < j / 2; i++)
	{
		str = s[i];
		s[i] = s[len];
		s[len--] = str;
	}
}


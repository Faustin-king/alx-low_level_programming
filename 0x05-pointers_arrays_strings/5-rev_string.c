#include "main.h"

/**
* rev_string - reverses a string
* @s: string to reverse
*
* Return: Nothing
*/

void rev_string(char *s)
{
	int i, j = 0;

	char str[30];

	while (*(s + i))
	{
		*(str + i) = *(s + i);
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		*(s + i) = *(str + j);
		j++;
		i--;
	}
}

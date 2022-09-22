#include "main.h"

/**
* _strcat - concatenate two strings
* @dest: string to append to another string
* @src: string to be concatenated
*
* Return: a pointer to the resulting string
*/

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;

	b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;

		a++;
	}

	dest[a] = '\0';

	return (dest);
}

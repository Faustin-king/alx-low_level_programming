#include "main.h"


/**
* _strncat - concatenates two strings
* @dest: string to concatenate
* @src: string to concatenate
* @n: number of bytes of str to concatenate
*
* Return: a pointer to the resulting string
*/

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	b = 0;


	while (dest[a] != '\0')

		a++;

	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];

		a++;

		b++;
	}

	dest[a] = '\0';

	return (dest);
}

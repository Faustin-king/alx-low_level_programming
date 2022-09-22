#include "main.h"


/**
* _strcpy - copies the string pointed to by src
*  including the terminating null byte (\0)
* to the buffer pointed to by dest
*
* @dest: pointer to the buffer
* @src: string to copy
*
* Return: The pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int length, j;

	length = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	for (j = 0; j < length; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';

	return (dest);
}

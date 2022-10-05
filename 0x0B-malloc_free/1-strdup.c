#include <stdlib.h>
#include "main.h"

/**
* *_strdup - copies the string given as parameter
* @str: string to be coped
*
* Return: pointer to the copied string (Success), NULL (Error)
*/

char *_strdup(char *str)
{

	char *cop;

	unsigned int i, len;

	i = 0;

	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	cop = malloc(sizeof(char) * (len + 1));

	if (cop == NULL)
		return (NULL);

	while ((cop[i] = str[i]) != '\0')
		i++;

	return (cop);
}

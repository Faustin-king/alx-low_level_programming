#include "main.h"
#include <stdlib.h>
/**
*argstostr - concatenates all arguments of the program.
*@ac: argument count.
*@av: pointer to array of size ac.
*Return: NULL if ac == 0 or av == null, Pointer to new string.
*NULL on fail.
*/
char *argstostr(int ac, char **av)
{
	int i, j, a, size;

	char *arg;

	size = 0;
	a = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			size++;
			j++;
		}
		size++;
		i++;
	}
	arg = malloc((sizeof(char) * size) + 1);
	if (arg == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			arg[a] = av[i][j];
			j++;
			a++;
		}
		arg[a] = '\n';
		a++;
		i++;
	}
	arg[a] = '\0';
	return (arg);
}

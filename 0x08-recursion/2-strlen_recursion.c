#include"stdio.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: a string
 *
 * Return: the length of  string.
 */


int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0); /* base case: end of the string. */
	}
	return (1 + _strlen_recursion(s + 1));
}

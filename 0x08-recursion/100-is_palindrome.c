#include "main.h"

int _strlen_recursion(char *s);
int check_pal(char *s, int i, int len);


/**
* is_palindrome -  Checks if a string is a palindrome
* @s: a string to be checked
*
* Return: 1 if a string is a palindrome and 0 if not
*/


int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);

	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
* _strlen_recursion - returns the length of a string
* @s: string to calculate the length of
*
* Return: length of the string
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}


/**
* check_pal - Check the charaters recursily for palindrome
* @s: string to be checked
* @i: an iterator
* @len: length of the string
*
* Return: 1 if a string is a palindrome and 0 if not
*/


int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))

		return (0);
	if (i >= len)
		return (1);

	return (check_pal(s, i + 1, len - 1));
}











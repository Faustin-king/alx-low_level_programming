#include"stdio.h"
#include"string.h"


/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: string to be reversed.
 *
 * Return: Nothing.
 */


void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	return; /* Base case: end of the string*/

	_print_rev_recursion(s + 1); /* Recur for the rest of the string*/
	printf("%c", *s); /* Print the current character after the recursive call*/
}

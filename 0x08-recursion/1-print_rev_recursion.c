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

	int length = strlen(s);
	int i;
	for (i = length - 1; i >= 0; i--) {
	
		printf("%c", s[i]);
	}
	printf("\n");
}

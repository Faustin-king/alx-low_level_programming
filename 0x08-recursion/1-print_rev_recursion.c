#include "main.h"
#include <string.h>
#include <stdio.h>


/**
* _print_rev_recursion - prints a string in reverse
* @s: string to reverse
*
* Return: Nothing
*/


void _print_rev_recursion(char *s)
{
	int i;

	for (i = (strlen(s) - 1); i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}

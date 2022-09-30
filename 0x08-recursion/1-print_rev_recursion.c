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
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);

		putchar(*s);
	}
}

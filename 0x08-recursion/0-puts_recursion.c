#include "main.h"
#include <stdio.h>


/**
* _puts_recursion - prints a string
* followed by new line
* @s: string to print
*
* Return: Nothing
*/


void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
	} else
	{
		putchar(*s);

		_puts_recursion(++s);
	}

}

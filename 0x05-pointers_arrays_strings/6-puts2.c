#include "main.h"
#include <stdio.h>


/**
* puts2 - prints every other character of a string
* Followed by new line
* @str: string to be printed
*
* Return: Nothing
*/


void puts2(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		putchar(*(str + i));
		i = i + 1;
	}

	putchar('\n');
}

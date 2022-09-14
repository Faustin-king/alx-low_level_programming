#include "main.h"


/**
 * _islower - checks for lowercase character
 *
 * @c: An input character
 *
 * Return: 0 if is uppercase or 1 if is lowercase (Success)
 */

int _islower(int c)
{
	char i;


	for (i = 'a'; i < 'z'; i++)
	{
		if (c == i)

			return (1);
		else
			return (0);
	}

	return (1);

}

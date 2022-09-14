#include "main.h"


/**
 * _islower - checks for lowercase character
 *
 * @c: An input character
 *
 * Return: 1 if is lowercase or 0 if is uppercase (Success)
 */

int _islower(int c)
{
	char i;


	for (i = 'a'; i < 'z'; i++)
	{
		if (c == i)
		{

			return (0);

		}	return (1);
	}

	return (1);

}

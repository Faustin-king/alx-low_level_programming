#include <main.h>


/**
 * _islower - checks for lowercase character
 *
 * Return: 0 or 1 (Success)
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
}

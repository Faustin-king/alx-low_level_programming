#include <main.h>

/**
 * _isalpha -  checks for alphabetic character.
 *
 * @c: An input character
 *
 * Return: 1 if c is a letter, lowercase or uppercase
 *  otherwise 0
 *
 */

int _isalpha(int c)
{
	char lower, upper;


	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)

				return (1);
		}
	}


	return (0);


}

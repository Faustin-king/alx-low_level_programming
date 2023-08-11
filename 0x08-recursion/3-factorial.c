#include"stdio.h"


/**
 * factorial - function that returns the factorial of a given number.
 * @n: a given number
 *
 * Return:  factorial of a given number.
 */


int factorial(int n)
{
	if  (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));

}

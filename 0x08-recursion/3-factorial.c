#include "main.h"


/**
* factorial - returns the factorial of a given number
* @n: number to return
*
* Return: If n is lower than 0, the function should return -1 to indicate an error
*/


int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial (n - 1));
}

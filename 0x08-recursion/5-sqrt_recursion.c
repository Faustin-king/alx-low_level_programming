#include "main.h"

int actual_sqrt_recursion(int n, int i);


/**
* _sqrt_recursion - returns the natural square root of a number
* @n: number to  calculate the square of.
*
* Return: square root results
*/


int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_sqrt_recursion(n, 0));
}


/**
* actual_sqrt_recursion - return the natural
* square root of a number
* @n: number to calculate square root of
* @i: An iterator
*
* Return: The  square root result
*/

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	} else if (i * i == n)
	{
		return (i);
	}
	return (actual_sqrt_recursion(n, i + 1));
}

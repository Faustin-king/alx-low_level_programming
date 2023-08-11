#include"stdio.h"


/**
 * _pow_recursion -  function that returns the
 * value of x raised to the power of y.
 *
 * @x: value raised to the power of Y.
 * @y: exponent.
 *
 * Return:  The value of x raised to the power of y.
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1); /* Return -1 if y is negative*/
	} else if (y == 0)
	{
		return (1); /* Any number raised to the power of o is 1*/
	}
	return (x * _pow_recursion(x, y - 1));
}

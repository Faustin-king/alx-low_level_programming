#include "main.h"

int actual_prime(int n, int i);


/**
* is_prime_number - demonstrate if an interger ids prime number or not
* @n: an interger
*
* Return: 1 if n is a prime number
* otherwise 0
*/


int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime(n, n - 1));
}


/**
* actual_prime - calculates if a number is prime recursively
* @n: number to evaluate
* @i: an iterator
*
* Return: 1 if n is prime, 0 if not
*/

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);

	if (n % i == 0 && i > 0)
		return (0);

	return (actual_prime(n, i - 1));
}











#include"stdio.h"


/**
 * is_divisible - fuction to check if 'n' is divisible by 'divisor'
 * @n: represents the number that you want to determine
 * whether it's prime or not.
 * @divisor: represents a potential divisor that you're
 * testing to see if it divides evenly into the number "n".
 *
 * Return: Recur with next divisor
 */

int is_divisible(int n, int divisor)
{
	if (divisor == 1)
	{
		return (0);/* Base case: 1 is not a valid divisor.*/
	}
	if (n % divisor == 0)
	{
		return (1);/* 'n' is divisible by 'divisor'*/
	}
	return (is_divisible(n, divisor - 1)); /*Recur with next divisor*/
}

/**
 * is_prime_number - Recursive function to check if a number is prime.
 * @n: The number that you want to determine whether it's a prime or not.
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);/* 0 and 1 are not prime*/
	}
	return (!is_divisible(n, n - 1)); /** If not divisible by
					   *any smaller number, it's prime
					   */
}

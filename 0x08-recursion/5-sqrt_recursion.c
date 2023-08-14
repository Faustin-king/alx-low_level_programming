#include"stdio.h"


/**
 * _sqrt_recursive -  function used to calculate the natural
 * square root of a given number.
 * @n: number for which we want to find the natural square root
 * @guess: represents the current estimate or guess of the square root.
 *
 * Return: returns the natural square root of a number
 */

int _sqrt_recursive(int n, int guess)
{
	int square = guess * guess;

	if (square == n)
	{
		return (guess); /*Base case; Found the square root*/
	} else if (square > n)
	{
		return (-1); /* Base case: No natural square root*/
	}
	return (_sqrt_recursive(n, guess + 1));/* reur with an incremented guess*/
}

/**
 * _sqrt_recursion - This function is the entry point for calculating
 * the natural square root of a given number using recursion
 * @n: An integer representing the input number for
 * which the square root is being calculated.
 *
 * Return: natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);/* Negative numbers don't have real square roots*/
	}

	return (_sqrt_recursive(n, 0));/*Start the recursion with initail guess of 0*/
}

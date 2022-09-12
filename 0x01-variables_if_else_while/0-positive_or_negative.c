#include <stdlib.h>

#include <time.h>

/* more headers goes there */

#include <stdio.h>

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
                  	
		/*your code goes here*/
	if (n == 0)
	{
		printf("%d is zero\n", n);

	} else if (n < 0)
	{
		printf("%s is negative\n", n);

	} else 	
	{
		printf("%s is positive\n", n);
	}


	return (0);


}

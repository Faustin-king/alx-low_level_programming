#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * followed by new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)

		pintf("%d", i);
	print("\n");
	return (0);	

}

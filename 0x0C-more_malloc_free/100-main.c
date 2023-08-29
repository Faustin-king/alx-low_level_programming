#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * printArrayRecursively - function that prints the elements of an array.
 * @arr: This parameter is a pointer to an integer
 * @index: represents the current index of the array that is being printed
 * @max:  an integer that represents the maximum index
 */

void printArrayRecursively(int *arr, int index, int max)
{
	if (index <= max)
	{
		printf("%d ", arr[index]);
		printArrayRecursively(arr, index + 1, max);
	}
}

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
	int min = 5;
	int max = 10;

	int *result = array_range(min, max);

	if (result == NULL)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}

	printf("Array elements between %d and %d:\n", min, max);
	 printArrayRecursively(result, 0, max - min);

	printf("\n");

	free(result);
	return (0);
}


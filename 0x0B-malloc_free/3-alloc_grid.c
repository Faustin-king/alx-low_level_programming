#include "main.h"
#include <stdlib.h>

/**
* **alloc_grid - returns a pointer to a 2 dimensional array.
* @width: width of the grid
* @height: height of the grid
* Return: NULL on failure of width/height is 0 or -ve
* else Return pointer to a 2D array.
*/

int **alloc_grid(int width, int height)

{

	int i, j, row, column;

	int **y;

	if (width <= 0 || height <= 0)
		return (NULL);

	y = (int **)malloc(height * sizeof(int *));

	if (y == 0)
	{

		free(y);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		y[i] = (int *)malloc(width * sizeof(int));

		if (y[i] == 0)
		{
			for (j = 0; j <= i; j++)

				free(y[j]);
			free(y);

			return (NULL);
		}
	}
	for (row = 0; row < height; row++)
	{
		for (column = 0; column < width; column++)

		y[row][column] = 0;
	}
	return (y);

}

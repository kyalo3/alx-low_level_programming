#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - prints a grid of integers
 * @grid: the address
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: NULL
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int row;
	int column;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height);

	for (row = 0; row < height; row++)
	{
		grid[row] = malloc(sizeof(int) * width);

		if (grid[row] == NULL)
		{
			for (column = 0; column < row; column++)
			{
				free(grid[column]);
			}
			free(grid);
			return (NULL);
		}

		for (column = 0; column < width; column++)
		{
			grid[row][column] = 0;
		}
	}
	return (grid);
}

#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - creates array of chars with size and initialises with c
 * @grid: grid to free
 * @height: height of grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);

}


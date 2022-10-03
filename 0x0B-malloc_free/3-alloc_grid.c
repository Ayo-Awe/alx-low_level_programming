#include <stdlib.h>

/**
 * alloc_grid - creates grid of integers
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to array or NULL on error
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);


	p = malloc(sizeof(int) * height);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);

		if (p[i] == NULL)
			return (NULL);

		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}


	return (p);
}


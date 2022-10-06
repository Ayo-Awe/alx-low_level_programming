#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers within min and max
 * @min: lowest number
 * @max: highest number
 *
 * Return: void pointer
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	p = malloc(sizeof(*p) * (max - min + 1));

	if (p == NULL)
	{
		return (NULL);
	}


	for (i = 0; i <= max; i++)
	{
		p[i] = min + i;
	}

	return (p);

}

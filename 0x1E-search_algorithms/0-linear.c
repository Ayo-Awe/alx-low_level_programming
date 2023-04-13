#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - implentation of linear search in C
 * @array: pointer to first element in the array
 * @size: size of array
 * @value: target search value
 *
 * Return: index of element if found or -1
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}

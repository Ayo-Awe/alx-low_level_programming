#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - implementation of binary search in C
 * @array: pointer to first array element
 * @size: size of array
 * @value: target search value
 *
 * Return: index of element if found or -1
 */
int binary_search(int *array, size_t size, int value)
{
	int middle, result, new_start;
	size_t new_size;

	if (array == NULL)
		return (-1);

	print_array(array, size);

	if (size == 1 && array[0] != value)
		return (-1);

	if (size == 1 && array[0] == value)
		return (0);

	/* Calculate middle index */
	middle = (size - 1) / 2;

	if (array[middle] == value)
	{
		return (middle);
	}
	else if (value < array[middle])
	{
		new_start = 0;
		new_size = middle;
		result = binary_search(&array[new_start], new_size, value);
	}
	else
	{
		new_start = middle + 1;
		new_size = size - middle - 1;
		result = binary_search(&array[new_start], new_size, value);
	}

	return (result == -1 ? -1 : new_start + result);
}

/**
 * print_array - prints an integer array
 * @array: pointer to first array element
 * @size: size of the array
 *
 * Return: void
 */
void print_array(int *array, size_t size)
{
	int i;

	if (array == NULL || size == 0)
		return;

	printf("Searching in array: ");

	for (i = 0; i < (int)size; i++)
	{
		printf("%d", array[i]);

		if (i < (int)size - 1)
			printf(", ");
	}

	printf("\n");
}

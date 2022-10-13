#include "function_pointers.h"
#include <stdlib.h>

/**
* int_index - returns the index of the first match in an array
* @array: array to be iterated over
* @size: size of array
* @cmp: pointer to a compare function
*
* Return: index of match or -1 if otherwise
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}

#include "function_pointers.h"
#include <stdlib.h>

/**
* array_iterator - performs an action on every element of an array
* @array: pointer to array
* @size: size of "array"
* @action: pointer to function to be called
*
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (!array ||  !action)
		exit(1);

	for (i = 0; i < (int) size; i++)
	{
		action(array[i]);
	}

}

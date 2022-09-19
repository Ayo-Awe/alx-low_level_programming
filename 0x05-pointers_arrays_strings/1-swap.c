#include "main.h"

/**
 * swap_int - swaps two values
 * @a: pointer to the an integer
 * @b: pointer to second integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;

}

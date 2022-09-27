#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sums diagonal
 * @a: array
 * @size: size of array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, sum_left, sum_right;

	i = sum_left = sum_right = 0;

	for (i = 0; i < size; i++)
	{
		sum_left += a[i * (size + 1)];
		sum_right += a[(i + 1) * (size - 1)];
	}

	printf("%d, %d\n", sum_left, sum_right);

}

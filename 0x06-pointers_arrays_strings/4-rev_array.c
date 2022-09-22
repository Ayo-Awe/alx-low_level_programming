#include "main.h"
/**
 * reverse_array - reverses an array
 * @arr: array
 * @n: lenth of the array arr
 *
 * Return: void
 */

void  reverse_array(int *arr, int n)
{
	int i;
	int temp;

	n -= 1;
	for (i = 0; i <= (n / 2); i++)
	{
		temp = arr[n - i];

		arr[n - i] = arr[i];

		arr[i] = temp;
	}

}


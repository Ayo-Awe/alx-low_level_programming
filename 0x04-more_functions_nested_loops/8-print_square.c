#include "main.h"

/**
 * print_square - prints square
 * @n: size of square
 *
 * Return: void
 */

void print_square(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (i = 1; i <= n; i++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

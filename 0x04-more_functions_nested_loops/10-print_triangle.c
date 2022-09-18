#include "main.h"

/**
 * print_triangle - prints triangle
 * @n: size of triangle
 *
 * Return: void
 */

void print_triangle(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = n; j >= 1; j--)
			{
				if (j <= i)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

#include "main.h"

/**
 * print_line - prints line
 * @n: number of lines
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = n; i > 0; i--)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

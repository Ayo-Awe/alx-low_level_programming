#include "main.h"

void print_number(int);
/**
 * times_table - prints the times table
 *
 * Return: void
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0' + 0);

		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			print_number(i * j);
		}
		_putchar('\n');
	}
}

/**
 * print_number - prints an integer
 * @n: 2 digit integer
 *
 * Return: void
 */

void print_number(int n)
{
	int first, last;

	if (n < 10)
	{
		_putchar(' ');
		_putchar('0' + n);
	}
	else
	{
		first = n / 10;
		last = n % 10;

		_putchar('0' + first);
		_putchar('0' + last);
	}
}

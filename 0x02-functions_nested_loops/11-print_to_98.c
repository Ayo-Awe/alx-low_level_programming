#include "main.h"

void print_number(int);

/**
 * print_to_98 - counts from input n to 98
 * @n: starting number
 *
 * Return: void
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98;
				i++)
		{
			print_number(i);

			if (i != 98)
			{
				_putchar
				(',');
				_putchar
				(' ');
			}
		}

	}
	else
	{
		for (i = n; i >= 98;
			i--)
		{
			print_number(i);

			if (i != 98)
			{
				_putchar
				(',');
				_putchar
				(' ');
			}
		}

	}
	_putchar('\n');
}

/**
 * print_number - prints an integer
 * @n: 2 digit integer
 *
 * Return: void
 */

void print_number(int n)
{

	int rem;
	int div = n;

	if (n < 10)
	{
		_putchar(' ');
		_putchar('0' + n);
	}
	else
	{
		while (div != 0)
		{
			rem = div % 10;
			_putchar('0' +
				rem);
			div /= 10;
		}

	}
}

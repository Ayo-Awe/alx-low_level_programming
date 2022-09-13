#include "main.h"
#include <string.h>
#include <stdio.h>

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
 * print_number - prints numbers
 * @n: number
 *
 * Return: void
 */

void print_number(int n)
{
	int i;
	char num[8];

	sprintf(num, "%d", n);

	for (i = 0; i < (int) strlen(num); i++)
	{
		_putchar(num[i]);
	}
}

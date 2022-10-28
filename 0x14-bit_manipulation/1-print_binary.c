#include "main.h"

/**
 * print_binary - prints an integer as a binary
 * @n: number to print
 *
 * Return: void
*/
void print_binary(unsigned long int n)
{

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n == 1)
	{
		_putchar('1');
		return;
	}

	print_binary_recur(n);

}

/**
 * print_binary_recur - prints an integer as binary via recurion
 * @b: number to print
 *
 * Return: void
*/
void print_binary_recur(unsigned long int b)
{
	int rem = 0;
	unsigned long int shift;

	if (b == 0)
	{
		return;
	}

	print_binary_recur(b >> 1);

	shift = b >> 1;
	rem = b - (2 * shift);
	_putchar(rem + '0');

}

#include "main.h"

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

	print_recursion(n);

}

void print_recursion(unsigned long int b)
{
	int rem = 0;
	unsigned long int shift;

	if (b == 0)
	{
		return;
	}

	print_recursion(b >> 1);

	shift = b >> 1;
	rem = b - (2 * shift);
	_putchar( rem + '0');

}

#include "main.h"
#include <limits.h>

/**
 * get_bit - get the value of a bit
 * @n: the integer
 * @index: index of the bit value be retrieved
 *
 * Return: value of bit or -1 on error
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int mask = _pow(2, (int) index);
	int and;

	and = mask & n;

	if (index > 31)
		return (-1);

	if (and == 0)
	{
		return (0);
	}

	return (1);
}

/**
 * _pow - returns base to the power of exponent
 * @base: integer representing base of exponent
 * @exponent: integer representing exponent
 *
 * Return: base raised to the power of exponent
*/
int _pow(int base, int exponent)
{
	if (exponent == 0)
	{
		return (1);
	}

	return (base * _pow(base, exponent - 1));
}

#include "main.h"
#include <stddef.h>

/**
 * flip_bits - returns the number of bits that need to
 *  be flipped to turn a number into another
 * @n: first integer to compare
 * @m: second integer to compare
 *
 * Return: value of bit or -1 on error
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = _pow_long(2, (sizeof(unsigned long int) * 8) - 1);
	unsigned long int xor, count, and;

	/* get a number representing the number of different bits*/
	xor = m ^ n;

	count = 0;
	while (mask > 0)
	{
		and = xor & mask;

		if (and != 0)
		{
			count++;
		}
		mask = mask >> 1;
	}

	return (count);
}

/**
 * _pow_long - returns base to the power of exponent
 * @base: integer representing base of exponent
 * @exponent: integer representing exponent
 *
 * Return: base raised to the power of exponent
*/
unsigned long int _pow_long(int base, int exponent)
{
	if (exponent == 0)
	{
		return (1);
	}

	return (base * _pow_long(base, exponent - 1));
}

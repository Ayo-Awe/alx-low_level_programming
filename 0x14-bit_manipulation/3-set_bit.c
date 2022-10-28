#include "main.h"
#include <stddef.h>

/**
 * set_bit - get the value of a bit
 * @n: pointer to the integer to set bit
 * @index: index of the bit value be retrieved
 *
 * Return: value of bit or -1 on error
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	int mask = _pow(2, (int) index);
	int and;

	if (n == NULL)
		return (-1);

	/* get value at index, if and is 1 value is 1, vice versa*/
	and = mask & *n;

	if (index > 31)
		return (-1);

	if (and == 0)
	{
		/* if bit at index is zero set it to 1*/
		*n = *n + mask;
		return *n;
	}

	/* if bit at index was alreay 1, return as is*/
	return *n;
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

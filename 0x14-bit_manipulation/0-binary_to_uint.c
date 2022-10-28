#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts binary to uint
 * @b: pointer to binary chars
 *
 * Return: integer repesenting the binary value
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i, b_in_int, s;

	if (!b)
		return (0);

	s = _strlen((char *) b);

	for (i = 0; i < s; i++)
	{
		/* check that char is '0' or '1' */
		if (b[i] != '1' && b[i] != '0')
			return (0);

		 /* Convert b from char to int */
		b_in_int = b[i] - 48;

		/* Decimal to binary conversion i.e 1 * 2^3 */
		decimal += (b_in_int * _pow(2, s - 1 - i));
	}


	return (decimal);
}


/**
 * _strlen - returns length of a string
 * @s: string pointer
 *
 * Return: length of the string
*/
int _strlen(char *s)
{
	int i = 0;

	while (*s)
	{
		i++;
		s++;
	}

	return (i);
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

#include "main.h"

/**
 * _isupper - checks for uppercase letters
 * @c: character input
 *
 * Return: 0 if false and 1 if true
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		_putchar(1 + '0');
	}
	else
	{
		_putchar(0 + '0');
	}
}

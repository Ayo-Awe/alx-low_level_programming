#include "main.h"

/**
 * _abs - prints the absolut value of a number
 * @c: integer number
 *
 * Return: absolute value of number
 */

int _abs(int c)
{
	if (c < 0)
	{
		return (c * -1);
	}
	else
	{
		return (c);
	}
}

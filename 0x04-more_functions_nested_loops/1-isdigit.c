#include "main.h"

/**
 * _isdigit - checks for digits
 * @c: character input
 *
 * Return: 0 if false and 1 if true
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

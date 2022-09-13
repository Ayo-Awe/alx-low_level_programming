#include "main.h"

/**
 * _islower - checks if a character is lowercase or not
 * @c: a character
 *
 * Return: 1 if uppercase, 0 if lowercase
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

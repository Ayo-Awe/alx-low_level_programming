#include "main.h"

/**
 * _isalpha - checks if a character is alphabetic
 * @c: integer representing a character
 *
 * Return: 1 if character is alphabetic else 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

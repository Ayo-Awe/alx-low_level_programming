#include "main.h"

/**
 * int _strlen_recursion - prints a string recursively
 * @s: string
 *
 * Return: the length of string s
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (_strlen_recursion(s + 1) + 1);
}

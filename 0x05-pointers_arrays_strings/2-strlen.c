#include "main.h"

/**
 * _strlen  - returns the length of a string
 * @s: string
 *
 * Return: length of the given string
 */

int  _strlen(char *s)
{
	int size_of_array;

	size_of_array = sizeof(s) - 1;

	return (size_of_array);
}

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

	size_of_array = 0;

	while (*(s + size_of_array) != '\0')
	{
		size_of_array++;
	}


	return (size_of_array);
}

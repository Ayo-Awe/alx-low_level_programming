#include "main.h"
#include <stdio.h>

/**
 * _strchr - finds the occurence of a char c
 * @s: string
 * @c: char
 *
 * Return: pointers to occurence of c or NULL if none
 */

char *_strchr(char *s, char c);
{
	unsigned int i;

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (NULL);
}

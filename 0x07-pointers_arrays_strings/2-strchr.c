#include "main.h"
#include <stdio.h>

/**
 * _strchr - finds the occurence of a char c
 * @s: string
 * @c: char
 *
 * Return: pointers to occurence of c or NULL if none
 */

char *_strchr(char *s, char c)
{
    int i;
    
    i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s+i);
		i++;
	}

	return (NULL);
}

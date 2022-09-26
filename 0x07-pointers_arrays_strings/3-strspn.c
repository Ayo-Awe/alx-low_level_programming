#include "main.h"

/**
 * _strchr - finds the occurence of a char c
 * @s: string
 * @accept: substring
 *
 * Return: pointers to occurence of c or NULL if none
 */

unsigned int _strspn(char *s, char *accept)
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

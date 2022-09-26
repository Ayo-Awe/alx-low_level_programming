#include "main.h"
#include <stddef.h>
#include <string.h>

int contains(char *s, char *c);

/**
 * _strstr - finds the substring of a char c
 * @haystack: string
 * @needle: substring
 *
 * Return: pointer to substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	char *p;

	i = 0;

	while (haystack[i] != '\0')
	{
		p = haystack + i;

		if (contains(p, needle))
			return (p);

		i++;
	}

	return (NULL);
}

/**
 * contains - checks if c is a substring of s
 * @s: string
 * @c: substring
 *
 * Return: pointers to substring of c or NULL if none
 */
int contains(char *s, char *c)
{
	int i, j;

	i = 0;
	j = 0;
	while (s[i] != '\0' && c[i] != '\0')
	{

		if (s[i] != c[i])
			return (0);

		j++;
		i++;
	}

	if (j != (int) strlen(c))
		return (0);

	return (1);

}

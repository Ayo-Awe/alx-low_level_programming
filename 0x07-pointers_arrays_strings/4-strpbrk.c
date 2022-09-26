#include "main.h"
#include <stddef.h>

int contains(char *s, char c);

/**
 * _strpbrk - finds the occurence of a char c
 * @s: string
 * @accept: substring
 *
 * Return: pointer to first occurence
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	char *p;

	i = 0;

	while (s[i] != '\0')
	{
		p = s + i;

		if (contains(accept, s[i]))
			return (p);

		i++;
	}

	return (NULL);
}

/**
 * contains - finds the occurence of a char c
 * @s: string
 * @c: string to find
 *
 * Return: pointers to occurence of c or NULL if none
 */
int contains(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (1);
		i++;
	}

	return (0);

}

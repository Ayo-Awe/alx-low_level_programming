#include "main.h"

/**
 * _memset - fills the first n bytes
 * @s: pointer
 * @b: constant character
 * @n: number of bytes
 *
 * Return: pointers to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}

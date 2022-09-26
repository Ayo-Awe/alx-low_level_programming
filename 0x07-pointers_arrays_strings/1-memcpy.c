#include "main.h"

/**
 * _memcpy - copy n bytes from memory area to source
 * @dest: destination
 * @src: source
 * @n: number of bytes
 *
 * Return: pointers to s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

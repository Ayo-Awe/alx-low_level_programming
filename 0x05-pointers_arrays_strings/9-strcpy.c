#include "main.h"

/**
 * _strcopy  - copys strings from src to dest
 * @src: source string
 * @dest: destination string
 *
 * Return: pointer to dest
 */

char *  _strcopy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = src[i];
	return (dest);
}

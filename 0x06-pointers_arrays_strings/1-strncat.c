#include "main.h"
#include <string.h>

/**
 * _strncat - concatinating n bytes from source string with
 * destination string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be concatenated
 *
 * Return: pointer string
 */

char *_strncat(char *dest, char *src, int n)
{
	int start = strlen(dest);
	int i = 0;

	while (i < n)
	{
		dest[start + i] = src[i];
		i++;
	}


	return (dest);
}

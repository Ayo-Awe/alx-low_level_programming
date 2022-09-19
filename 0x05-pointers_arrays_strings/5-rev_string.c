#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: string
 *
 * Return: void
 */

void  rev_string(char *s)
{
	int i, j;
	int len = _strlen(s);
	char *rev = "";

	strcpy(rev, s);

	j = 0;

	for (i = len - 1; i >= 0; i--)
	{
		rev[j] = s[i];
		
	}

	strcpy(s, rev);

}

/**
 * _strlen - returns length of string
 * @s: string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*(s + len) != '\0')
	{
		len++;
	}

	return (len);
}

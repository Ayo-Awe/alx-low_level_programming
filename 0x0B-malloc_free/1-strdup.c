#include <stdlib.h>

int _strlen(char *s);
/**
 * _strdup - creates a duplicate of string str
 * @str: number of chars
 *
 * Return: pointer to string or NULL on error
 */

char *_strdup(char *str)
{
	char *p;
	int i = 0, len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = _strlen(str);


	p = malloc(sizeof(char) * (len + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		p[i] = str[i];
	}

	return (p);
}

/**
 * _strlen - returns length of string
 * @s: pointer to string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}


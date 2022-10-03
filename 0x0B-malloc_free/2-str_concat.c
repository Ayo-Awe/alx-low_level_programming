#include <stdlib.h>

int _strlen(char *s);
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to string or NULL on error
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, j, len, s1_len, s2_len;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);
	len = s1_len + s2_len + 1;

	p = malloc(sizeof(char) * len);

	if (p == NULL)
		return (NULL);

	/* copy first string to new memory location */
	for (i = 0; i < s1_len; i++)
	{
		p[i] = s1[i];
	}

	/* copy second string to new memory location */
	for (j = 0; j < s2_len; j++)
	{
		p[i + j] = s2[j];
	}

	p[i + j] = '\0';

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


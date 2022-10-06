#include "main.h"
#include <stdlib.h>

int _strlen(char *);
/**
 * string_nconcat - functions just like strncat
 * @s1: string one
 * @s2: string two
 * @n: number of bytes
 *
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s, *tmp;
	int i;
	int s1_len = 0;
	int s2_len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);

	if ((int) n > s2_len)
		n = s2_len;


	s = malloc((s1_len + n + 1) * sizeof(*s));

	if (s == NULL)
		return (NULL);

	tmp = s;

	while (*s1 != '\0')
	{
		*tmp = *s1;
		tmp++;
		s1++;
	}

	for (i = 0; i < (int) n; i++)
	{
		*tmp = s2[i];
		tmp++;
	}

	*tmp = '\0';

	return (s);
}

/**
 * _strlen - get length of string
 * @s: string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}



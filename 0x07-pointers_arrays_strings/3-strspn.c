#include "main.h"

int contains(char *s, char c);

/**
 * _strspn - finds the occurence of a char c
 * @s: string
 * @accept: substring
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (contains(accept, s[i]))
		{
			i++;
		}
		else
		{
			/* If not first occurence of substring*/
			if (i > 0)
				return (i);

			/* Else first occurence of substring*/
			i++;
		}
	}

	return (i);
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

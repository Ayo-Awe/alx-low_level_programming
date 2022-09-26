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
	unsigned int i, j;
	int start;

	i = 0;
	j = 0;
	start = 0;


	while (s[i] != '\0')
	{
		if (contains(accept, s[i]))
		{
			j++;
			start = 1;
		}

		if (contains(accept, s[i]) == 0 && start > 0)
		{
			return (j);
		}



		i++;
	}

	return (j);
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

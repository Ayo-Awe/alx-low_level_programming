#include "main.h"

int isSeperator(char);

/**
 * cap_string - converts lowercase strings to uppercase
 * @s: string
 *
 * Return: void
 */
char *cap_string(char *s)
{
	int i = 0;
	int target;

	while (s[i] != '\0')
	{

		if (isSeperator(s[i]))
		{
			target = i + 1;

			if (s[target] > 96 && s[target] <= 122)
				s[target] -= 32;
		}

		i++;
	}

	return (s);
}

/**
 * isSeperator - returns 1 if a character is a seperator
 * @c: character
 *
 * Return: 1 if seperator and 0 if otherwise
 */

int isSeperator(char c)
{
	char seperators[13] = {32, '\t', '\n', ',', ';', '.', '!', '?', '\"',
		'(', ')', '{', '}'};
	int i = 0;

	while (i < 13)
	{
		if (seperators[i] == c)
			return (1);
		i++;
	}

	return (0);
}


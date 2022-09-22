#include "main.h"
/**
 * string_toupper - converts lowercase strings to uppercase
 * @s: string
 *
 * Return: void
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{

		if(s[i] > 96 && s[i] <= 122)
			s[i] -= 32;

		i++;
	}
	
	return (s);
}

#include "main.h"

/**
 * puts_half  - prints half a string to the standart output
 * @s: string
 *
 * Return: void
 */

void  puts_half(char *s)
{
	int i;
	int n = (_strlen(s) - 1) / 2;

	for (i = n + 1; i < _strlen(s); i++)
	{

		_putchar(s[i]);
	}

	_putchar('\n');

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

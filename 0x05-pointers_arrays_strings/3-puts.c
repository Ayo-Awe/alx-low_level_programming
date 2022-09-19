#include "main.h"

/**
 * _puts  - prints a string to the standart output
 * @s: string
 *
 * Return: void
 */

void  _puts(char *s)
{
	int i;


	for (i = 0; i < _strlen(s); i++)
	{
		_putchar(*(s + i));
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

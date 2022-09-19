#include "main.h"

/**
 * print_rev - prints a string in reverse to the standart output
 * @s: string
 *
 * Return: void
 */

void  print_rev(char *s)
{
	int i;


	for (i = (_strlen(s) - 1); i >= 0; i--)
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

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings with separator
 * @separator: string separator
 * @n: number of strings
 *
 * Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	char *s;
	va_list strings;

	va_start(strings, n);

	for (i = 0; i < (int) n; i++)
	{
		s = va_arg(strings, char *);
		if (s == NULL)
			s = "(nil)";

		if (i < (int) (n - 1))
			printf("%s%s", s, separator ? separator : "");
		else
			printf("%s\n", s);
	}
}

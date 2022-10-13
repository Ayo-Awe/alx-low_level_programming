#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - prints all arguments
 * @format: string representing format specifier
 *
 * Return: void
*/

void print_all(const char * const format, ...)
{
	va_list args;
	char *s = (char *) format;
	char *string;

	va_start(args, format);

	while (*s)
	{
		switch (*s)
		{
			case 'c':
				printf("%c, ", va_arg(args, int ));
				break;

			case 'i':
				printf("%d, ", va_arg(args, int ));
				break;

			case 'f':
				printf("%f, ", va_arg(args, double ));
				break;

			case 's':
				string = va_arg(args, char *);
				if (string == NULL)
					string = "(nil)";
				printf("%s, ", string);
				break;

			default:
				break;
		}
		s++;

	}

	printf("\n");
	va_end(args);
}

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - prints numbers with seperators
 * @n: number of numbers
 * @separator: string to seperate args
 *
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list nums;

	if (separator == NULL)
		return;


	va_start(nums, n);

	for (i = 0; i < (int) n; i++)
	{
		if (i < (int) (n - 1))
			printf("%d%s", va_arg(nums, int), separator ? separator : "");
		else
			printf("%d\n", va_arg(nums, int));
	}

	va_end(nums);
}

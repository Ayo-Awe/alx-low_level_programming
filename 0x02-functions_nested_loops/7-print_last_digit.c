#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: integer number
 *
 * Return: last digit of the number n
 */

int print_last_digit(int n)
{
	int result;

	result = n % 10;

	if (result < 0)
		result *= -1;

	_putchar('0' + result);

	return (result);
}

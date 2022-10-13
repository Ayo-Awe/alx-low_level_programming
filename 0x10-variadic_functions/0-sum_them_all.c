#include <stdarg.h>

/**
 * sum_them_all - sum all arguments of the function
 * @n: size
 *
 * Return: sum of all arguments
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(nums, n);

	for (i = 0; i < (int) n; i++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}

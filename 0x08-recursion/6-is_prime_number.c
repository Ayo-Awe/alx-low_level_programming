#include "main.h"

int test_prime(int n, int divisor);
/**
 * is_prime_number - checks if number is a prime number
 * @n: number
 *
 * Return: return 1 if number is a prime number otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (test_prime(n, 2));
}

/**
 * test_prime - tests if a number is a prime number recursively
 * @n: number
 * @divisor: number to divide n by
 *
 * Return: natural square root if it exist otherwise negative number
 */
int test_prime(int n, int divisor)
{

	int rem;

	rem = n % divisor;

	if (divisor == n)
	{
		return (1);
	}
	else if (divisor >= n / 2)
	{
		return (1);
	}

	if (rem == 0)
	{
		return (0);
	}



	return (test_prime(n, ++divisor));
}

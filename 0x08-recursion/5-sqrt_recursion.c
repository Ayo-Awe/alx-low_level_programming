#include "main.h"

int check_sqrt(int n, int sub);

/**
 * _sqrt_recursion - prints a natural squareroot of n
 * @n: number
 *
 * Return: natural square root if it exist otherwise -1
 */

int _sqrt_recursion(int n)
{

	int result;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return  (-1);
	}


	result = check_sqrt(n, 1);

	if (result > 0)
	{
		return (result);
	}

		return (-1);
}

/**
 * check_sqrt - finds square root of number
 * @n: number
 * @sub: previous odd number to subtract
 *
 * Return: natural square root if it exist otherwise negative number
 */
int check_sqrt(int n, int sub)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (-2000000);
	}
	else
	{
		return (1 + check_sqrt(n - sub, sub + 2));
	}
}

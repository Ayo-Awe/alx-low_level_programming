#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <strings.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always zero
*/

int main(int argc, char *argv[])
{
	int a, b, result;
	char *op;
	int (*f)(int, int);

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	op = argv[2];
	b = atoi(argv[3]);

	f = get_op_func(op);

	if ((*op == '/' || *op == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = f(a, b);

	printf("%d\n", result);

	return (0);

}

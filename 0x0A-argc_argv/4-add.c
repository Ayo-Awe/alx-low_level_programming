#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int isDigit(char *s);
/**
 * main - adds numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (isDigit(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);

	return (0);
}

/**
 * isDigit - checks if string s contains only digit symbols
 * @s: string
 *
 * Return: 1 on success else 0
 */
int isDigit(char *s)
{
	while (*s != '\0')
	{
		if (isdigit(*s) == 0)
		{
			return (0);
		}

		s++;
	}

	return (1);
}

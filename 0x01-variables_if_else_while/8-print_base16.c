#include <string.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char hex[6] = "abcdef";

	for (i = 0; i < 16 ; i++)
	{
		if (i < 10)
		{
			putchar(i + '0');
		}
		else
		{
			putchar(hex[i % 10]);
		}

	}

	putchar('\n');

	return (0);
}

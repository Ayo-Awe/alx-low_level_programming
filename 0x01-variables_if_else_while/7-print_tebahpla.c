#include <string.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 25; i >= 0 ; i--)
	{
		putchar(alphabet[i]);

	}

	putchar('\n');

	return (0);
}

#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: string
 *
 * Return: void
 */

void  rev_string(char *s)
{
	int i;
	int n = strlen(s) - 1;
	char temp;

	for (i = 0; i <= (n / 2); i++)
	{
		temp = s[n - i];

		s[n - i] = s[i];

		s[i] = temp;
	}

}


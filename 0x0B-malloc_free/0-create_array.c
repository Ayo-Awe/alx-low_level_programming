#include <stdlib.h>

/**
 * create_array - creates array of chars with size and initialises with c
 * @size: number of chars
 * @c: char to initialise with
 *
 * Return: pointer to array or NULL on error
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	int i = 0;

	if (size == 0)
		return (NULL);

	p = malloc(sizeof(char) * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < (int) size; i++)
	{
		p[i] = c;
	}

	return (p);
}


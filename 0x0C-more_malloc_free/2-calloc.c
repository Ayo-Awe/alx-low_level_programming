#include "main.h"
#include <stdlib.h>

/**
 * _calloc - creates an array of nmemb members each of size "size"
 * @nmemb: number of elements
 * @size: size of the array
 *
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	int i;
	unsigned int len;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(size * nmemb);

	if (p == NULL)
	{
		return (NULL);
	}

	len = size * nmemb;

	return (p);

}

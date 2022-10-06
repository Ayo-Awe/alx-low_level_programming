#include "main.h"
#include <stdlib.h>

/**
 * _realloc - creates new memory of new_size
 * @ptr: number of elements
 * @old_size: size of old memory in bytes
 * @new_size: size of new memory in bytes
 * Return: void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	char *c_ptr, *c_p;
	int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}

	if (new_size > old_size)
	{
		p = malloc(new_size);

		if (p == NULL)
		{
			free(ptr);
			return (NULL);
		}
		c_ptr = ptr;
		c_p = p;

		for (i = 0; i < (int) old_size; i++)
		{
			c_p[i] = c_ptr[i];
		}
		free(ptr);
	}
	return (p);
}

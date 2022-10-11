#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dog memory
 * @d: dog allocated using malloc
 *
 * Return: void
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name != NULL)
		free(d->name);

	if (d->owner != NULL)
		free(d->owner);

	free(d);
}

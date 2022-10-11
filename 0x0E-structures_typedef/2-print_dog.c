#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints the properties of a dog struct
 * @d: pointer to dog struct
 *
 * Return: void
*/
void print_dog(struct dog *d)
{
	char *name, *owner;

	if (d == NULL)
		return;

	name = d->name ? d->name : "(nil)";

	owner = d->owner ? d->owner : "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", name, d->age, owner);
}

#include "dog.h"

/**
 * init_dog - intialises the value of a dog struct
 * @d: dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;

}

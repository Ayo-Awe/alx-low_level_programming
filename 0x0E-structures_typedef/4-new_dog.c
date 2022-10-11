#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new dog struct
 * @name: name of dog
 * @age: age of the dog
 * @owner: name of dog owner
 *
 * Return: pointer to new dog_t
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *n_cpy, *o_cpy;

	d = malloc(sizeof(*d));

	if (d == NULL)
		return (NULL);

	n_cpy = _strcpy(name);

	if (n_cpy == NULL)
	{
		free(d);
		return (NULL);
	}

	o_cpy = _strcpy(owner);

	if (o_cpy == NULL)
	{
		free(n_cpy);
		free(d);
		return (NULL);
	}

	d->age = age;
	d->name = n_cpy;
	d->owner = o_cpy;

	return (d);


}

/**
 * _strlen - gets length of a string
 * @s: char pointer
 *
 * Return: length of the string
*/
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}

	return (i);
}

/**
 * _strcpy - creates a copy of string s
 * @s: pointer to string to be copied
 *
 * Return: pointer or NULL if function fails
*/
char *_strcpy(char *s)
{
	char *p;
	char *c;

	p = malloc((_strlen(s) + 1) * sizeof(*p));

	if (p == NULL)
		return (NULL);

	c = p;

	while (*s != '\0')
	{
		*c = *s;
		c++;
		s++;
	}

	*c = '\0';

	return (p);
}

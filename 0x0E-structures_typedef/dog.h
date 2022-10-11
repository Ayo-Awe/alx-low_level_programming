#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - dog struct
 * @name: name of dog
 * @age: dog's age
 * @owner: owner's name
*/
struct dog
{
	char *name;
	char *owner;
	float age;
};
/**
 * dog_t - type definition for dog
*/
typedef dog_t struct dog;
void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *d);
#endif

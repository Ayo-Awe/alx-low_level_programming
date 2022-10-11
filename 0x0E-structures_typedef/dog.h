#ifndef _DOG_H_
#define _DOG_H_
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
typedef struct dog dog_t;
int _strlen(char *s);
char *_strcpy(char *s);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *d);
#endif

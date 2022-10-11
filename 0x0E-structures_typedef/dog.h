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
void init_dog(struct dog *, char *, float, char *);


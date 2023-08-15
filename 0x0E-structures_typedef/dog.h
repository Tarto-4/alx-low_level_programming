#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - Unique dog's ID
 * @name: name of dog.
 * @age: dog's age.
 * @owner: Guardian of dog.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H */

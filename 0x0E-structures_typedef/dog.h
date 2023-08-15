#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
} my_dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef my_dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif /* DOG_H */

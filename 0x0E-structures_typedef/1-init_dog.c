#include "dog.h"

/**
 * init_dog - A function that initialize a variable of type
 * struct dog.
 * @d: variable of type struct dog.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: guardian of dog.
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

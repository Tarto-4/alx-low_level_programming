#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Unique dog's ID
 * @name: name of dog.
 * @age: dog's age.
 * @owner: Guardian of dog.
 */
typedef struct dog
{
	char *name[100];
	float age;
	char *owner[100];
} my_doggo;
#endif /* DOG_H */

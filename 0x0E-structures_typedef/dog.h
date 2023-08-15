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
	char *name;
	float age;
	char *owner;
} my_dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */

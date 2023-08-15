#include "dog.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: pointer to a newly allocated space in memory
 */
char _strdup(char *str)
{
	int length, i;
	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}
	length = 0;
	while (*(str + length) != '\0')
	{
		length++;
	}
	arr = (char *) malloc(length * sizeof(char) + 1);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
	{
		arr[i] = str[i];
	}
	arr[i] = '\0';
	return (arr);
}
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new_dog (dog_t)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	char *doggy_name, *doggy_owner;

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);
	doggy_owner = _strdup(owner);
	if (doggy_owner == NULL)
	{
		free(doggy_name);
		free(doggy);
		return (NULL);
	}
	doggy->name = doggy_name;
	doggy->age = age;
	doggy->owner = doggy_owner;
	return (doggy);
}

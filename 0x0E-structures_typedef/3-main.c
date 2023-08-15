#include "dog.h"

/**
 * main - check code
 * Return: Always 0.
 */
int main(void)
{
	dog_t *my_dog;

	my_dog = new_dog("pan", 3.4, "me");
	printf("My name is %s and I am %f :) - Woof\n", my_dog->name, my_dog->age);
	return (0);
}


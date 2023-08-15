#include "dog.h"

/**
 * main - check code
 * Return: Always 0.
 */
int main(void)
{
	struct dog my_dog;

	my_dog.name = "Spot";
	my_dog.age = 1.3;
	my_dog.owner = "Me";
	print_dog(&my_dog);
	return (0);
}

#include "main.h"
/**
 * swap_int - swaps value of two integers
 * @a: integer to check
 * @b: integer to check
 * Return: 0;
 */

void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}

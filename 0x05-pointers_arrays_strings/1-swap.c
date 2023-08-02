#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: input 1
 * @b: input 2
 * return: Always 0(Success)
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}

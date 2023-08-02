#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: input 1
 * @b: input 2
 * return: Always 0(Success)
 */
void swap_int(int *a, int *b)
{
	int temp; /* declare a temporary variable to store value*/

	temp = *a;
	*a = *b;
	*b = temp;
}

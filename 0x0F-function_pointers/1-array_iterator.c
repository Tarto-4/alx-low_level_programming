#include "function_pointers.h"

/**
 * array_iterator - calls a function
 * @size: size of array
 * @action: function pointer
 * @array: array pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i];
}

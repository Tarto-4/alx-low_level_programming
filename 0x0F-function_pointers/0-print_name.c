#include "function_pointers.h"

/**
 * print_name - A function that prints a name
 * @f: Associated function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}

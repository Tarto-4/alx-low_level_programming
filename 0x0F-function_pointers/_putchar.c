#include "function_pointers.h"

/**
 * _putchar - writes a character to stdout
 * @c: character to write
 * Return: 1 on success.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

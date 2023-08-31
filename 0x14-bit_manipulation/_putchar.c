#include "main.h"

/**
 * _putchar - prints a character out to stdout
 * @c: character to print
 * Return: passed chars
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include "main.h"

/**
 * print_sign - A function that prints the sign (operator) of a number.
 * @c: number that is checked
 * Return: 1 if number is > 0, 0 if number is equivalent to zero,
 * and -1 if less than zero.
 */
int print_sign(int c)
{
	if (c > 0)
	{
		return (+1);
		_putchar('+');
	} else if (c == 0)
	{
		return (0);
		_putchar('0');
	} else
	{
		return (-1);
		_putchar('-');
	}
}

#include "main.h"

/**
 * print_sign - A function that prints the sign (operator) of a number.
 * @n: number that is checked
 * Return: 1 if number is > 0, 0 if number is equivalent to zero,
 * and -1 if less than zero.
 */
int print_sign(int c)
{
	int n;

	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (c == 0)
	{
		_putchar('0');
		return (0);
	} else
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}

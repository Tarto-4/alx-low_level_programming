#include "main.h"

/**
 * print_last_digit - Outputs the last digit of a number
 * @x: integer to be passed
 * Return: Always 0 (Success)
 */
int print_last_digit(int x)
{
	int last = x % 10;

	if (x < 0)
	{
		last = last * -1;
		_putchar(last + '0');
		return (last);
	}
	return (0);
}

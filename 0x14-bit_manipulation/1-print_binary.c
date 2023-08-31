#include "main.h"

/**
 * print_binary - A function that prints the binary representation of a number
 * @n: number to print
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int bitNum = sizeof(n);
       	unsigned long mask = 1UL << (sizeof(unsigned long) * 8 - 1);
	int i = 1;

	while (mask > 0)
	{
		if ((n & mask) != 0)
		{
			i = 0;
			_putchar('1');
		}
		else if (!i)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
	if (i)
	{
		_putchar('0');
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_most_numbers - print prints 0-9 excluding 2 & 4
 * Return: 0 on success
 */
void print_most_numbers(void)
{
	int n = 0;

	while (n <= 57)
	{
		_putchar(n);
		if (n == 2 || n == 4)
		{
			continue;
		}
		n++;
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_numbers - print numbers 0-9
 * Return: void
 */
void print_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		_putchar(n + 48);
		n++
	}
	_putchar('\n');
}

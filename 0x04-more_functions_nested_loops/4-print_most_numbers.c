#include "main.h"

/**
 * print_most_numbers - print prints 0-9 excluding 2 & 4
 * @n: integer to be printed out
 * Return: 0 on success
 */
void print_most_numbers(void)
{
	int n = 48;

	while (n <= 57)
	{
		if (n == 50 || n == 52)
		{
			continue;
			_putchar(n);
		}
		n++;
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_diagonal - output a diagonal line
 * @n: number of times the line is printed
 * Return: 0 on success
 */
void print_diagonal(int n)
{
	int i = 0, s;

	while (i < n && n > 0)
	{
		s = 0;
		while (s < i)
		{
			_putchar(' ');
			s++;
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (i == 0)
		_putchar('\n');
}

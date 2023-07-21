#include "main.h"
/**
 * print_line - print a line
 * @n: number of times the line is printed
 * Return: 0 on success
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_alphabet - A function that prints
 * the English alphabet in lowercase
 * Return: Always 0 (Success)
 */
void print_alphabet(void);

void print_alphabet(void)
{
	char c[];
	int i;

	for (i = '97'; i < '127'; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}

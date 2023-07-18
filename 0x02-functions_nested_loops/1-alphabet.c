#include "main.h"

/**
 * print_alphabet - A function that prints
 * the English alphabet in lowercase
 * Return: Always 0 (Success)
 */
void print_alphabet(void);

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c < 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}

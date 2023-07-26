#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * p counts to end, n counts back
 * @s: The string to be printed
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int f = 0;
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		f++;
	}

	for (n = (f - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}

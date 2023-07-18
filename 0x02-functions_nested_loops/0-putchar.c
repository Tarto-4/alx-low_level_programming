#include "main.h"

/**
 * main - Entry point
 * _putchar: prints out a single character in succesion
 * due to for loop.
 * Return: Always 0 (Success)
 */

int _putchar(char c);

int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}

#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int i, n, k;

	k = 0;

	for (i = 0; str[i] != '\0'; i++)
		k++;

	n = (k / 2);

	if ((k % 2) == 1)
		n = ((k + 1) / 2);

	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}

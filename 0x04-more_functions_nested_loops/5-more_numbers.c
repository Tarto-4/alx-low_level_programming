#include "main.h"
/**
 * more_numbers - print 10 times numbers from 1-14
 * Return: 0 on success
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = '1'; j <= '14'; j++)
		{
			_putchar(j);
		}
		_putchar(i);
	}
	_putchar('\n');
}

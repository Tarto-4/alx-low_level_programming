#include "main.h"
/**
 * more_numbers - print 10 times numbers from 1-14
 * Return: 0 on success
 */
void more_numbers(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 48; j <= 49; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				if (j != 48)
				{
					_putchar(j);
				}
				_putchar(k);
				if (j == 49 && k == 52)
				{
					break;
				}
			}
		}
		_putchar('\n');
	}
}

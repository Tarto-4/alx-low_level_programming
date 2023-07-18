#include "main.h"

/**
 * _islower: A function that checks for lowercase characters
 * @i: character to be checked
 * Return: Always 1 (Success)
 */
int _islower(int c)
{
	char i;

	for (i = 'a'; i < 'z'; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}

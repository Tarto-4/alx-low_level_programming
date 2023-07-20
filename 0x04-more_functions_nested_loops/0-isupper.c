#include "main.h"

/**
 * _isupper - checks for uppercase letters
 * @c: passed variable to check
 * Return: 1 on success or 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c<= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"

/**
 * _isalpha - A function that checks for alphabetic characters.
 * @c: character to be checked.
 * Return: Always 1 (Sucess), 0 otherwise
 */
int _isalpha(int c)
{
	int i;

	for (i = 'a' || i = 'A'; i < 'z' || i = 'Z')
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}

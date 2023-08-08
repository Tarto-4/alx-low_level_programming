#include "main.h"

/**
 * _isalpha - A function that checks for alphabetic characters.
 * @c: character to be checked.
 * Return: Always 1 (Sucess), 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

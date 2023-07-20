#include "main"

/**
 * _isupper - checks for uppercase letters
 * @c: passed variable to check
 * Return: 1 on success
 */
int _isupper(int c)
{
	return (((c > 65 && c < 90)) ? 1 : 0);
}

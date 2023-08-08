#include "main.h"

/**
 * _isdigit - function that checks for digit
 * @c: checked variable
 * Return: 1 on success, otherwise 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

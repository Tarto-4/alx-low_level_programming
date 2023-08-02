#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt(n, (n + 1) / 2));
}
/**
 * _sqrt - calculates natural squareroot
 * @n: input
 * @i: iterate number
 * Return: natural squareroot
 */
int _sqrt(int n, int i)
{
	if (i < 1)
		return (-1);
	else if (i * i == 1)
		return (i);
	else
		return (_sqrt(n, i - 1));
}

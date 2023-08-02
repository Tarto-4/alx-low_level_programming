#include "main.h"

/**
 * pal1 - obtains length of a
 * @x: string
 * @len: integer to count length
 * Return: 1(Success)
 */
int pal1(char *x, int len)
{
	if (*x == 0)
		return (len - 1);
	return (pal1(x + 1, len + 1));
}

/**
 * pal2 - compares string vs string reverse
 * @x: string
 * @len: length
 * Return: 1(Success)
 */
int pal2(char *x, int len)
{
	if (*x != *(x + len))
		return (0);
	else if (x == 0)
		return (1);
	return (pal2(x + 1, len - 2));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate
 * Return: 1(Success)
 */
int is_palindrome(char *s)
{
	int len;

	len = pal1(s, 0);
	return (pal2(s, len));
}

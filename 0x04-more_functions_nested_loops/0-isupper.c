#include "main"

/**
 * _isupper - checks for uppercase letters
 * @c: passed variable to check
 * Return: 1 on success
 */
int _isupper(int c)
{
	int i;

	for (i = 'A', i <= 'Z')
	{
		if (i == c)
		{
			return (1);
		} else
		{
			return (0)
		}
	}
}

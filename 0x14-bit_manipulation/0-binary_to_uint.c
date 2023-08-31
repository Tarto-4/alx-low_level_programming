#include "main.h"

/**
  * binary_to_uint - converts a binary number to an unsigned integer and
  * returns an usigned int
  * @b: pointer to input string
  * Return: converted string
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int pwr = 1;
	int i;

	if (b == NULL)
		return (0);

	for (i = strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] == '1' || b[i] == '0')
		{
			result += (b[i] - '0') * pwr;
			pwr *= 2;
		}
		else
		{
			return (0);
		}
	}

	return (result);
}

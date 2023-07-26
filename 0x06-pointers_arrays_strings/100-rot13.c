#include "main.h"

/**
  * rot13 - Emtry point
  * Desc: rot13
  * @x: The string to encode
  *
  * Return: function that encodes using rot13
  */
char *rot13(char *x)
{
	int a, j;
	char step[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char up[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	a = 0;
	while (x[a] != 0)
	{
		j = 0;
		while (step[j] != 0)
		{
			if (x[a] == step[j])
			{
				x[a] = up[j];
				break;
			}
			j++;
		}
		a++;
	}
	return (x);
}

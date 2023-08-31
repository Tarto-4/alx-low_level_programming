#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i = 0;
	int count = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			printf("1");
			count++;
		}
		else if (count)
			printf("0");
	}
	if (!count)
	printf("0");
}

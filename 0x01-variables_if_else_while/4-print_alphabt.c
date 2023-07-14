#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * A program that print the English alphabet in lowercase
 * without letter e and q
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
		{
			continue;
		}
		putchar(c);
	}
	putchar('\n');
	return (0);
}

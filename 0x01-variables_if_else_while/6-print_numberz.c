#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * A program that prints single digit numbers of base 10
 * Return: Always (0) (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

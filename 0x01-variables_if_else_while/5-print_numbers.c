#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * A program that prints out single digit base 10 numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * A program that prints out the English Alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
		putchar('\n');
	}
	return (0);
}

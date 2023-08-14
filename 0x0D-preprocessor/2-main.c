#include <stdio.h>

/**
 * main - A program that prints the name of file it was
 * compiled from followed by a newline
 * Return: Always 0.
 */
int main(void)
{
	printf("%s\n", _FILE_);

	return (0);
}

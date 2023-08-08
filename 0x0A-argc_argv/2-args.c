#include <stdio.h>
/**
 * main -  prints its name, followed by a new line.
 * @argc: integer value
 * @argv: array value
 * Return: Always 0 for Success.
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}

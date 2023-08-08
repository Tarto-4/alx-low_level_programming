#include <stdio.h>
#include <stdlib.h>
/**
 * main -  prints its name, followed by a new line.
 * @argc: integer value
 * @argv: array value
 * Return: Always 0 for Success.
 */
int main(int argc, char *argv[])
{
	int x;
	int y;
	int z;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	z = x * y;
	printf("%d\n", z);
	return (0);
}

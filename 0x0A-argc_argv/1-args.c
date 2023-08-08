#include <stdio.h>
/**
 * main -  prints its name, followed by a new line.
 * @argc: integer value
 * @argv: array value
 * Return: Always 0 for Success.
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}

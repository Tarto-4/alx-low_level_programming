#include <stdio.h>
#include <time.h>
/* More header files goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * A program that prints whether a number is positive or negative
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	scanf("%d\n", &n);
	if (n > 0){
		printf("%d is positive\n", n);
	} else if (n < 0){
		printf("%d is negative\n", n);
	} else {
		printf("%d is zero\n", n);
	}
	return (0);
}

#include "main.h"

int check_prime(int n, int i);

/**
 * is_prime_number - returns 1 if the input integer is a prime number, otherwise return 0.
 * @n: the number to be checked
 * Return: int
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
/**
 * check_prime - Check if number is prime
 * @n: the number to be checked
 * @b: number that iterates from 1 to n
 * Return: int
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (check_prime(n, i + 1));
}

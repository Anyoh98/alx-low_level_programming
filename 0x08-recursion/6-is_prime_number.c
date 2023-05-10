#include "main.h"

int true_prime(int n, int i);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to check.
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (true_prime(n, n - 1));
}

/**
 * true_prime - recursively calculates if a number is prime.
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, esle 0.
 */
int true_prime(int n, int a)
{
	if (a == 1)
		return (1);
	if (n % a == 0 && a > 0)
		return (0);
	return (true_prime(n, a - 1));
}

#include "main.h"

int isprime(int n, int i);

/**
 * is_prime_number - prime number
 * @n: intiger
 * Return: prime 1 else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (isprime(n, n - 1));
}

/**
 * isprime - search prime
 * @n: int
 * @i: int
 * Return: prime
 */
int isprime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (isprime(n, i - 1));
}

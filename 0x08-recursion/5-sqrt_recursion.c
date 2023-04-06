#include "main.h"

int root(int n, int i);

/**
 * _sqrt_recursion - natural root
 * @n: intiger
 * Return: the root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (root(n, 0));
}

/**
 * root - finding the natural root no
 * @n: int
 * @i: int
 * Return: the real root
 */
int root(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (root(n, i + 1));
}

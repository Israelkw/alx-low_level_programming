#include "main.h"

/**
 * _islower - check your abc
 *
 * Return: 1 if abc lower, else 0.
 */
int _islower(int a)
{
	if (a >= 'a' && a <= 'z')
		return (1);
	else
		return (0);
}

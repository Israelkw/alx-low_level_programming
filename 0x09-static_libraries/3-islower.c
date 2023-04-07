#include "main.h"

/**
 * _islower - check your abc
 *@a: is the character in question
 * Return: 1 if abc lower, else 0.
 */
int _islower(int a)
{
	if (a >= 'a' && a <= 'z')
		return (1);
	else
		return (0);
}

#include "main.h"

/**
 * _islower - check your abc
 *@a: is the character in question
 * Return: 1 if abc latter, else 0.
 */
int _isalpha(int a)
{
	if (a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')
		return (1);
	else
		return (0);
}

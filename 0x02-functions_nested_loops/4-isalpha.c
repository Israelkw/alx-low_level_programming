#include "main.h"

/**
 * _isalpha - check your abc
 *@a: is the character in question
 * Return: 1 if abc latter, else 0.
 */
int _isalpha(int a)
{
	return ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'));
}

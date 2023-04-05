#include "main.h"

/**
 * _puts_recursion - repets till home base
 * @s: pointer
 * Return: the recursion
 */
void _puts_recursion(char *s)
{
	if (s*)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_sign - sign the numbers
 * @n: number?
 * Return: 1 if pos + if neg 0r - if zero
 */
int print_sign(int n)
{
	if (n > 0)
		_putchar('+');
	return (1);
	else if (n < 0)
		putchar('0');
	return (0);
	else
		_putchar('-');
	return ('-');
}

#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: the number the last digit to be extracted from
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;
	a = n % 10;
	_putchar(a + '0');
	return (a);
}

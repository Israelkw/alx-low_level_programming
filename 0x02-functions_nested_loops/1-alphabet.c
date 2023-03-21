#include "main.h"
/**
 * main - print abc..z
 * print_alphabet - the abcs
 */
void print_alphabet(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
		_putchar(abc);
	_putchar('\n');
}

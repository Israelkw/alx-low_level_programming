#include "main.h"
/**
 * main - print abc..z
 *
 * print_alphabet - print all alphabet in lowercase
 */
void print_alphabet(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
		_putchar(abc);
	_putchar('\n');
}

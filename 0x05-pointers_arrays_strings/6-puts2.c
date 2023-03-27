#include "main.h"

/**
 * puts2 - prints every other
 * @str: input
 * Return: print out
 */
void puts2(char *str)
{
	int i = 0;
	int t = 0;
	char *c = str;
	int j;

	while (*c != '\0')
	{
		c++;
		i++;
	}
	t = i - 1;
	for (j = 0 ; j <= t ; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}

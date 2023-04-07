#include "main.h"

/**
 * jack_bauer - prints the minutes of the movie
 * from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int m, s;

	m = 0;

	while (m < 24)
	{
		s = 0;
		while (s < 60)
		{
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar(':');
			_putchar((s / 10) + '0');
			_putchar((s % 10) + '0');
			_putchar('\n');
			s++;
		}
		m++;
	}
}

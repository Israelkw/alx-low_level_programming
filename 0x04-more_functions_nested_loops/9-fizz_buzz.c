#include <stdio.h>

/**
 * main - flysounds in 1 to 100
 *
 * Return: always 0 (Siccess)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf(" %", i);
		}
	}
	printf("\n");

	return (0);
}

#include <stdlib>
#include <time.h>
#include <stdio.h>

/**
 * main - related with five and zero
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("%d and is greater than 5\n");
	else if (n == 0)
		printf("%d and is 0\n");
	else
		printf("%d and is less than 6 and not 0\n");
	return (0);
}

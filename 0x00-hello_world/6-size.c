#include <stdio.h>

/**
 * main -Entry point
 *
 * Return:Always 0 (success)
 */
int main(void)
{
	fprintf(stderr, "Size of a char: %ld byte(s)\n", sizeof(char));
	fprintf(stderr, "Size of an int: %ld bite(s)\n", sizeof(int));
	fprintf(stderr, "Size of a long int: %ld bite(s)\n", sizeof(long int));
	fprintf(stderr, "Size of a long long int: %ld bite(s)\n", sizeof(long long int));
	fprintf(stderr, "Size of a float: %ld bite(s)\n", sizeof(float));
	return (0);
}

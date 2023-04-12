#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: minumum
 * @max: maximum
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *p;
	int i, j;

	if (min > max)
		return (NULL);
	j = max - min + 1;
	p = malloc(sizeof(int) * j);
	if (p == NULL)
		return (NULL);
	i = 0;
	for (; min <= max; i++)
		p[i] = min++;
	return (p);
}

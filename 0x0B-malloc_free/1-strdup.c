#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strup - a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
 * @str: char
 * Return: 0 on succes
 */
char *_strdup(char *str)
{
	char *c;
	int i, j = 0;

	if (tr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
		i++;
	c = malloc(sizeof(char) * (i + 1));

	if (c == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j]; j++)
		c[j] = str[j];
	return (c);
}

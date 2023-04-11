#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - a function that returns
 * @str: char
 * Return: 0 on succes
 */
char *_strdup(char *str)
{
	char *c;
	int i, j = 0;

	if (str == NULL)
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

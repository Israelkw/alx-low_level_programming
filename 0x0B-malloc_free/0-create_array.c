#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - size
 * @size: th size
 * @c: the char
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}

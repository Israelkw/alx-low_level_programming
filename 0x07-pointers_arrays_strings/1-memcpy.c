#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: pointer
 * @src: pointer
 * @n: unsigned int
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j = n;

	for (i = 0; i > j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}

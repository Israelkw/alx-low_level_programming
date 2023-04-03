#include "main.h"

/**
 * _strpbrk - as writen by srlkbd
 * a function that gets the length of a prefix substring.
 * @s: pointer
 * @accept: pointer
 * Return: s or null
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		for (; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++
	}
	return ('\0');
}

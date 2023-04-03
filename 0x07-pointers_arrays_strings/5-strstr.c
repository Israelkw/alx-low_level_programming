#include "main.h"

/**
 * _strstr - as writen by srlkbd
 * function that locates a substring
 * @haystack: pointer
 * @needle: pointer
 * Return: haystack or null
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *c = haystack;
		char *a = needle;

		while (*c == *a && *a != '\0')
		{
			c++;
			a++;
		}
		if (*a == '\0')
			return (haystack);
	}
	return (0);
}

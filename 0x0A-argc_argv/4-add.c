#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * check_num - check str if digit
 * @str: array
 * Return: 0 on success
 */
int check_num(char *str)
{
	unsigned int c;

	c = 0;
	while (c < strlen(str))
	{
		if (!isdigit(str[c]))
		{
			return (0);
		}
		c++;
	}
	return (1);
}
/**
 * main - print name of program
 * @argc: numb
 * @argv: array
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int c;
	int sti;
	int s = 0;

	c = 1;
	while (c < argc)
	{
		if (check_num(argv[c]))
		{
			sti = atoi(argv[c]);
			s += sti;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		c++;
	}
	printf("%d\n", s);
	return (0);
}

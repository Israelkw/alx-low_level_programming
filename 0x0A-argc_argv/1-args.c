#include "main.h"
#include <stdio.h>

/**
 * main - number of argument
 * @argc: number
 * @argv: array
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * main - progtam name print
 * @argc: name of arg
 * @argv: array of the arg
 * Return: 0 on success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

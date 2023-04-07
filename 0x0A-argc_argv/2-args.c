#include "main.h"
#include <stdio.h>

/**
 * main - prints all
 * @argc: number
 * @argv: array
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

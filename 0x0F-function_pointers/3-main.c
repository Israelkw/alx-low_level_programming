#include <stdio.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: Number of arguments passed to the program
 * @argv: Array of pointers to strings containing the arguments passed
 *
 * Return: Always 0 (Success)
 */
int main(int __attribute__((__unused__)) argc, char **argv)
{
	int num1, num2, result;
	int (*op_func)(int, int);
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);
	op_func = get_op_func(op);
	if (!op_func || op[1] != '\0')
	{
		printf("Error\n");
		return (99);
	}
	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	result = op_func(num1, num2);
	printf("%d\n", result);
	return (0);
}

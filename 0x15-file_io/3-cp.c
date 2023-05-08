#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, exit with code on failure
 */
int main(int argc, char *argv[])
{
	FILE *file_from, *file_to;
	char buffer[1024];
	size_t n;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = fopen(argv[1], "r");
	if (file_from == NULL)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = fopen(argv[2], "w");
	if (file_to == NULL)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((n = fread(buffer, 1, 1024, file_from)) > 0)
	{
		fwrite(buffer, 1, n, file_to);
	}
	if (fclose(file_from) != 0)
	{
	dprintf(2, "Error: Can't close fd %d\n", fileno(file_from));
	exit(100);
	}
	if (fclose(file_to) != 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fileno(file_to));
		exit(100);
	}
	return (0);
}

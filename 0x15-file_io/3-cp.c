#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * cp - copy a file from one location to another
 * @file_from: source file
 * @file_to: destination file
 *
 * Return: 0 on success, -1 on failure
 */
void cp(char *file_from, char *file_to)
{
	int fd_from, fd_to;
	ssize_t nread;
	char buf[BUFFER_SIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR
			| S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		fprintf(stderr, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while ((nread = read(fd_from, buf, BUFFER_SIZE)) > 0)
	{
		if (write(fd_to, buf, nread) != nread)
		{
			fprintf(stderr, "Error: Write error on file %s\n", file_to);
			exit(99);
		}
	}
	if (nread == -1)
	{
		fprintf(stderr, "Error: Read error on file %s\n", file_from);
		exit(98);
	}
	if (close(fd_from) == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 97 on invalid argument count,
 *         98 on read error, 99 on write error,
 *         100 on close error.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp(argv[1], argv[2]);
	return (0);
}

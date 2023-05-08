#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: The name of the file to be read
 * @letters: The number of letters it should read and print
 *
 * Return: actual number of letters it could read and print, or 0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r;
	ssize_t w;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	r = read(fd, buf, letters);
	if (r == -1)
		return (0);
	w = write(STDOUT_FILENO, buf, r);
	if (w == -1 || w != r)
		return (0);
	free(buf);
	close(fd);
	return (w);
}

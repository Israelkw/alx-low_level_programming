#include "main.h"
#include <stdio.h>
#include <errno.h>

#define BUFSIZE 1024

/*
 * read_textfile - Reads text file and prints it to the POSIX standard output
 * @filename: The name of the file to be read
 * @letters: The number of letters it should read and print
 *
 * Return: actual number of letters it could read and print, or 0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char buf[BUFSIZE];
	ssize_t fd;
	ssize_t r;
	ssize_t w;
	size_t total;

	if (filename == NULL || letters == 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		perror("open");
		return (0);
	}
	total = 0;
	while (total < letters && (r = read(fd, buf, BUFSIZE)) > 0)
	{
		w = write(STDOUT_FILENO, buf, r);
		if (w == -1)
		{
			perror("write");
			close(fd);
			return (0);
		}
		total += w;
	}
	if (r == -1)
	{
		perror("read");
		close(fd);
		return (0);
	}
	close(fd);
	return (total);
}

#include "main.h"

/**
 * create_file - Creates a file
 * @filename: The name of the file to create
 * @text_content: The NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w;
	size_t len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (len = 0; text_content[len] != '\0'; len++)
		;
	w = write(fd, text_content, len);
	if (w == -1)
		return (-1);
	close(fd);

	return (1);
}

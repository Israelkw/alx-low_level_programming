#include "main.h"

/**
 * read_textfile - Reads text file and prints it to the POSIX standard output
 * @filename: The name of the file to be read
 * @letters: The number of letters it should read and print
 *
 * Description: This function opens a file in read mode, allocates memory for
 * a buffer, reads the file content into the buffer, writes the buffer content
 * to the POSIX standard output, frees the buffer, and closes the file.
 * Return: actual number of letters it could read and print, or 0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file; /* file pointer */
	char *buffer; /* buffer to store the file content */
	size_t nread; /* number of bytes read */
	ssize_t nwrite; /* number of bytes written */

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");

	if (file == NULL)
		return (0);

	buffer = malloc(letters);

	if (buffer == NULL)
		return (0);

	nread = fread(buffer, 1, letters, file);

	fclose(file);

	if (nread == 0)
		return (0);

	nwrite = write(1, buffer, nread);

	free(buffer);

	if (nwrite != nread)
		return (0);

	return (nwrite);
}

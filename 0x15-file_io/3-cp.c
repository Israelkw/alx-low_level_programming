#include "main.h"

/**
 * cp - copies the content of one file to another file
 * @file_from: the source file name
 * @file_to: the destination file name
 * Return: void
 */
void cp(char *file_from, char *file_to)
{
	FILE *f1, *f2; /* file pointers */
	int c; /* character buffer */

	f1 = fopen(file_from, "r"); /* open file_from for reading */
	if (f1 == NULL) /* check if file_from exists and can be read */
	{
		perror("Error: Can't read from file"); /* print error message */
		exit(98); /* exit with code 98 */
	}
	f2 = fopen(file_to, "w"); /* open file_to for writing */
	if (f2 == NULL) /* check if file_to can be created or written */
	{
		perror("Error: Can't write to file"); /* print error message */
		exit(99); /* exit with code 99 */
	}
	chmod(file_to, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	/* set permission to rw-rw-r-- */
	while ((c = fgetc(f1)) != EOF) /* read file_from until end of file */
	{
		fputc(c, f2); /* write character to file_to */
	}
	if (fclose(f1) == EOF) /* close file_from and check for error */
	{
		perror("Error: Can't close fd"); /* print error message */
		exit(100); /* exit with code 100 */
	}
	if (fclose(f2) == EOF) /* close file_to and check for error */
	{
		perror("Error: Can't close fd"); /* print error message */
		exit(100); /* exit with code 100 */
	}
}

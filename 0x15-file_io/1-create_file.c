#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_file - Creates a file and writes text into it
 * @filename: The name of the file to create
 * @text_content: The NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	FILE *file; /* file pointer */
	int nwrite; /* number of bytes written */

	/* check if filename is NULL */
	if (filename == NULL)
		return (-1);
	/* open the file in write mode */
	file = fopen(filename, "w");

	/* check if the file can not be created or written */
	if (file == NULL)
		return (-1);

	/* set the file permissions to rw------- */
	chmod(filename, 0600);

	/* check if text_content is NULL */
	if (text_content == NULL)
	{
		/* create an empty file */
		fclose(file);
		return (1);
	}

	/* write text_content to the file */
	nwrite = fprintf(file, "%s", text_content);

	/* close the file */
	fclose(file);

	/* check if write failed or did not write expected amount of bytes */
	if (nwrite < 0 || nwrite != strlen(text_content))
		return (-1);

	/* return 1 on success */
	return (1);
}

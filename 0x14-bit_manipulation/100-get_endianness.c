#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int x = 1; /* declare an int variable and assign it 1 */
	char *y = (char *)&x; /* declare a char pointer & point address of x */

	if (*y == 1) /* dereference y and check if it is 1 */
		return (1); /* little endian */
	else
		return (0); /* big endian */
}

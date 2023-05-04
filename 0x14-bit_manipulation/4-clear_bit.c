#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to an unsigned long int
 * @index: unsigned int
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 31) /* check if index is valid */
		return (-1);

	mask = 1 << index; /* create a mask with a 1 at index */
	mask = ~mask; /* invert the mask to create a 0 at index */
	*n = *n & mask; /* clear the bit at index */
	return (1);
}

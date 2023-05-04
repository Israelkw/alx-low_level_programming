#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long int
 * @index: unsigned int
 * Return: the value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 31) /* check if index is valid */
		return (-1);

	n >>= index; /* right shift n by index */
	return (n & 1); /* return the value of the least significant bit */
}

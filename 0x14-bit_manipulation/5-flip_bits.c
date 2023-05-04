#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: the number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m; /* find the bits that are different */
	unsigned int count = 0; /* initialize a counter */

	while (diff > 0) /* loop until diff becomes zero */
	{
		count += diff & 1; /* incr-nt count if sig-nt bit is 1 */
		diff >>= 1; /* right shift diff by 1 */
	}

	return (count); /* return the count */
}

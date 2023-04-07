#include "main.h"

/**
 * swap_int - changes values of 2 intigers
 * @a: first int
 * @b: seond int
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}

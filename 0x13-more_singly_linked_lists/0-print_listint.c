#include "list.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints
 * @h: points
 * Return: count
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}

	return (count);
}
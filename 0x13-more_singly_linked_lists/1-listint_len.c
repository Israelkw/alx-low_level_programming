#include "lists.h"

/**
 * listint_len - returns the number of elements
 * @h: points
 * Return: count
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}

	return (count);
}

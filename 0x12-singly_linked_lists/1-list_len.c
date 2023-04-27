#include <stdio.h>
#include "lists.h"

/**
 * list_len - prints all the elements of a list_t list
 * @h: string - pointer
 *
 * Return: count
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}

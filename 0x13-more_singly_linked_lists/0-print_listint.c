#include "lists.h"

/**
 * print_listint_len - prints all the elements of a listint_t list.
 * @h: pointer to head of linked list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}

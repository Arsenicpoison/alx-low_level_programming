#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print elements of a linked list
 * @h: linked list of type listint_t  printed *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}

#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to linked list listint_t.
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nombre_nodes = 0;

	for (nombre_nodes = 0; h != NULL; nombre_nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nombre_nodes);
}

#include "lists.h"

/**
 * listint_len - return the number of elements in a linked listint_t list.
 * @h: Pointer to listint_t.
 * Return: number of elements in a linked list_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t nombre_nodes = 0;

	for (nombre_nodes = 0; h != NULL; nombre_nodes++)
		h = h->next;

	return (nombre_nodes);
}

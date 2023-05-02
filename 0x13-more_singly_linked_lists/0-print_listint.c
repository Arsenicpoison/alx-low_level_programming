#include "lists.h"

/**
 * print_listint - print elements of a linked list
 * @h: linked list of type listint_t  printed *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nod = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nod++;
		h = h->next;
	}

	return (nod);
}

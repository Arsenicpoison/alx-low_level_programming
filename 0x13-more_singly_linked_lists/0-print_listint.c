#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * print_listint - print elements of a linked list
 * @h: linked list of type listint_t  printed *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nod;

	for (nod = 0; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		nod++;
	}
	return (nod);
}

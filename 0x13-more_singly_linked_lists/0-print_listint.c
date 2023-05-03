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
	unsigned int b = 0;
	const listint_t	 *new_node = h;

	for (; new_node; new_node = new_node->next)
	{
		printf("%d\n", new_node->n);
		b++;
	}
	return (b);
}

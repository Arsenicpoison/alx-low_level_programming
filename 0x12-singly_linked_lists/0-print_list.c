#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to a list_t list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 1;
	list_t show;

	if (h == NULL)
		return (0);
	if (h->str == NULL)
	{
		show.str = "(nil)";
		show.len = 0;
	}
	else
	{
		show.str = h->str;
		show.len = h->len;
	}
	printf("[%d] %s\n", show.len, show.str);
		i += print_list(h->next);
	if (h->next == NULL)
		return (1);
return (i);
}

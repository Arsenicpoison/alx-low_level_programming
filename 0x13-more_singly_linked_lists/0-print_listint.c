#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to linked list listint_t.
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
const listint_t *click = h;
size_t i = 0;

while (click != NULL)
{
printf("%d\n", click->n);
i += 1;
click = click->next;
}
return (i);
}

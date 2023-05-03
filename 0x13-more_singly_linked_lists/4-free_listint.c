#include "lists.h"

/**
 * free_listint - free a listint_t list.
 * @head: Head of linked listint_t list.
 */
void free_listint(listint_t *head)
{
	listint_t *tem;

	while (head)
	{
		tem = head->next;
		free(head);
		head = tem;
	}
}

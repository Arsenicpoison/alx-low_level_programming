#include "lists.h"

/**
 * free_listint2 - free a listint_t list.
 * @head: Pointer to pointer head of linked listint_t list.
 */
void free_listint2(listint_t **head)
{
	listint_t *tem;

	if (head == NULL)
		return;

	while (*head)
	{
		tem = (*head)->next;
		free(*head);
		*head = tem;
	}

	*head = NULL;
}

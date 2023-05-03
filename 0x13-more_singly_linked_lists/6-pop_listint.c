#include "lists.h"

/**
 * pop_listint - delete the head node of a listint_t linked list.
 * @head: Pointer to pointer head of linked list.
 * Return: The head nodes data.
 */
int pop_listint(listint_t **head)
{
	listint_t *tem;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	tem = (*head)->next;
	free(*head);
	*head = tem;

	return (number);
}

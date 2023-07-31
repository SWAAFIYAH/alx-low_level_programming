#include "lists.h"
/**
 * free_listint2 - frees linked list
 * @head: head of linked list
 * sets head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *m;

	if (head == NULL)
		return;
	while (*head)
	{
		m = (*head)->next;
		free(*head);
		*head = m;
	}
	head = NULL;
}

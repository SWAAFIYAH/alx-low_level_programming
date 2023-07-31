#include "lists.h"
/**
 * free_listint - frees linked list
 * @head: head of linked list
 */
void free_listint(listint_t *head)
{
	listint_t *m;

	while (head)
	{
		m = head->next;
		free(head);
		head = m;
	}
}

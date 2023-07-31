#include "lists.h"
/**
 * pop_listint - deletes head node of linked list
 * @head: head
 * Return: the deleted node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *m;
	int x;

	if (!head || !*head)
		return (0);
	x = (*head)->n;
	m = (*head)->next;
	free(*head);
	*head = m;
	return (x);
}

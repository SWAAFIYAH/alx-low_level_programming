#include "lists.h"
/**
 * reverse_listint - reverses linked list
 * @head : head
 * Return: pointer to first node in new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *m = NULL;
	listint_t *x = NULL;

	while (*head)
	{
		x = (*head)->next;
		(*head)->next = m;
		m = *head;
		*head = x;
	}
	*head = m;
	return (*head);
}

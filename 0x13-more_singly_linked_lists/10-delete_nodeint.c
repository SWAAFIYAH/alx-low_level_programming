#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node
 * @head: head
 * @index: index
 * Return: -1 if fail
 * 1 if success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *m = *head;
	listint_t *n = NULL;
	unsigned int o = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(m);
		return (1);
	}
	while (o < index - 1)
	{
		if (!m || !(m->next))
			return (-1);
		m = m->next;
		o++;
	}
	n = m->next;
	m->next = n->next;
	free(n);
	return (1);
}

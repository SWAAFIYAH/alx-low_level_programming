#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at a certain index
 * @head: head
 * @index: index
 * Return: 1 for success 0 for
 * failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *w;
	dlistint_t *x;
	unsigned int z;

	w = *head;
	if (w != NULL)
		while (w->prev != NULL)
			w = w->prev;
	z = 0;
	while (w != NULL)
	{
		if (z == index)
		{
			if (z == 0)
			{
				*head = w->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				x->next = w->next;
				if (w->next != NULL)
					w->next->prev = x;
			}
			free(w);
			return (1);
		}
		x = w;
		w = w->next;
		z++;
	}
	return (-1);
}

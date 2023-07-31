#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new node at certain position
 * @head: head
 * @idx: index
 * @n: data to insert
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *w;
	unsigned int x;
	listint_t *t = *head;

	w = malloc(sizeof(listint_t));
	if (!w || head)
		return (NULL);
	w->n = n;
	w->next = NULL;
	if (idx == 0)
	{
		w->next = *head;
		*head = w;
		return (w);
	}
	for (x = 0; t && x < idx; x++)
	{
		if (x == idx - 1)
		{
			w->next = t->next;
			t->next = w;
			return (w);
		}
		else
			t = t->next;
	}
	return (NULL);
}


#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - return no. of elements in a linked list
 * @h: head of list
 * Return: no. of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int m = 0;

	if (h == NULL)
		return (m);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		m++;
		h = h->next;
	}
	return (m);
}

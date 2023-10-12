#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - prints all elements of a list
 * @h: head for the list
 * Return: no. of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int x = 0;

	if (h == NULL)
		return (x);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		x++;
		h = h->next;
	}
	return (x);
}


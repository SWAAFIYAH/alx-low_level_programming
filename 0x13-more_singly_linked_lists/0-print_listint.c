#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints elements of listint_t
 * @h: head of list_t list
 * Return: no. of nodes in the list_t
 */
size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (x);
}

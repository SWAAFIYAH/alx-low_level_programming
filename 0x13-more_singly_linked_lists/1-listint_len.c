#include <stdio.h>
#include "lists.h"
/**
 * listint_len - returns no. of elements of linked list
 * @h: pointer to head of linked list
 * Return: no. of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t y = 0;

	while (h)
	{
		y++;
		h = h->next;
	}
	return (y);
}

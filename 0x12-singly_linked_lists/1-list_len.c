#include "lists.h"
#include <stdlib.h>

/**
 * list_len - returns  number of elements in linked list
 * @h: pointer to list_t list
 * Return: no. of elements to print
 */
size_t list_len(const list_t *h)
{
	size_t t = 0;

	while (h)
	{
		t++;
		h = h->next;
	}
	return (t);
}


#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all elements of linked list
 * @h: pointer to the list to print
 * Return: no. of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		if (!h->str)
			printf("|0| (nil)\n");
		else
			printf("|%u| %s\n", h->len, h->str);
		h = h->next;
		x++;
	}
	return (x);
}
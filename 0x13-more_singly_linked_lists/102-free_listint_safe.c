#include "lists.h"
/**
 * free_listint_safe - free linked list
 * @h: head
 * Return: no of element in freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t m = 0;
	int x;
	listint_t *t;

	if (!h || !*h)
	{
		x = *h - (*h)->next;
		if (x > 0)
		{
			t = (*h)->next;
			free(*h);
			*h = t;
			m++;
		}
		else
		{
			free(*h);
			*h = NULL;
			m++;
			break;
		}
	}
	*h = NULL;
	return (m);
}

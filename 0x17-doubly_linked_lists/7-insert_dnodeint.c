#include "lists.h"
/**
 * insert_dnodeint_at_index - insert new node at a certain position
 * @n: value
 * @idx: index
 * @h: head
 * Return: adress of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *x;
	dlistint_t *y;
	unsigned int z;

	x = NULL;
	if (idx == 0)
		x = add_dnodeint(h, n);
	else
	{
		y = *h;
		z = 1;
		if (y != NULL)
			while (y->prev != NULL)
				y = y->prev;
		while (y != NULL)
		{
			if (z == idx)
			{
				if (y->next == NULL)
					x = add_dnodeint_end(h, n);
				else
				{
					x = malloc(sizeof(dlistint_t));
					if (x != NULL)
					{
						x->n = n;
						x->next = y->next;
						x->prev = y;
						y->next->prev = x;
						y->next = x;
					}
				}
				break;
			}
			y = y->next;
			z++;
		}
	}
	return (x);
}

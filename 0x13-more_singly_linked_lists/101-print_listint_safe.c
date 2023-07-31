#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *h);
/**
 * looped_listint_len - counts number
 * @h: head
 * Return: 0 if list not looped
 * no. of nodes
 */
size_t looped_listint_len(const listint_t *h)
{
	const listint_t *m, n;
	size_t k = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	m = h->next;
	n = (h->next)->next;
	while (n)
	{
		if (m == n)
		{
			m = h;
			while (m != n)
			{
				k++;
				m = m->next;
				n = n->next;
			}
			m = m->next;
			while (m != n)
			{
				k++;
				m = m->next;
			}
			return (k);
		}
		m = m->next;
		n = (n->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - prints linked list
 * @head: head
 * Return: no. of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t k, x = 0;

	k = looped_listint_len(head);
	if (k == 0)
	{
		for (; head != NULL; k++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (x = 0; x < k; x++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("->[%p] %d\n", (void *)head, head->n);
	}
	return (k);
}

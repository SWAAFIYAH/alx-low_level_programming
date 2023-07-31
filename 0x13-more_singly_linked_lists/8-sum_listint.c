#include "lists.h"
/**
 * sum_listint - gets sum of linked list data
 * @head: head of linked list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *t = head;

	while (t)
	{
		s += t->n;
		t = t->next;
	}
	return (s);
}

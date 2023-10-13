#include "lists.h"
/**
 * sum_dlistint - adds all data
 * @head: head of node
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			add += head->n;
			head = head->next;
		}
	}
	return (add);
}

#include "lists.h"
/**
 * get_dnodeint_at_index - gets nth node of list
 * @head: head of list
 * @index: index
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);
	temp = head;
	while (temp)
	{
		if (index == x)
			return (temp);
		x++;
		temp = temp->next;
	}
	return (NULL);
}


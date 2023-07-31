#include "lists.h"
/**
 * get_nodeint_at_index - gets nth index node
 * @head: head node
 * @index: index
 * Return: the pointer to node looked for
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int z = 0;
	listint_t *x = head;

	while (x && z < index)
	{
		x = x->next;
		z++;
	}
	return (x ? x:NULL);
}

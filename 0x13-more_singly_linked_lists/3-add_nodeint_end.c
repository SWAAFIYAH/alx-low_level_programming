#include "lists.h"
/**
 * add_nodeint_end - adds node at end of linked list
 * @head: head of linked list
 * @n: int
 * Return: NULL if function fails
 * or adress of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *x, *y;

	x = malloc(sizeof(listint_t));
	if (x == NULL)
		return (NULL);
	x->n = n;
	x->next = NULL;
	if (*head == NULL)
		*head = x;
	else
	{
		y = *head;
		while (y->next != NULL)
			y = y->next;
		y->next = x;
	}
	return (*head);
}

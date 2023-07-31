#include "lists.h"
/**
 * add_nodeint - add node at the beginning linked list
 * @head: head of linked list
 * @n: int
 * Return: adress of new element and NULL if
 * if fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *x;

	x = malloc(sizeof(listint_t));
	if (x == NULL)
		return (NULL);
	x->n = n;
	x->next = *head;
	*head = x;
	return (x);
}

#include "lists.h"
/**
 * add_dnodeint - adds node at beginning of a list
 * @n: value
 * @head: head of list
 * Return: adress of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *home;
	dlistint_t *x;

	home = malloc(sizeof(dlistint_t));
	if (home == NULL)
		return (NULL);
	home->n = n;
	home->prev = NULL;
	x = *head;
	if (x != NULL)
	{
		while (x->prev != NULL)
			x = x->prev;
	}
	home->next = x;
	if (x != NULL)
		x->prev = home;
	*head = home;
	return (home);
}

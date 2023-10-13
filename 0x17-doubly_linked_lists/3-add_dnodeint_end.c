#include "lists.h"
/**
 * add_dnodeint_end - adds node to end of lis
 * @head: head of list
 * @n: value
 * Return: adress of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *c;
	dlistint_t *home;

	home = malloc(sizeof(dlistint_t));
	if (home == NULL)
		return (NULL);
	home->n = n;
	home->next = NULL;

	c = *head;
	if (c != NULL)
	{
		while (c->next != NULL)
			c = c->next;
		c->next = home;
	}
	else
	{
		*head = home;
	}
	home->prev = c;
	return (home);
}

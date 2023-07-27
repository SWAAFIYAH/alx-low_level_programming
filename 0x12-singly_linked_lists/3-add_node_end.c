#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * *add_node_end - adds a new node at the end of linked list
 * @head: double pointer
 * @str: string
 * Return: the adress of new element
 * or NULL iof it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int l = 0;

	while (str[l])
		l++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = l;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (new);
}


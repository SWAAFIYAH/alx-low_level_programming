#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds new node at beginning of  linked list
 * @head: double pointer to the list_t
 * @str: new string to be added in the node
 * Return: the address of the new element,
 * or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *x;
	unsigned int l = 0;

	while (str[l])
		l++;
	x = malloc(sizeof(list_t));
	if (!x)
		return (NULL);
	x->str = strdup(str);
	x->len = l;
	x->next = (*head);
	(*head) = x;
	return (*head);
}

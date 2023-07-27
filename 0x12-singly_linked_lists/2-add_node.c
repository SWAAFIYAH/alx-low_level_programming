#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - add a new node at the beginning oflinked list
 * @head: first node
 * @str: string to add
 * Return: adress of the new list
 * and NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int l = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	while (str[l])
		l++;
	temp->len = l;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}

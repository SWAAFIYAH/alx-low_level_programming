#include "hash_tables.h"

/**
 * hash_table_set - Add or update element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *n;
	char *value_copy;
	unsigned long int index, x;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (x = index; ht->array[x]; x++)
	{
		if (strcmp(ht->array[x]->key, key) == 0)
		{
			free(ht->array[x]->value);
			ht->array[x]->value = value_copy;
			return (1);
		}
	}

	n = malloc(sizeof(hash_node_t));
	if (n == NULL)
	{
		free(value_copy);
		return (0);
	}
	n->key = strdup(key);
	if (new->key == NULL)
	{
		free(n);
		return (0);
	}
	n->value = value_copy;
	n->next = ht->array[index];
	ht->array[index] = n;

	return (1);
}

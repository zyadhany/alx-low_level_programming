#include "hash_tables.h"

/**
 * hash_table_set - add element to hash table.
 * @ht: hast table.
 * @key: key to add.
 * @value: value of key.
 *
 * Return: 1, at failt 0.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, size, i;
	hash_node_t *tmp;


	if (!ht || !key || !value)
		return (0);

	index = key_index(key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			strcpy(&tmp->value, value);
			if (!tmp->value)
				return (0);
			return (1);
		}
		tmp = tmp->next;
	}
	tmp = malloc(sizeof(hash_node_t));
	if (!tmp)
		return (0);
	strcpy(tmp->key, key);
	if (!tmp->key)
	{
		free(tmp);
		return (0);
	}
	strcpy(tmp->value, value);
	if (!tmp->value)
	{
		free(tmp->key);
		free(tmp);
		return (0);
	}
	tmp->next = ht->array[index];
	ht->array[index] = tmp;
	return (1);
}

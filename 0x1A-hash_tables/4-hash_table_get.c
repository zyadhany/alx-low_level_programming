#include "hash_tables.h"

/**
 * hash_table_get - get value of key.
 * @ht: hast table.
 * @key: key to get.
 *
 * Return: value of key, Null if not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;


	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(key, tmp->key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}

	return (NULL);
}

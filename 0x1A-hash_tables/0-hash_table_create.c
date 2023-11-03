#include "hash_tables.h"

/**
 * hash_table_create - creat hash table.
 * @size: The size of the array.
 *
 * Return: pointer to hash.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	ht = malloc(sizeof(hash_node_t));

	if (!ht)
		return (NULL);

	ht->size = size;

	ht->array = malloc(sizeof(hash_node_t *) * size);

	if (!ht->array)
		return (NULL);

	return (ht);
}

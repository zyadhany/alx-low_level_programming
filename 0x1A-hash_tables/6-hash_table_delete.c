#include "hash_tables.h"

/**
 * free_list - delete hash node.
 * @node: give node.
 *
 * Return: Nothing.
 */
void free_list(hash_node_t *node)
{
	if (!node)
		return;

	free(node->key);
	free(node->value);
	free_list(node->next);
	free(node);
}

/**
 * hash_table_delete - delete hash table.
 * @ht: hash table.
 *
 * Return: Nothing.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
		free(ht->array[i]);
	free(ht->array);
	free(ht);
}

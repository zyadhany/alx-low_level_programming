#include "hash_tables.h"

/**
 * shash_table_create - creat hash table.
 * @size: The size of the array.
 *
 * Return: pointer to hash.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *ht;

	ht = malloc(sizeof(shash_table_t));

	if (!ht)
		return (NULL);

	ht->size = size;

	ht->array = malloc(sizeof(shash_node_t *) * size);

	if (!ht->array)
		return (NULL);

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	ht->shead = ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - add element to hash table.
 * @ht: hast table.
 * @key: key to add.
 * @value: value of key.
 *
 * Return: 1, at failt 0.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *tmp, *at;

	if (!ht || !key || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (!tmp->value)
				return (0);
			return (1);
		}
		tmp = tmp->next;
	}
	tmp = malloc(sizeof(shash_node_t));
	if (!tmp)
		return (0);
	tmp->key = strdup(key);
	if (!tmp->key)
	{
		free(tmp);
		return (0);
	}
	tmp->value = strdup(value);
	if (!tmp->value)
	{
		free(tmp->key);
		free(tmp);
		return (0);
	}
	tmp->next = ht->array[index];
	ht->array[index] = tmp;

	if (!ht->shead)
	{
		tmp->snext = tmp->sprev = NULL;
		ht->shead = ht->stail = tmp;
		return (1);
	}

	at = ht->shead;

	while (at->snext && strcmp(at->snext->key, key) < 0)
		at = at->snext;
	tmp->snext = at->snext;
	tmp->sprev = at;
	at->snext = tmp;

	if (tmp->snext)
		tmp->snext->sprev = tmp;
	else
		ht->stail = tmp;

	return (1);
}

/**
 * shash_table_get - get value of key.
 * @ht: hast table.
 * @key: key to get.
 *
 * Return: value of key, Null if not found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *tmp;

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

/**
 * shash_table_print - print hash table.
 * @ht: hash table.
 *
 * Return: Nothing.
 */
void shash_table_print(const shash_table_t *ht)
{
	int isit = 0;
	shash_node_t *tmp;

	if (!ht)
		return;


	printf("{");


	tmp = ht->shead;
	while (tmp)
	{
		if (isit)
			printf(", ");
		isit = 1;
		printf("\'%s\': \'%s\'", tmp->key, tmp->value);
		tmp = tmp->snext;
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - print hash table in reverse order.
 * @ht: hash table.
 *
 * Return: Nothing.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	int isit = 0;
	shash_node_t *tmp;

	if (!ht)
		return;

	printf("{");

	tmp = ht->stail;
	while (tmp)
	{
		if (isit)
			printf(", ");
		isit = 1;
		printf("\'%s\': \'%s\'", tmp->key, tmp->value);
		tmp = tmp->sprev;
	}

	printf("}\n");
}

/**
 * free_slist - delete hash node.
 * @node: give node.
 *
 * Return: Nothing.
 */
void free_slist(shash_node_t *node)
{
	if (!node)
		return;

	free(node->key);
	free(node->value);
	free_slist(node->snext);
	free(node);
}

/**
 * shash_table_delete - delete hash table.
 * @ht: hash table.
 *
 * Return: Nothing.
 */
void shash_table_delete(shash_table_t *ht)
{
	if (!ht)
		return;

	free_slist(ht->shead);
	free(ht->array);
	free(ht);
}
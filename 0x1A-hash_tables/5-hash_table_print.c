#include "hash_tables.h"

/**
 * hash_table_print - print hash table.
 * @ht: hash table.
 *
 * Return: Nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, isit = 0;
	hash_node_t *tmp;


	if (!ht)
		return;

    printf("{");
    for (i = 0; i < ht->size; i++){
	    tmp = ht->array[i];
        while (tmp)
        {
            if (isit)
                printf(", ");
            isit = 1;
            printf("\'%s\': \'%s\'", tmp->key, tmp->value);
            tmp = tmp->next;
        }
    }
    printf("}\n");
}

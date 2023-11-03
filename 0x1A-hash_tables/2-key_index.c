#include "hash_tables.h"

/**
 * key_index - hash string.
 * @key: given key.
 * @size: size of array.
 * Return: idex at array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

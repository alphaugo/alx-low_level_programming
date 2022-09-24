#include "hash.h"
/**
 * hash_table_create - fumction
 * @size: ...
 * Return: pointer
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	table->size = size;
	table->array = calloc (table->size, sizeof(hash_node_t));

	for (int i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return table;
}

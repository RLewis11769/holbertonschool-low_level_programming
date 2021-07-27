#include "hash_tables.h"

/**
 * hash_table_create - Creates hash table
 * @size: size of array to allocate
 * Return: Pointer to new hash table or NULL on error
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;
	unsigned long int idx;

	/* Allocates memory for hash table - allocate table itself */
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	/* Sets values of hash table struct */
	ht->size = size;
	/* Allocates memory for nodes - allocate all entries in table */
	/* Each node has pointer to struct at each position of array */
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	/* Initialize each position in array to NULL */
	while (idx < size)
		ht->array[idx++] = NULL;

	return (ht);
}

#include "hash_tables.h"

/**
 * hash_table_get - Gets value from hash table when given key
 * @ht: hash table when key/value pair is stored
 * @key: key to search for
 * Return: value associated with key or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int pos;
	hash_node_t *match = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	/* Get hash value/index for key/position in array */
	pos = key_index((const unsigned char *)key, ht->size);
	match = ht->array[pos];

	/* Loop through linked list at position until find or end of list */
	while (match != NULL && match->key != NULL && strcmp(key, match->key) != 0)
		match = match->next;

	/* If not found or reach end of list, return NULL */
	if (match == NULL || match->key == NULL || strcmp(key, match->key) != 0)
		return (NULL);
	/* Else strcmp(key, match->key) == 0 */
	return (match->value);
}

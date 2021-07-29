#include "hash_tables.h"

/**
 * hash_table_set - Add element/node to hash table
 * @ht: hash table to add values to
 * @key: key in hash table
 * @value: value associated with key
 * Return: 1 if successful, 0 if failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	hash_node_t *new;

	/* Fails if passed bad data */
	if (key == NULL || value == NULL || ht == NULL)
		return (0);
	if (key[0] == '\0')
		return (0);

	/* Allocate memory for new node */
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	/* Duplicate key/value strings bc don't exist outside this function */
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}

	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (0);
	}

	/* Find index of key */
	idx = key_index((const unsigned char *)key, ht->size);

	/* Add new node to hash table */
	new->next = ht->array[idx];
	ht->array[idx] = new;

	return (1);
}

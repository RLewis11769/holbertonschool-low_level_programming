#include "hash_tables.h"

/**
 * create_newpair - Creates new key-value pair
 * @key: Key to new pair
 * @value: Value to new pair
 * Return: New pair
 */

hash_node_t *create_newpair(const char *key, const char *value)
{
	hash_node_t *new;

	/* Allocate memory for new node */
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (NULL);

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

	/* Set pointer to next node to NULL */
	new->next = NULL;
	return (new);
}

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
	hash_node_t *new = NULL, *next = NULL, *last = NULL;

	if (key == NULL || value == NULL || ht == NULL || key[0] == '\0')
		return (0);

	idx = key_index((const unsigned char *)key, ht->size); /* Find index of key */
	next = ht->array[idx]; /* Set pointer to first node in chain */

	/* If key already exists, overwrite value */
	if (next && next->key && strcmp(key, next->key) == 0)
	{
		free(next->value);
		next->value = strdup(value);
	}
	else /* Else create new node */
	{
		if (next == ht->array[idx])
		{
			new = create_newpair(key, value);
			if (new == NULL)
				return (0);
			/* Set pointer to new pair */
			if (next == ht->array[idx])
			{
				new->next = next;
				ht->array[idx] = new;
			}
			/* If chain is not empty, set pointer to new pair */
			else if (next == NULL)
				last->next = new;
			/* If chain is empty, set pointer to new pair */
			else
			{
				new->next = next;
				last->next = new;
			}
		}
	}
	return (1);
}

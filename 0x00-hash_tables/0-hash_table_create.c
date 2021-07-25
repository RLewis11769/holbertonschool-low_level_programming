#include "hash_tables.h"

/**
 * hash_table_create - Creates hash table
 * @size: size of array to allocate
 * Return: Pointer to new hash table or NULL on error
 */

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *ht = NULL;
    unsigned long int i;

    /* Allocate memory for hash table */
    ht = malloc(sizeof(hash_table_t));
    if (ht == NULL)
        return (NULL);

    /* Set value of structs */
    ht->size = size;
    ht->array = malloc(sizeof(hash_node_t*) * size);
    if (ht->array == NULL) {
        free(ht);
        return (NULL);
    }

    /* Initialize array to NULL at each index */
    while (i < size)
        ht->array[i++] = NULL;

    return (ht);
}

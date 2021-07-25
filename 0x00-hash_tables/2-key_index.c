#include "hash_tables.h"

/**
 * hash_table_create - Creates hash table
 * @size: size of array to allocate
 * Return: Pointer to new hash table or NULL on error
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    return (hash_djb2(key) % size);
}

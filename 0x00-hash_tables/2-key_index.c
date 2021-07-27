#include "hash_tables.h"

/**
 * key_index - Finds index of specified key
 * @key: key string
 * @size: size of table
 * Return: Index where key/value will be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/* This sends the key to the hashing function */
	/* Modulo to return position in array */
	return (hash_djb2(key) % size);
}

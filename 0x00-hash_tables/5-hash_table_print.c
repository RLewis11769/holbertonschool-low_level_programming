#include "hash_tables.h"

/**
 * hash_table_print - Prints assigned keys/values in order they appear
 * @ht: Hash table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int x;
	int flag = 0;
	hash_node_t *node;

	putchar('{');
	/* Loops through all nodes in hash table */
	for (x = 0; x < ht->size; x++)
	{
		/* For each node where there is data */
		node = ht->array[x];
		while (node != NULL)
		{
			/* Prints flag only after first node with data in it (and not after last) */
			if (flag)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			/* Setup for next print/loop */
			flag = 1;
			node = node->next;
		}
	}
	printf("}\n");
}

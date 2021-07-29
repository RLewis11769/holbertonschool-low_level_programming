#include "hash_tables.h"

/**
 * hash_table_delete - Deletes entire hash table
 * @ht: hash table to delete
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int x;
	hash_node_t *temp, *temp2;

	if (ht == NULL)
		return;

	for (x = 0; x < ht->size; x++)
	{
		/* temp points to the node I'm freeing */
		temp = ht->array[x];
		while (temp != NULL)
		{
		/* temp2 points to the next node I'm deleting */
		temp2 = temp->next;
		free(temp->key);
		free(temp->value);
		free(temp);
		/* After freeing this node, still have track of next node */
		temp = temp2;
		}
	}
	/* After deleting all nodes, free the array */
	free(ht->array);
	free(ht);
}

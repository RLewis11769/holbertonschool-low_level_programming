#include "hash_tables.h"
#include <string.h>

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int idx;
    hash_node_t *out;

    if (key == NULL || value == NULL || ht == NULL) 
       return (0);

    if (key[0] == '\0')
        return (0);

    out = malloc(sizeof(hash_node_t));
    if (out == NULL)
        return (0);

    out->key = strdup(key);
    if (out->key == NULL)
    {
        free(out);
        return (0);
    }
    out->value = strdup(value);

    if (out->value == NULL)
    {
        free(out->key);
        free(out);
        return (0);
    }
    
    idx = key_index((const unsigned char *)key, ht->size);

    out->next = ht->array[idx];
    ht->array[idx] = out;

    printf("%s => %lu\n", key, idx);
    return (1);
}

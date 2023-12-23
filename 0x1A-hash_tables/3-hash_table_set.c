#include "hash_tables.h"
/**
 * hash_table_set - function to insert nodes
 * Description: function to put nodes at index
 * @ht: the hash table to put nodes into
 * @key: the key by which the index is obtained
 * @value: the data associated with key
 * Return: (int)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new_node;
unsigned long int index;
new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL || key == NULL || ht == NULL)
{
return (0);
}
index = key_index((const unsigned char *)key, ht->size);
new_node->key = (char *) key;
new_node->value = (char *) value;
if (ht->array[index] == NULL)
{
new_node->next = NULL;
ht->array[index] = new_node;
}
else
{
new_node->next = ht->array[index];
ht->array[index] = new_node;
}
return (1);
}

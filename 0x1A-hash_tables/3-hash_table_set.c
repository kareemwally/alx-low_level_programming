#include "hash_tables.h"
#include <string.h>
/**
 * making_nodes - function to copy nodes
 * Description: that function creates nodes using strdup
 * @key: the key of value
 * @value: data to be inserted
 * Return: (pointer)
 */
hash_node_t *making_nodes(const char *key, const char *value)
{
hash_node_t *new_node;
new_node = malloc(sizeof(hash_node_t));
new_node->key = strdup(key);
if (new_node->key == NULL)
{
free(new_node);
return (NULL);
}
new_node->value = strdup(value);
if (new_node->value == NULL)
{
free(new_node->key);
free(new_node);
return (NULL);
}
new_node->next = NULL;
return (new_node);
}
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
hash_node_t *new_node, *tmp_node;
unsigned long int index;
char *tmp_value;
if (key == NULL || ht == NULL || ht->array == NULL
		|| ht->size == 0 || strlen(key) == 0 || value == NULL)
{
return (0);
}
index = key_index((const unsigned char *)key, ht->size);
tmp_node = ht->array[index];
while (tmp_node != NULL)
{
if (strcmp(key, tmp_node->key) == 0)
{
tmp_value = strdup(value);
if (tmp_value == NULL)
{
return (0);
}
free(tmp_node->value);
tmp_node->value = tmp_value;
return (1);
}
tmp_node = tmp_node->next;
}
new_node = making_nodes(key, value);
if (new_node == NULL)
	return (0);
new_node->next = ht->array[index];
ht->array[index] = new_node;
return (1);
}

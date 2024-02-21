#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_get - function to get value
 * Description: function to get value of key
 * @ht: the hash_table we working on
 * @key: the key by which we get index
 * Return: (string)
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
hash_node_t *tmp;
if (ht == NULL || ht->array == NULL || ht->size == 0
		|| strlen(key) == 0 || key == NULL)
{
return (NULL);
}
index = key_index((const unsigned char *)key, ht->size);
tmp = ht->array[index];
while (tmp != NULL)
{
if (strcmp(key, tmp->key) == 0)
	return (tmp->value);
tmp = tmp->next;
}
return (NULL);
}

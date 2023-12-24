#include "hash_tables.h"
/**
 * hash_table_delete - function to delete the ht
 * Description: that function frees the data and keys
 * @ht: the pointer to the hash table
 * Return: (void)
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int index;
hash_node_t *tmp;
if (ht == NULL || ht->array == NULL || ht->size == 0)
{
return;
}
for (index = 0; index < ht->size; index++)
{
while (ht->array[index] != NULL)
{
tmp = ht->array[index]->next;
free(ht->array[index]->key);
free(ht->array[index]->value);
free(ht->array[index]);
ht->array[index] = tmp;
}
}
free(ht->array);
free((void *)ht->size);
free(ht);
}

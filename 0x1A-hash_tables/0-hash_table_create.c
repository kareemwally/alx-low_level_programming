#include "hash_tables.h"
/**
 * hash_table_create - function
 * Description: that function creates the hash-table
 * @size: number of elements in the table
 * Return: (has_table_t) pointer to the f
 */
hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int i = 0;
hash_table_t *hash_table;
hash_table = malloc(sizeof(hash_table_t));
if (!hash_table)
{
return (NULL);
}
hash_table->size = size;
hash_table->array = malloc(sizeof(hash_node_t *) * size);
if (!hash_table->array)
{
free(hash_table);
return (NULL);
}
for (i = 0; i < size; i++)
{
hash_table->array[i] = NULL;
}
return (hash_table);
}

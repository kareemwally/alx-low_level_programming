#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_print - functio to print H_table
 * Description: that function to print nodes in hash_table
 * @ht: the hash_table to be print
 * Return: (void)
 */
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *res;
unsigned long int i;
int sign = 0;
if (ht == NULL || ht->array == NULL || ht->size == 0)
{
return;
}
printf("{");
for (i = 0; i < ht->size; i++)
{
res = ht->array[i];
while (res != NULL)
{
if (sign == 1)
{
printf(", ");
}
printf("\'%s\': \'%s\'", res->key, res->value);
sign = 1;
res = res->next;
}
}
printf("}\n");
}

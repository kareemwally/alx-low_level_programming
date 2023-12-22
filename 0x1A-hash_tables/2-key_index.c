#include "hash_tables.h"
/**
 * key_index - function to get the index
 * Description: function to get index at which value is stored
 * @size: array size
 * @key: the key from which we get the index
 * Return: (unsigned long int)
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}

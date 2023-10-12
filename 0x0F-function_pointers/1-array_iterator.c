#include"200~function_pointers.h"
/**
 *array_iterator-function
 *@array: array of element to be printed
 *@size:the size of the array
 *@action:pointer to a specific function
 *Return:(void)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;
if (array && action)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}

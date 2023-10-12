#include "function_pointers.h"
/**
 *int_index-function
 *description: this function tests all nums in array with different func
 *@array:the array to be checked
 *@size: the size of array
 *@cmp:pointer to the function
 *Return:(int)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i, res = -1;
if (size <= 0)
return (-1);
if (array && cmp)
{
for (i = 0; i < size; i++)
{
res = cmp(array[i]);
if (res != 0)
{
return (i);
}
}
}
return (res);
}

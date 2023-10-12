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
(void)i;
if (size <= 0)
return (res);
if (array && cmp)
{
for (i = 0; i < size; i++)
{
res = cmp(array[i]);
if (res)
{
return (i);
}
}
}
return (res);
}

#include "search_algos.h"
/**
 *linear_search - function
 *description: this function implements Linear search
 *@value: number to search for
 *@array: pointer to 1st element
 *@size: total number of array
 *Return: (int)
 */
int linear_search(int *array, size_t size, int value)
{
size_t i = 0;
if (array == NULL)
{
	return (-1);
}
for (i = 0; i < size; i++)
{
printf("Value checked array[%ld] = [%d]\n", i, *(array + i));
if (*(array + i) == value)
{
return ((int)i);
}
}
return (-1);
}

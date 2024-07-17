#include "search_algos.h"
#include <math.h>
/**
 *jump_search - function
 *description: this function implements jump search
 *@value: number to search for
 *@array: pointer to 1st element
 *@size: total number of array
 *Return: (int)
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start = 0, end = sqrt(size);

	if (!array)
		return (-1);
	while (array[end] < value && end < size)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		start = end;
		end += sqrt(size);
	}
	printf("Value checked array[%ld] = [%d]\n", start, array[start]);
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);
	while (start < size && start <= end)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		if (array[start] == value)
			return (start);
		start++;
	}
	return (-1);
}

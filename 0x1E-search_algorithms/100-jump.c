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
	int start = 0;
	size_t end = sqrt(size);

	while (array[end - 1] < value)
	{
		if (size - 1 == end && array[end - 1] != value)
			return (-1);
		start = end;
		end = end + sqrt(size);
	}
	if (array[end - 1] == value)
		return (end - 1);

	while (array[end - 1] > value)
	{
		if (array[start] == value)
			break;
		start++;
	}
	return (start);
}

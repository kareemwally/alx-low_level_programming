#include "search_algos.h"
/**
 *binary_search - function
 *description: this function implements Binary search
 *@value: number to search for
 *@array: pointer to 1st element
 *@size: total number of array
 *Return: index (int)
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int mid;
	int i = 0;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	while (left <= right)
	{
	mid = left + (right - left) / 2;
	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i != right)
		{
			printf(", ");
		}
	}
	printf("\n");
	if (array[mid] == value)
	{
		return (mid);
	}
	else if (array[mid] < value)
	{
		left = mid + 1;
	}
	else
	{
		right = mid - 1;
	}
	}
	return (-1);
}

#include "search_algos.h"
/**
 *exponential_search - function
 *description: this function implements exponential search
 *@value: number to search for
 *@array: pointer to 1st element
 *@size: total number of array
 *Return: index (int)
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t index = 1;

	if (!array)
		return (-1);
	if (array[0] == value)
		return (0);
	while (index < size && array[index] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		index *= 2;
	}
	return (binary_search(array, index, value));
}

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
	int left = size / 2;
	int right = size - 1;
	int mid;
	int i = 0;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	printf("Value found between indexes [%d] and [%d]\n", left, right);
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

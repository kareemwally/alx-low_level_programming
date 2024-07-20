#include "search_algos.h"
/**
 *repeat_search - function
 *description: to check 1st index of value
 *@value: key to be searched for
 *@index: the claimed index of key
 *@array: dataset to search into
 *Return: (int)
 */
int repeat_search(int *array, int index, int value)
{
	if (array[index - 1] == value)
		return (repeat_search(array, --index, value));
	return (index++);
}
/**
 *advanced_search - function
 *description: this function implements advanced Binary search
 *@value: number to search for
 *@array: pointer to 1st element
 *@size: total number of array
 *Return: index (int)
 */
int advanced_binary(int *array, size_t size, int value)
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
		return (repeat_search(array, mid, value));
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

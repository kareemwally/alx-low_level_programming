#include "search_algos.h"
/**
 *get_pos - function
 *description: finding the position
 *@value: number to be found
 *@array: list of numbers to search in
 *@lo: array's lower boundary number
 *@hi: array's higher boundary number
 *Return: (int)
 */
size_t get_pos(size_t lo, size_t hi, int *array, int value)
{
return (lo + ((value - array[lo]) * (hi - lo)) / (array[hi] - array[lo]));
}
/**
 *interpolation_search - function
 *description: this function implements interpolation algorithm
 *@value: number to be found
 *@array: list of numbers to search in
 *@size: array's number of elements
 *Return: (int)
 */
int interpolation_search(int *array, size_t size, int value)
{

	size_t lo = 0, hi = size - 1, mid = -1;
	int index = -1;

	if (!array)
		return (-1);
	while (lo <= hi)
	{
		mid = get_pos(lo, hi, array, value);
		if (mid >= size)
		{
			printf("Value checked array[%ld] is out of range\n", mid);
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);
		if (array[mid] == value)
		{
			index = mid;
			break;
		}
		else
		{
			if (array[mid] < value)
			{
				lo = mid + 1;
			}
			else
			{
				hi = mid - 1;
			}
		}
	}
	return (index);
}

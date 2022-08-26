#include "search_algos.h"

/**
 * linear_search -  fun search for value in array of int using Linear search algo
 * @array: ptr to the first element of the array to search in
 * @size: num elements in array
 * @value:  value to search for
 * Return: first index where value is located
 * If value is not present in array or if array is NULL, return -1
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

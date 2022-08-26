#include "search_algos.h"

/**
 * binary_search - fun searches for a val in sorted array of
 * int using the Binary search algo
 * @array: ptr to first element of the array to search in
 * @size: num of elements in array
 * @value:  value to search for
 * Return: index where value is located
 * If value is not present in array or if array is NULL, return -1
 */

int binary_search(int *array, size_t size, int value)
{
	unsigned int lowerLimit = 0;
	unsigned int upperLimit = size - 1;
	unsigned int middle, i;

	if (array == NULL)
		return (-1);
	while (lowerLimit <= upperLimit)
	{
		printf("Searching in array: ");
		for (i = lowerLimit; i <= upperLimit; i++)
		{
			printf("%d", array[i]);
			if (i < upperLimit)
				printf(", ");
			else
				printf("\n");
		}
		middle = (lowerLimit + upperLimit) / 2;
		if (array[middle] == value)
			return (middle);
		if (array[middle] < value)
			lowerLimit = middle + 1;
		if (array[middle] > value)
			upperLimit = middle - 1;
	}
	return (-1);
}

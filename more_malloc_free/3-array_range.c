#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers.
 * @min: min num
 * @max: max num
 *
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *ptr, size, i = 0;

	if (min > max)
		return (0);

	size = (max - min) + 1;

	ptr = malloc(size * sizeof(int));

	if (a == 0)
		return (0);

	while (i < size)
	{
		ptr[i] = min + i;
		i++;
	}

	return (ptr);
}

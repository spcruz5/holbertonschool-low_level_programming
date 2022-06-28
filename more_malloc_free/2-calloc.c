#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - allocates memory for array
 * @nmemb: num element
 * @size: size element
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (0);

	ptr = malloc(nmemb * size);

	if (ptr == 0)
	{
		return (0);
	}

	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}

	return (ptr);
}

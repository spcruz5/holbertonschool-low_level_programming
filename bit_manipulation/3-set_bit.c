#include "main.h"

/**
 * set_bit - sets value of bit to 1 at a given index
 * @n: num to set
 * @index: index at which to set bit
 *
 * Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set = 1 << index;
	*n = *n | set;

	return (1);
}

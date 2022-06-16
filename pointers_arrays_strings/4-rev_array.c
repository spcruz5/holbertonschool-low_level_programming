#include "main.h"

/**
 * reverse_array - reverse array
 * @a: array
 * @n: numbers of elem
 */

void reverse_array(int *a, int n)
{
	int c, i;

	for (i = 0; i < (n / 2); i++)
	{
		c = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = c;
	}
}

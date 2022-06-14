#include "main.h"

/**
 * print_line - Draws a line using the char _
 * @n: The num of char to be printed.
 */

void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}

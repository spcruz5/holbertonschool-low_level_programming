#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - sum of all parameters
 * @separator: arguments to function
 * @n: arguments to function
 * Return: sum
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list list;
	char *s = NULL;

	va_start(list, n);
	for (a = 0; a < n; a++)
	{
		s = va_arg(list, char *);
		if (s == 0)
			printf("(nil)");
		else
			printf("%s", s);
		if (a < (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}

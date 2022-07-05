#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum all num
 * @n: arguments
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list arg;

	if (n == 0)
		return (0);

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		result += va_arg(arg, int);
	}
	va_end(arg);
	return (sum);
}

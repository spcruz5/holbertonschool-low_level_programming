#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: last digit result
 * Return: value last digit
 */
int print_last_digit(int n)
{
	int p;

	p = (n % 10);

	if (p < 0)
	{
		p = (-1 * p);
	}

	_putchar(p + '0');
	return (p);
}

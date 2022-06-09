#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alph
 *
 * Return: a-z times10
 */
void print_alphabet_x10(void)
{
	int n, x;

	x = 0;

	while (x < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		x++;
		_putchar('\n');
	}
}

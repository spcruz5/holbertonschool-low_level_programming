#include "main.h"

/**
 * puts_half - prints second half of string
 * @str: string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		j = i / 2;
	}
	else
	{
		j = (i - 1) / 2;
		j = j + 1;
	}
	i = i - 1;
	while (j <= i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}

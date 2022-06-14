#include "main.h"

/**
 * more_numbers - Prints the num 0-14 10x
 */

void more_numbers(void)
{
	int num, counter;

	for (counter = 0; counter <= 9; counter++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}

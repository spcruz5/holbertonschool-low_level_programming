#include <stdio.h>

/**
 * main - program that prints all num base 16
 *
 * Return: 0
 */

int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}

	for (num = 'a'; num <= 'f'; num++)
	{
		putchar(num);
	}

	putchar('\n');

return (0);
}

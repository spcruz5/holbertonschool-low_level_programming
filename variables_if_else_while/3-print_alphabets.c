#include <stdio.h>
/**
 *main-Program that print lower and upper case letter
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar (n);
	}
	for (n = 'A'; n <= 'Z'; n++)
	{
		putchar (n);
	}
	putchar ('\n');
return (0);
}

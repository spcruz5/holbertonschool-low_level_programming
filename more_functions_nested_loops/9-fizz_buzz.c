#include <stdio.h>

/**
 * main - Prints the numbers 1-100, but for multiples of 3,
 *        Fizz is printed instead of the number, for multiples of 5,
 *        Buzz, and for multiples of both 3 and 5, FizzBuzz.
 *
 * Return: Always 0.
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf(" FizzBuzz ");

		else if ((num % 3) == 0)
			printf(" Fizz ");

		else if ((num % 5) == 0)
			printf(" Buzz ");

		else
			printf(" %d ", num);

	}

	printf("\n");

	return (0);
}

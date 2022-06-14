#include"main.h"

/**
*swap_int- function that swaps the value
*@a: int pointer 1
*@b: int pointer 2
*Return: void
*/

void swap_int(int *a, int *b)
{
	int n = *a;

	*a = *b;
	*b = n;
}

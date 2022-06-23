#include <stdio.h>

/**
 * main - print num of arguments
 * @argc: num arguments
 * @argv: pointer
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}

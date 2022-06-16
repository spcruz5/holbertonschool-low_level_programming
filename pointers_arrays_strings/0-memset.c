#include "main.h"

/**
 * _memset - fills memory with const byte
 * @s: memory
 * @b: const byte
 * @n: result
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}

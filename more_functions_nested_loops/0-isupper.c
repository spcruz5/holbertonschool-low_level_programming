#include "main.h"

/**
 *_isupper - checks for an uppercase character
 *@c: Char that will be chcecked
 *Return: 1 if char is upper else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}

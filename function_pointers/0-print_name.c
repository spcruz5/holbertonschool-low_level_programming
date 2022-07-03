#include "function_pointers.h"

/**
 * print_name - function that printa name
 * @name: input name
 * @f: ptr char
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}

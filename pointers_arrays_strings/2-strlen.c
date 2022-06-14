#include<stdio.h>
#include "main.h"

/**
*_strlen - returns length of string
*@s: pointer
*Return: length
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}

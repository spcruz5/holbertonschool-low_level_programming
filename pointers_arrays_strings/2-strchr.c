#include "main.h"

/**
*  *_strchr - fun locates a char in string
* @s: string
* @c: char
* Return: char
*/

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
		return (&s[i]);
		}
	i++;
	}
	return (0);
}

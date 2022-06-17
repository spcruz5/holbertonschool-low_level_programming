#include "main.h"

/**
* _strspn - function that gets the length of a prefix substring
* @s: char
* @accept: char
* Return: lenght
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y, n;

	x = 0;
	y = 0;

	while (s[y] != '\0' && s[y] != ' ')
	{
		n = 0;
		while (accept[n] != '\0')
		{
			if (accept[n] == s[y])
			{
			x += 1;
			}
			n++;
		}
		y++;
	}


return (x);
}

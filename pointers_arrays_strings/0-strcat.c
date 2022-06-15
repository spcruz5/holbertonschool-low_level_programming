#include"main.h"

/**
*_strcat- function
*@dest: string 1
*@src: string 2
*Return: char
*/

char *_strcat(char *dest, char *src)
{
	int d = 0, s = 0;

	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[s] != '\0')
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';

	return (dest);
}

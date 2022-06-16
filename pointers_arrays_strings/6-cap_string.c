#include "main.h"

/**
*cap_string- changes lower to upper words in string
*@n: string
*Return: n
*/

char *cap_string(char *n)
{
	int a;

	if (n[0] >= 'a' && n[0] <= 'z')
	{
		n[0] = n[0] - 32;
	}
	for (a = 0; n[a] != '\0'; a++)
	{
		switch (n[a])
			case ' ':
			case '	':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':

		if (n[a + 1] > 96 && n[a + 1] < 123)
		{
			n[a + 1] = n[a + 1] - 32;
		}
	}
	return (n);
}

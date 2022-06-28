#include<stdlib.h>
#include"main.h"
/**
**string_nconcat- fun that concat two string
*@s1: string 1
*@s2: string 2
*@n: bytes
*Return: string concat
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, r = 0;
	char *c;
	char *e = "";

	if (s1 == NULL)
		s1 = e;

	if (s2 == NULL)
		s2 = e;

	for (i = 0; s1[i] != '\0'; i++)
		len1 += 1;

	for (i = 0; s2[i] != '\0'; i++)
		len2 += 1;

	if (n < len2)
		len2 = n;

	c = malloc(len1 + len2 + 1);
	if (c == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++, r++)
		c[i] = s1[i];

	for (i = 0; i < len2; i++, r++)
		c[r] = s2[i];

	c[r] = '\0';

	return (c);
}

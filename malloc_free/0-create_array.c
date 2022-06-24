#include<stdlib.h>
#include<stdio.h>
#include"main.h"

/**
*create_array-create an array of char
*@size:size of mem
*@c:char
*Return: array
*/

char *create_array(unsigned int size, char c)
{
	char *array = malloc(size * sizeof(char));
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	for (;i < size; i++)
	{
		array[i] = c;
	}
	return (array);

}

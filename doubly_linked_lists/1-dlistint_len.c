#include "lists.h"
/**
 * dlistint_len -returns the num elements in a linked
 * @h: input
 * Return: num of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *element = h;
	size_t i = 0;

	while (element != NULL)
	{
		element = element->next;
		i++;
	}
	return (i);
}

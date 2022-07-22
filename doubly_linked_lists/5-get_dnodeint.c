#include "lists.h"
/**
 * *get_dnodeint_at_index -returns the nth node of a dlist
 * @head: head
 * @index: index of the node
 * Return: the nth node or return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		else
		{
			head = head->next;
		}
		i++;
	}
	return (head);
}

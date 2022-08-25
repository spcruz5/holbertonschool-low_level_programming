#include "hash_tables.h"

/**
 * hash_table_get - fun retrieves value associated with a key
 * @ht: hash table
 * @key: key
 * Return: value of element, NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int size, index;
	hash_node_t *tmp;

	if (ht == NULL)
		return (NULL);
	size = ht->size;
	index = key_index((const unsigned char *)key, size);
	tmp = (ht->array[index]);
	if (tmp != NULL)
	{
		while (strcmp(strdup(key), tmp->key) != 0 || tmp == NULL)
			tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
		else
			return (tmp->value);
	}
	else
		return (NULL);
}

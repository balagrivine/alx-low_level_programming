#include "hash_tables.h"

/**
 * hash_table_set - add or update an eleemnt in a hash table
 * @ht: pointer to the hash table
 * @key: key to add
 * @value: value to be stored
 * Return: 0 upon failure otherwise 1
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *valueCpy;
	unsigned long int i, index;

	valueCpy = strdup(value);
	if (valueCpy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = valueCpy;
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(valueCpy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = valueCpy;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}

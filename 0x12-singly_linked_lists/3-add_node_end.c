#include "main.h"
#include <string.h>

/**
 * add_node_end - sdds a new node at the end of a list
 * @head: first node of the list
 * @str: string to be dupliated
 *
 * Return: address of the new element or null if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	/*list_t *temp;*/
	list_t *new_node;
	unsigned int i = 0;

	while (str[i])
	{
		i++;
	}
		new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
		{
			return (NULL);
		}
		new_node->str = strdup(str);
		new_node->str = NULL;

		if (*head == NULL)
		{
			*head = new_node;
			return (new_node);
		}

	return (new_node);
}

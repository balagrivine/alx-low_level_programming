#include "main.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of the list
 * @head: the first node of the list
 * @str: pointer to string that needt to be duplicated
 *
 * Return: address of the new element and NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	/*unsigned int i = 0;*/

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return(NULL);

	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->len = strlen(str);
	temp->next = (*head);
	(*head) = temp;

	return (temp);
}

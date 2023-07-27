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

		temp = (list_t*)malloc(sizeof(list_t));
		if (temp == NULL)
			return(NULL);

		temp->str = strdup(str);
		temp->len = (*head)->len;
		temp->next = (*head);
		(*head) = temp;

	free (temp);
	return (*head);
}

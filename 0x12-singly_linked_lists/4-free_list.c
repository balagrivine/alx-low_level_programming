#include "lists.h"

/**
 * free_list - frees a singly linked list
 * @head: first node of the list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	if (head->next == NULL)
	{
		free(head->str);
		free(head);
	}
}

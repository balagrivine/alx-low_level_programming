#include "lists.h"

/**
 * free_listint2 - frees a singly linked list
 * @head: double pointer to the first node of the list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = (*head);

	while (temp !=  NULL)
	{
		temp = temp;->next;
		free((*head));
		(*head) = temp;
	}
	(*head) = NULL;
}

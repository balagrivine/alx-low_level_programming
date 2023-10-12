#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a DLL
 * @head: pointer to the head of the doubly linked list
 * @index: index of the nth node to be returned
 * Return: nth node or NULL if node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	temp = head;
	i = 0;
	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
	{
		return NULL;
	}
	return temp;
}

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of the list
 * @head: ointer to the head of the list
 * @index: index of the node to be returned
 * Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	i = 0;
	temp = head;
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

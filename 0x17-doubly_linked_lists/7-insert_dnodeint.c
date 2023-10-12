#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given position
 * @h: pointer to the head of the list
 * @idx: index of the list where the node should be inserted
 * @n: data element to be inserted
 * Return: address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int i;

	new_node = (dlistint_t*)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
		free(new_node);
	}

	new_node->n = n;
	temp = *h;
	i = 0;
	while (temp->next && i < idx)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
	{
		return (NULL);
	}
	new_node->next = temp->next;
	temp->next = new_node;
	new_node->prev = temp;

	if (new_node->next != NULL)
	{
		new_node->next->prev = new_node;
	}
	else
		*h = new_node;
	new_node->prev = temp;
	return (new_node);
}

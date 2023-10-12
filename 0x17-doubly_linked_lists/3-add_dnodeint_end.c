#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of the DLL
 * @head: pointer to pointer to the head of the list
 * @n: new data element
 *
 * Return: address of new element, NULL  failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new_node;

	new_node = (dlistint_t*)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return NULL;
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if ((*head) == NULL)
	{
		(*head) = new_node;
	}
	else
	{
		temp  = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
		new_node->prev = temp;
	}
	return (new_node);
}

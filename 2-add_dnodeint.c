#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning of the list
 * @head: double pointer to the head of the list
 * @n: number to be added
 *
 * Return: address of new pointer or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = (dlistint_t*)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return NULL;
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;

	return new_node;
}

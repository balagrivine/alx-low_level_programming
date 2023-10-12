#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dlistint - frees a DLL
 * @head: pointer to pointer to the head of the list
 *
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

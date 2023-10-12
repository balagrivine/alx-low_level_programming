#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: pointer to the head of the list
 *
 * Return: number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len;
	const dlistint_t *temp;

	temp = h;
	len = 0;

	while (temp)
	{
		len++;
		temp = temp->next;
	}
	return len;
}

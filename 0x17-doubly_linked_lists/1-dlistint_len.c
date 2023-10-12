#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - returns no. of elements
 * @h: pointer to the head of the DLL
 * Return: no. of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len;
	const dlistint_t *temp;

	len = 0;
	if (h == NULL)
	{
		return len;
	}
	temp = h;
	while (temp)
	{
		len++;
		temp = temp->next;
	}
	return len;
}

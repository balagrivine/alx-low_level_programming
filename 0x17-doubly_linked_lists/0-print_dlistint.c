#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint - prints all elements of a DLL
 * @h: pointer to the head of the list
 *
 * Return: number of ndes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count;
	const dlistint_t *temp;

	count = 0;
	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}

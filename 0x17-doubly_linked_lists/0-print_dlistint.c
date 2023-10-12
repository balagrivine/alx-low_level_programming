#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - prints eements of a linked list
 * @h: pointer to the head of the linked list
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;
	const dlistint_t *temp;

	count = 0;
	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}

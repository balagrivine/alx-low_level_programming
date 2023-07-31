#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the first node int he list
 *
 * Return: nu,ber of nodes
 */

size_t print_listint(const listint_t *h)
{
	long unsigned int count;

	/*h = (listint_t *)malloc(sizeof(listint_t));*/

	count = 0;
	while (h)
	{
		printf("%d\n", h->n);
		/*count++*/
		h=h->next;
		count++;
	}

	return (count);
}

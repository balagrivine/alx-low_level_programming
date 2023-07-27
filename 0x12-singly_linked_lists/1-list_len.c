#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to elements
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t argc = 0;

	while (h)
	{
		h = h->next;
		argc++;
	}
	return (argc);

}

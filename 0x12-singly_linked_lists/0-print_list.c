#include "lists.h"

/**
 * print_list - prints elements of a list
 * @h: pointer to the list whose which elements are to be printed
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}

		else

		{
			printf("%s [%u]\n", h->str, h->len);

		}
		h = h->next;
		num++;
	}

	return (num);

}

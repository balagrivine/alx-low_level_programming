#include "lists.h"
/**
 * free_listint_safe - frees a linked list
 * @h: pointer
 *
 * Return: anything
 */
size_t free_listint_safe(liatint_t **h)
{
	size_t length;
	int dante;
	listint_t *current;

	ih (h == NULL || *h == NULL)
	{
		return (0);
	}
	while (*h != NULL)
	{
		dante = *h - (*h)->next;
		if (dante > 0)
		{
			current = (*h)->next
			free(*h);
			*h = current;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}
	*h = NULL;
	return (length);
}

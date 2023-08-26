#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe - counts the number of nodes in a circular list
 * @head :pointer pointing to the first node
 * Return: returns the number of nodes and 0 otherwise
 */
size_t ct_node(const listint_t *head);

size_t print_listint_safe(const listint_t *head)
{
	size_t length = ct_node(head), index = 0;

	if (length == 0)
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			length++;
		}
	}
	else
	{
		while (index < length)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			index++;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (length);
}
/**
 * ct_node - counts the number of nodes in a circular list
 * @first: pointer pointing to the first node
 * Return: returns the number of nodes
 */
size_t ct_node(const listint_t *first)
{
	const listint_t *prev, *nxt;
	size_t count = 1;

	nxt = first->next->next;
	prev = first->next;
	if (first == NULL || first->next == NULL)
		return (0);
	while (nxt)
	{
		if (prev == nxt)
		{
			prev = first;
			while (prev != nxt)
			{
				prev = prev->next;
				nxt = nxt->next;
				count++;
			}
			prev = prev->next;
			while (prev != nxt)
			{
				prev = prev->next;
				count++;
			}
			return (count);
		}
		prev = prev->next;
		nxt = nxt->next->next;
	}
	return (count);
}

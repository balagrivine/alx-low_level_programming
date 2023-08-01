#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe - prints a listint_t linked list
 * @pointer to pointer to the first node of the list
 *
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp, *temp2;
	size_t num_nodes;

	num_nodes = 0;

	if (head == NULL || head->next == NULL)
	{
		exit(98);
	}

	temp = head;
	temp2 = head;
	while (temp2 && temp2->next)
	{
		temp = temp->next;
		temp2 = (temp2->next)->next;

		if (temp == temp2)
		{
			temp2 = head;
			while (temp != temp2)
			{
				printf("%d\n", temp->n);
				printf("%d\n", temp2->n);
				num_nodes++;
				temp2 = temp2->next;
				temp = temp->next;
			}
			while (temp != temp2)
			{
				printf("%d\n", temp->n);
				printf("%d\n", temp2->n);
				num_nodes++;
				temp2 = temp2->next;
			}

			return (num_nodes);
		}
	}
	return (0);
}

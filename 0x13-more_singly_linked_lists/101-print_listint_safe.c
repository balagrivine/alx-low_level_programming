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
	size_t num_nodes = 0;
	int j = 1;

	if (head == NULL || head->next == NULL)
	{
		exit(98);
	}

	temp = head;
	temp2 = head;
	while (temp && temp->next)
	{
		printf("[%p] %d\n", ((void *) temp), temp->n);
		num_nodes++;
		temp = temp->next;

		if (temp == temp2 && j)
		{
			j = 0;
			num_nodes = 0;
			/*intf("[%p] %d\n", ((void *) temp), temp->n);
			temp2 = temp2->next;*/
			/*while (temp != temp2)
			{
				printf("[%p] %d\n", ((void *) temp2), temp2->n);
				temp2 = temp2->next;
				num_nodes++;
			}

			return (num_nodes);*/
			while (head == temp2)
			{
				head = head->next;
				num_nodes++;
			}
		}
	}
	return (num_nodes);
}

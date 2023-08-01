#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @pointer to pointer to the first node of the list
 *
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp, *temp2;
	size_t num_nodes = 1;

	num_nodes = 1;

	if (head == NULL || head->next == NULL)
	{
		exit(98);
	}

	temp = head->next;
	temp2 = (head->next)->next;

	while (temp2)
	{
		if (temp == temp2)
		{
			temp = head;
			while (temp != temp2)
			{
				num_nodes++;
				temp = temp->next;
				temp2 = temp2->next;
			}

			while (temp != temp2)
			{
				num_nodes++;
				temp = temp->next;
			}
			return(num_nodes);
		}
		temp = temp->next;
		temp2 = (temp2->next)->next;
	}
	return (0);

}

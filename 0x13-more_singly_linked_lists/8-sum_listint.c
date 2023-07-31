#include "lists.h"

/**
 * sum_listint - rerurns the sum of all the data of a linked list
 * @head: pointer to the first node in the linked list
 *
 * Return: sum of the data
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	temp = head;
	while (temp != NULL)
	{

		sum += temp->n;
		temp = temp->next;

	}
	return (sum);
}

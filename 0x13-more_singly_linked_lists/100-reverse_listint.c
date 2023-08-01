#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to pointerto the first node in the linked list
 *
 * Return: pointerto the first node of the reersed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *back;
	listint_t *front;

	back = NULL;
	front = NULL;

	while ((*head))
	{
		front = (*head)->next;
		(*head)->next = back;

		back = (*head);
		(*head) = front;
	}
	(*head) = back;

	return ((*head));

}

#include "lists.h"

/**
 * pop_listint - deletes the hea node of a linked list
 * @head: pointer to pointer of the first node f the list
 *
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if ((*head) == NULL)
	{
		return (0);
	}


	num = (*head)->n;
	temp = (*head)->next;
	free((*head));
	((*head)) = temp;

	return (num);
}

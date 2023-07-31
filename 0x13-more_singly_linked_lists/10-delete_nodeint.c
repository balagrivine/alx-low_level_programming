#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at the index index of a linked list
 * @head: pointer to pointer to the first node in the list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded or -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *current = NULL;
	unsigned int i;

	temp = (*head);

	if ((*head) == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		(*head) = temp->next;
		free((*head));
		return (1);
	}

	i = 0;
	while (i < index - 1)
	{
		if (temp == NULL || temp->next == NULL)
			return (-1);
		temp = temp->next;
		i++;
	}

	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}

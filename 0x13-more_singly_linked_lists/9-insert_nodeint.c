#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer to the first node of the list
 * @idx: index of the list where th efirst node should be added
 * @n: data to add in the new node
 *
 * Return: address to the new  noed or NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_node;
	unsigned int i;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (*head == NULL || new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = (*head);
		(*head) = new_node;
		return (new_node);
	}
	temp = (*head);
	for (i = 0; temp != NULL && i <= idx; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);

		}
		else
			temp = temp->next;
	}
	return (NULL);
}

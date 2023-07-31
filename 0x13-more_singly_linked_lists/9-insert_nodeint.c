#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer to the first node of the list
 * @idx: index of the list where th efirst node should be added
 * @n: takes count of the nodes
 *
 * Return: address to the new  noed or NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;

	(*head) = temp;
	if (*head == NULL)
	{
		return (NULL);
	}
	while (temp != NULL && n < idx)
	{
		temp = temp->next;
	}
}

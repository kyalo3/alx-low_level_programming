#include "lists.h"
/**
 * delete_nodeint_at_index - a function that deletes the node at index index
 * @head: pointer to the head of a list
 * Return: 1 if it succeeded, -1 if it failed
 * @index: the index of the node that should be deleted.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current = *head;
	unsigned int node;

	if (current == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	for (node = 0; node < (index - 1); node++)
	{
		if (current->next == NULL)
			return (-1);

		current = current->next;
	}
	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);
}

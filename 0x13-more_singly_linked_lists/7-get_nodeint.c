#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node
 * @head: pointer to the head
 * @index: index of the node to return
 * Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
	count++;

	current = current->next;
	}
	return (NULL);
}

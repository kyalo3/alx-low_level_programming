#include "lists.h"
/**
 * free_listint_safe - a function that frees a listint_t list.
 * @h: pointer to the head of list
 *Return: no of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	size_t num_nodes;
	listint_t *current_node;

	num_nodes = 0;
	if (!h)
		return (num_nodes);

	while (*h && *h > (*h)->next)
	{
		current_node = *h;
		*h = (*h)->next;
		free(current_node);
		num_nodes++;
	}

	if (*h)
	{
		free(*h);
		*h = NULL;
		num_nodes++;
	}
	return (num_nodes);
}

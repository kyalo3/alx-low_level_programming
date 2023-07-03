#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end
 * @head: pointer to the first node
 * @n: value to be added to the node
 * Return: Address of the element, NULL incase of failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current = *head;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (current->next)
		current = current->next;
	current->next = new_node;

	return (new_node);
}

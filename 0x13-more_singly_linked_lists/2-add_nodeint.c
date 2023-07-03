#include "lists.h"
/**
* add_nodeint - function to add  new node at the beginning
* @head: pointer to the first node
* Return: the address of the new element, or NULL in failure
* @n: value to be added to the new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

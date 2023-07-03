#include "main.h"
/**
 * free_listint - function that frees listint_t
 *
 * @head: pointer to the head
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		current = head->next;
		free(head);
		head = current;
	}
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: contains base address
 */

void free_list(list_t *head)
{
	list_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}

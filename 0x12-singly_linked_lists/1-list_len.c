#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - a function that returns the number of elements in a linked list
 * Return: the number of elements
 * @h: pointer
 * Description: returns the number of elements
 */

size_t list_len(const list_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}

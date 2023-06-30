#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - a function that returns the number of elements in a linked list
 * Return: the number of elements
 * @h: pointer
 */

size_t list_len(const list_t *h)
{
	int c = o;

	while (c != NULL)
	{
		c++;
		c = c->next;
	}
	return (c);
}

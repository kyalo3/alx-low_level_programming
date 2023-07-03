#include "lists.h"
/**
 * insert_nodeint_at_index - a function that inserts a new node at a given position
 * @idx: the index of the list where the new node should be added
 * @n: integers to be added
 * @head: pointer to the head of the list
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{


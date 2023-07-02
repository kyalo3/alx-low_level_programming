#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>


/**
 * array_iterator- prints an integer
 * @action: action function to take
 * @size: size of the array
 * @array: array to go thru
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int  index;

	if (array == NULL || action == NULL)
		exit(98);

	for (index = 0; index < size; index++)
	{
		action(array[index]);
	}
}

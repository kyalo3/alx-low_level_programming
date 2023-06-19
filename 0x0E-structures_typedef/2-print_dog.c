#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - prints the struct dog
 * @d: string
 * return: 0 on NULL, 1 on success
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if ((*d).name == NULL)
	{
		(*d).name = "(nil)";
	}
	if ((*d).owner == NULL)
	{
		(*d).owner = "NULL";
	}
	printf("Name: %s\n", (*d).name);
	printf("Age: %f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);
}

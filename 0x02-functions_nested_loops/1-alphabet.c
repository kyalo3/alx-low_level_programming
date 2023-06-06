#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - prints the alphabet, in lowercase
 * followed by a new line
 * Return: on success 0
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}

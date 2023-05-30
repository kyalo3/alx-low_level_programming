#include "main.h"
/**
 * print_rev - prints a string
 * in reverse
 * @s: string to print
 * return: 0
 */
void print_rev(char *s)
{
	int letter = 0;

	int o;

	while (*s != '\0')
	{
		letter++;
		s++;
	}

	s--;

	for (o = letter; o > 0; 0--)

	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

#include <stdio.h>
#include <unistd.h>
/**
 * rev_string - reverses a string
 * @s: string length
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];

	int counter = 0;

	int i;

	while (s[counter] != '\n')

		counter++;
	for (i = 0; i < counter; i++)

	{
		counter--;

		rev = s[i];

		s[i] = s[counter];

		s[counter] = rev;
	}
}

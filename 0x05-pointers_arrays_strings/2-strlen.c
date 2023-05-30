#include <stdio.h>
#include <unistd.h>
/**
  * _strlen - the length of a string
  * @s: string value
  * char: value
  * length - string length
  * Return - always zero
  */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

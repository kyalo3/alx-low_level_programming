#include <stdio.h>
#include <unistd.h>
/**
  * _strlen - returns the length of a string
  * @s: string value
  * Return: length
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

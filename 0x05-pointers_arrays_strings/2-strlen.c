#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
  * _strlen - the length of a string
  * main - check the code
  * @s: string value
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

int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}

#include <stdio.h>
#include <unistd.h>
/**
  * main -a C program that prints exactly
  * followed by a new line, to the standard error.
  * Return: Always 0 (Success)
  */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}

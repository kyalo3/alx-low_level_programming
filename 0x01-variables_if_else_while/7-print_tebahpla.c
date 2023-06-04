#include <stdio.h>
#include <unistd.h>
/**
  * main - entry point
  * Return: Always 0 (Success)
  */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}

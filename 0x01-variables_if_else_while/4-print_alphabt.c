#include<stdio.h>
#include<unistd.h>
/**
*main- a C program that prints exactly
*followed by a newline, to the standard error.
*Return: Always 0(Success)
*/
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	if (letter != 'e' && letter != 'q')
	{
	putchar (letter);
	}
	else
		{
		}
	}
	putchar('\n');
	return (0);
}

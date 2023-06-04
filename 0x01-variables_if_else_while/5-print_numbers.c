#include <stdio.h>
#include <unistd.h>
/**
* main -a C program that prints exactly
* followed by a new line, to the standard error.
*  Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/*
 * main - prints all arguments it receives
 * @i: integer
 * @argv: array of the arguments
 * @argc: number of command line arguments
 * printf: print number of command-line arguments
 * Return: 0 on success, non-zero on failure
 */
int main(int argc, char *argv[])
{
	int i;

	for(int i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}

	return (0);
}

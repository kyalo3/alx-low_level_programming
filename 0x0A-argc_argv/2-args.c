#include <stdio.h>
/*
 * main - entry point
 * @argv: array of the arguments
 * @argc: number of command line arguments
 * Description: prints all arguments
 * Return: 0 on success, non-zero on failure
 */
int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i <argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}

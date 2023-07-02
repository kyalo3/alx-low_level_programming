#include <stdio.h>
/*
 * main - entry point
 * @argv: array of the arguments
 * @argc: number of command line arguments
 * Description: prints all arguments
 * Return: 0 on success, non-zero on failure
 */
int main(int argc, char *argv[]_ _attribute_ _((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

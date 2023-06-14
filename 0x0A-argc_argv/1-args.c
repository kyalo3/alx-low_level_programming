#include <stdio.h>
/**
 * main - prints the number of arguments
 *
 * @argv: arrays of the arguments
 * @argc: size of the array
 * return: 0
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}

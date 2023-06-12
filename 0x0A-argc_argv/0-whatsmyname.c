#include <stdio.h>
#include "main.h"

/*
 * main - prints the name of the program
 * argv: the array of program in the command line
 * argc: the argument count
 * Return: always 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - entry point
 * Description: new compiled file
 * Return: 0
 */

int main(void)
{
	char *file_name = (char *)malloc(strlen(__FILE__) + 1);

	printf("02-main.c %s\n", file_name);

	return (0);
}

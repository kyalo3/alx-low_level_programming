#include "main.h"
#include <stdio.h>

/**
 * _memcpy -  a function that copies memory area
 * @dest: destination memory area
 * @n: bytes filled
 * @src: source memory area
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}

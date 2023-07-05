#include "main.h"
#include <stdlib.h>
#include "last.c"
/**
 * **strtow - split a string into words
 * @str: string to split
 *
 * Return: 1 0n success, 0 on error
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start;

	while (*(str + len))
		len++;

	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));

	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);

				*tmp++ = str[start++];
				*tmp = '\0';

				matrix[k] = tmp - c;
				k++;
				c = 0; } }
		else if (c++ == 0)
			start = i; }
	matrix[k] = NULL;

	return (matrix); }

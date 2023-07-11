#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* create_file - a function that creates a file
* Description: a function that creates a file
* @text_content: text to write on a file
* @filename: name of file to create
* Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	ssize_t written;
	int fd;

	if (filename == NULL)
	{
	return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
	return (-1);

	if (text_content != NULL)
	{
	written = write(fd, text_content, strlen(text_content));
	if (written == -1)
	{
	close(fd);
	return (-1);
	}
	}
	close(fd);
	return (1);
}

#include "main.h"
#include <stdio.h>

/**
*read_textfile - main function
*Description: reads and prints the text to the POSIX stdout
*Return: actual no of letters
*@letters: number of letters to read and write
*@filename: name of the file to be read
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes_read, written;
	char *buffer;

	if (filename == NULL)
	{
	return (0); }

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
	return (0); }

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	bytes_read = read(fd, buffer, letters);
	if (bytes_read < 0)
	{
		free(buffer);
		return (0); }

	buffer[bytes_read] = '\0';
	close(fd);

	written = write(STDOUT_FILENO, buffer, bytes_read);

	if (written < 0)
	{
	free(buffer);
	return (0); }

	free(buffer);
	return (written);
}

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
	if (filename == NULL)
	{
	return (0); }

	FILE *file = fopen(filename, "r");

	if (file == NULL)
	{
	return (0); }

	char buffer[letters + 1];
	ssize_t bytesRead = fread(buffer, sizeof(char), letters, file);

	if (bytesRead == 0)
	{
	fclose(file);
	return (0); }

	buffer[bytesRead] = '\0';
	printf("%s", buffer);

	fclose(file);
	return (bytesRead);
}

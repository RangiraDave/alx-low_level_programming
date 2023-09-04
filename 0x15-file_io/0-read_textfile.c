#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - Function to Read text from a file and print it.
 * @filename: Pointer to file name.
 * @letters: Number of characters to be read.
 * Return: Number of Read characters.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer = malloc(letters + 1);
	ssize_t bytesRead;

	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		perror("Error opening file.");
		free(buffer);
		return (0);
	}

	bytesRead = read(fd, buffer, letters);

	if (bytesRead == -1)
	{
		perror("Error reading the file.");
		close(fd);
		free(buffer);
		return (0);
	}

	buffer[bytesRead] = '\0';
	printf("%s", buffer);

	close(fd);
	free(buffer);
	return (bytesRead);
}

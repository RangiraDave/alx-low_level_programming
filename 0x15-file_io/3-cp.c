#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * cp - Function to copy file to the other.
 * @file_from: Content of a file to copy from.
 * @file_to: Content of a file to copy to.
 * @from_name: Name of original file.
 * @to_name: Name of copy file.
 * Return: Nothing to be returned.
 */

void cp(int file_from, int file_to, char *from_name, char *to_name)
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from_name);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to_name);
		exit(99);
	}
}

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
 * main - program that copies the content of a file to another file.
 * @argc: Number of arguments passed.
 * @argv: Pointer to array of arguments passed
 * Return: ALways 0.
 */

int main(int argc, char **argv)
{
	int fp_from, fp_to;
	char buffer[BUFFER_SIZE];
	ssize_t written_bytes, read_bytes;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fp_from = open(argv[1], O_RDONLY);
	cp(fp_from, 0, argv[1], argv[2]);
	fp_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	cp(0, fp_to, argv[1], argv[2]);
	while ((read_bytes = read(fp_from, buffer, BUFFER_SIZE)) > 0)
	{
		written_bytes = write(fp_to, buffer, read_bytes);
		if (written_bytes != read_bytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fp_from);
			close(fp_to);
			exit(99);
		}
	}
	if (read_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fp_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp_from);
		exit(100);
	}
	if (close(fp_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp_to);
		exit(100);
	}
	return (0);
}

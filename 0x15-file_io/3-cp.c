#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

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
	cp(fp_from, argv[1], 'r');

	fp_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	cp(fp_to, argv[1], 'w');

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

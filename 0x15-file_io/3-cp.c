#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 */

int main(int argc, char **argv)
{
	int fp_from, fp_to;
	char buffer[BUFFER_SIZE];
	ssize_t written_bytes, read_bytes;

	if (argc != 3)
	{
		write(1, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}
	fp_from = open(argv[1], O_RDONLY);
	if (fp_from == -1)
	{
		dprintf(STDERR_FILENO, "Error while opening file\n");
		return (-1);
	}
	fp_to = open(argv[2], O_WRONLY | O_CREAT);
	if (fp_to == -1)
	{
		dprintf(STDERR_FILENO, "Error while opening file\n");
		return (-1);
	}
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
	dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
	close(fp_from);
	close(fp_to);
	exit(98);
	}
	close(fp_from);
	close(fp_to);
	return (0);
}

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
 * Return: Nothing.
 */

void cp(int fd, char *filename, char mode)
{
        if (mode == 'r' && fd == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
                exit(98);
        }
        if (mode == 'w' && fd == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
                exit(99);
        }
}

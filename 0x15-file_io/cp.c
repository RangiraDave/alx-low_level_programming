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

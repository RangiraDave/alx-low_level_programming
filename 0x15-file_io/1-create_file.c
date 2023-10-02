#include "main.h"

/**
 * create_file - Function for creating a file.
 * @filename: Ptr to File name to be created.
 * @text_content: String to be written in the file.
 * Return: 1 for success and -1 for failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t length = 0, write_res;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
/*		perror("Error openning file");*/
		return (-1);
	}

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	while (text_content[length])
		length++;
	write_res = write(fd, text_content, length);
	if (write_res == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}

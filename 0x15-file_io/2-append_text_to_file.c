#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * append_text_to_file - Is a function to append a text to the file.
 * @filename: Pointer representing file.
 * @text_content: Text to be added.
 * Return: 1 for success and -1 for failer.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t write_status;

	if (!filename)
	{
		return (-1);
	}
	if (filename && text_content == NULL)
	{
		return (1);
	}
	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
	{
/*		perror("Error while opening file");*/
		close(fp);
		return (-1);
	}
	write_status = write(fp, text_content, strlen(text_content));
	if (write_status == -1)
	{
		perror("Error while writing to the file");
		close(fp);
		return (-1);
	}
	close(fp);
	return (1);
}

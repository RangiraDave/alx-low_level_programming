#include "main.h"

/**
 */

int create_file(const char *filename, char *text_content)
{
	FILE *fd;

	fd = open(filename, O_RDWRONLY);
	
	if (fd == NULL)
	{
		perror("Error openning file");
		return (-1);
	}
}

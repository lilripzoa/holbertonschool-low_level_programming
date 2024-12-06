#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: filename
 * @text_content: text content
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	ssize_t bytewrite;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_APPEND | O_WRONLY);
	if (f == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytewrite = write(f, text_content, strlen(text_content));
		if (bytewrite == -1)
		{
			close(f);
			return (-1);
		}
	}

	close(f);
	return (1);
}


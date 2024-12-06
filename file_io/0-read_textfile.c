#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and prints it
 * @filename: filename
 * @letters: letters
 * Return: 0 if file can not be opened or read, is NULL or fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t byteread, bytewrite;
	char *buffer;

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	byteread = read(f, buffer, letters);
	if (byteread == -1)
	{
		free(buffer);
		close(f);
		return (0);
	}

	bytewrite = write(STDOUT_FILENO, buffer, byteread);
	if (bytewrite == -1 || bytewrite != byteread)
	{
		free(buffer);
		close(f);
		return (0);
	}

	free(buffer);
	close(f);
	return (byteread);
}

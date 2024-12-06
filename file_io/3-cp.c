#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_error - Print an error message and exit the program.
 * @message: The error message to print.
 * @exit_code: The exit code to use when exiting the program.
 * Return: nothing
 */

void print_error(char *message, int exit_code)
{
	dprintf(2, "%s", message);
	exit(exit_code);
}

/**
 * copy_file - Copy the content of one file to another.
 * @file_from: The source file to copy.
 * @file_to: The destination file to copy to.
 * Return: 1 on success
 */

void copy_file(const char *file_from, const char *file_to)
{
	int f_from, f_to, bytesread, byteswrite;
	char buffer[BUFFER_SIZE];

	f_from = open(file_from, O_RDONLY);
	if (f_from == -1)
		print_error("Error: Can't read from source file\n", 98);

	f_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (f_to == -1)
		print_error("Error: Can't write to destination file\n", 99);

	while ((bytesread = read(f_from, buffer, BUFFER_SIZE)) > 0)
	{
		byteswrite = write(f_to, buffer, bytesread);
		if (byteswrite != bytesread)
			print_error("Error: Can't write to destination file\n", 99);
	}

	if (bytesread == -1)
		print_error("Error: Can't read from source file\n", 98);

	if (close(f_from) == -1)
		print_error("Error: Can't close fd\n", 100);

	if (close(f_to) == -1)
		print_error("Error: Can't close fd\n", 100);
}

/**
 * main - Entry point of the program.
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 * Return: 0
 */ 

int main(int argc, char *argv[])
{
	if (argc != 3)
		print_error("Usage: cp file_from file_to\n", 97);

	copy_file(argv[1], argv[2]);

	return 0;
}

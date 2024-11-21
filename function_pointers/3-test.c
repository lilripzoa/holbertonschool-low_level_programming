#include <stdio.h>
#include <stdlib.h>

/**
 * main - print function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int index, bytes;
	int (*address)(int, char **) = main;
	unsigned char result;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[i]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (index = 0; index < bytes; index++)
	{
		result = *(unsigned char *)address;
		printf("%.2x", result);
		if (index == bytes - 1)
			continue;

		printf(" ");
		address++
	}
	printf("\n");
	return (0);
}

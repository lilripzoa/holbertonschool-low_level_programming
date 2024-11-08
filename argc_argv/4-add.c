#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0;
 */

int main(int argc, char *argv[])
{
	int a = 0;
	int i, x;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (x = 0; argv[i][x] != '\0'; x++)
		{
			if (!isdigit(argv[i][x]))
			{

				printf("error 404\n");
				return (1);
			}

		}
		a += atoi(argv[i]);
	}
	printf("%d\n", a);
	return (0);
}

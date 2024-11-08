#include <stdio.h>
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
	int i, y, a;
	
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (y = 0; argv[i][y] != '\0'; y++)
		{
			if (!isdigit(argv[i][y]))
			{
				printf("Error\n");
				return (1);
			}
		}
		a += atoi(argv[i]);
	}
	printf("%d\n", a);
	return (0);
}


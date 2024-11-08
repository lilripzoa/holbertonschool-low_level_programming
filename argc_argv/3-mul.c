#include <stdio.h>
#include "main.h"

/**
 * main - program that multiplies two numbers.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int entier1, entier2;


	if (argc != 3)
	{
		printf("error 404\n");
		return (1);
	}

	entier1 = atoi(argv[1]);
	entier2 = atoi(argv[2]);

	if (entier1 == 0 || entier2 == 0)
	{
		if (argv[1][0] != '0' || argv[2][0] != '0')
		{
			printf("error 404\n");
			return (1);
		}
	}

	printf("%d\n", entier1 * entier2);

	return (0);
}

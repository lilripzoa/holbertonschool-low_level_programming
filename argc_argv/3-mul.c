#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int entier1, entier2;

	entier1 = entier2 = 0;

	if (argc == 3)
	{
		entier1 = atoi(argv[1]);
		entier2 = atoi(argv[2]);
		printf("%d\n", entier1 * entier2);
		return (0);
	}
	else
	{
		printf("error\n");
		return (1);
	}
	return (0);
}

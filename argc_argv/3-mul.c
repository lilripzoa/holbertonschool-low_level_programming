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

	entier1 = entier2 = 0

	if (argc == 3)
	{
		entier1 = atoi(argv[1]);
		entier2 = atoi(argv[2]);
		printf("%d\n", entier1 * entier2);
	}
	else
	{
		printf("error 404\n");
		return (1);
	}
}

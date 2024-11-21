#include <stddef.h>
#include "3-calc.h"
#include <stdio.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on sucess
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int *operation;


	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	operation = argv[2];

	if (argv[2][1])
	{
		printf("Error\n");
		return (99);
	}

	if (*operation != '+' && *operation != '-' && *operation != '*' &&
	*operation != '/' && *operation != '%')
	{
		printf("Error\n");
		return (99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	result = (*get_op_func(operation))(a, b);
	printf("%d\n", result);

	return (0);
}

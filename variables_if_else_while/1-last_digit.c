#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf ("Last digit of %d is ", n);

	y = n % 10;

	if (y > 5)
	{
		printf("%d and is greater than 5", y);
	}
	else if (y == 0)
	{
		printf("%d and is 0", y);
	}
	else if (y < 6 && y != 0)
	{
		printf("%d and is less than 6 and not 0", y);
	}

	return (0);
}

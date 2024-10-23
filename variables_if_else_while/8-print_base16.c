#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int y;
	char ch;

	for (y = '0'; y <= '9'; y++)
	{
		putchar(y);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}

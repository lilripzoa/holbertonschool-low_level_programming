#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch, chr;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (chr = 'A'; chr <= 'Z'; chr++)
		putchar(chr);
	putchar('\n');

	return (0);
}

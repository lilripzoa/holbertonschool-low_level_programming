#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: the string to be printed between the strings.
 * @n: the number of strings passed to the function
 * Return: nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *string;
	unsigned int i;
	va_list ptr;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(ptr, char *);

		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}

	}
	va_end(ptr);
	printf("\n");
}

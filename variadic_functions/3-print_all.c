#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 * Return: nothing.
 */

void print_all(const char * const format, ...)
{
	va_list ptr;
	unsigned int i = 0, separator = 0;
	char *string;
	char c;

	va_start(ptr, format);

	while (format && format[i])
	{
		c = format[i];

		if (separator && (c == 'c' || c == 'i' || c == 'f' || c == 's'))
			printf(", ");

		switch (c)
		{
			case 'c':
				printf("%c", va_arg(ptr, int));
				separator = 1;
				break;
			case 'i':
				printf("%d", va_arg(ptr, int));
				separator = 1;
				break;
			case 'f':
				printf("%f", va_arg(ptr, double));
				separator = 1;
				break;
			case 's':
				string = va_arg(ptr, char *);
				if (string == NULL)
					printf("(nil)");
				else
					printf("%s", string);
				separator = 1;
				break;

		}
		i++;
	}
	va_end(ptr);
	printf("\n");
}

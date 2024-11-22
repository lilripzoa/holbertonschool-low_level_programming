#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - Function that prints anything
 * @format: List arguments
 */

void print_all(const char * const format, ...)
{
	va_list ptr;
	unsigned int i = 0;
	char *string, current;

	va_start(ptr, format);

	while (format && format[i])
	{
		current = format[i];

		if (i > 0 && (current == 'c' || current == 'i' ||
		current == 'f' || current == 's'))
			printf(", ");

		switch (current)
		{
			case 'c':
				printf("%c", va_arg(ptr, int));
				break;
			case 'i':
				printf("%d", va_arg(ptr, int));
				break;
			case 'f':
				printf("%f", va_arg(ptr, double));
				break;
			case 's':
				string = va_arg(ptr, char *);
				if (string == NULL)
					printf("(nil)");
				else
					printf("%s", string);
				break;
		}
		i++;
	}

	va_end(ptr);
	printf("\n");
}

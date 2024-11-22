#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - Function that prints anything
 * @format: List arguments
 */

void print_all(const char * const format, ...)
{
	va_list lst;
	char *ptr;
	int i = 0;

	va_start(lst, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(lst, int));
				break;
			case 'i':
				printf("%d", va_arg(lst, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(lst, double));
				break;
			case 's':
				ptr = va_arg(lst, char*);
				if (ptr != NULL)
				{
					printf("%s", ptr);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
					format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}

	va_end(lst);
	printf("\n");
}

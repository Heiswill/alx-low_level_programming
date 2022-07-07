#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 * @format: list of types of arguments passed to the function
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list all;
	char *str;
	int j;

	va_start(all, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[j])
	{
		switch (format[j])
		{
			case 'c':
				printf("%c", (char) va_arg(all, int));
				break;
			case 'i':
				printf("%d", va_arg(all, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(all, double));
				break;
			case 's':
				str = va_arg(all, char*);
				if (str != NULL)
				{
					printf("%s", str);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[j] == 'c' || format[j] == 'i' || format[j] == 'f' ||
				format[j] == 's') && format[(j + 1)] != '\0')
			printf(", ");
		j++;
	}
	va_end(all);
	printf("\n");
}

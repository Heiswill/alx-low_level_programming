#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints, followed by a new line.
 * @separator: input string to be printed by the strings
 * @n: number of strings passedd to the function
 * Return: (nil) if string is NULL
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int k;
	char *str;

	va_start(ap, n);
	for (k = 0; k < n; k++)
	{
		str = va_arg(ap, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator == NULL)
			continue;
		if (k < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}

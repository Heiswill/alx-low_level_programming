#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, folloed by a new line.
 * @separator: string to be printed between numbers
 * @n: no of parameters
 * @...: other parameters
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int args;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		args = va_arg(ap, int);
		printf("%d", args);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}

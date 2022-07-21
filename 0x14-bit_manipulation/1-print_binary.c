#include "main.h"
void convert_b(unsigned long int n);

/**
 * print_binary - converts a decimal number to binary.
 * @n: integer to convert
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		print_b(n);
}

/**
 * convert_b - helper function to print binary representation.
 * @n: Number
 */
void convert_b(unsigned long int n)
{
	if (n == 0)
		return;
	convert_b((n >> 1));
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}

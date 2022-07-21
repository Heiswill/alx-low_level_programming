#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * binary_to_uint - Function that converts a binary number
 * to an unsigned int.
 * @b: Pointer to string of binary chars
 * Return: The converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, base;
	int i;

	for (i = 0; b[i] != '\0'; i++)
		;
	for (i--, base = 1; i >= 0; i--, base *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			decimal += base;
	}
	return (decimal);
}

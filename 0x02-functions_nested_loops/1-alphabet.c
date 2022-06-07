#include "main.h"

/**
 * print_alphabet - Prints alphabets in lowercase, followed by a new line
 * Return: Null
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

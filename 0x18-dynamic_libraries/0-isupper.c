#include "main.h"

/**
 * _isupper - A program that checks for uppercase characters
 * @c: An input character
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	char ch = 'A';
	int i = 0;

	for (; ch <= 'Z'; ch++)
	{
		if (c == ch)
		{
			i = 1;
			break;
		}
	}

	return (i);
}

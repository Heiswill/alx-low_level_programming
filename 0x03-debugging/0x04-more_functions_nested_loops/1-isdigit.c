#include "main.h"

/**
 * _isdigit - A function that checks for a digit from 0 to 9
 * @c: An input character
 * Return: 1 if c is a digit or 0 otherwise
 */
int _isdigit(int c)
{
	int i = 0;

	for (i = 0; i <=9; i++)
	{
		if (c != i)
		{
			return (0);
		}
	}
	return (1);
}

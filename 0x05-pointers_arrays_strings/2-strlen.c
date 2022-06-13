#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: an input string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\n') len++;
	return (len);
}

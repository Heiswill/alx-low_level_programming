#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src, including
 * the terminating null byte(\0), to the buffer pointe to by dest
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *ch = dest;

	while (*src)
	{
		*dest++ = *src++;
	}
	return (ch);
}

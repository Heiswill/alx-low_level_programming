#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src, including
 * the terminating null byte(\0), to the buffer pointed to by dest
 * @dest: pointer destination
 * @src: pointer source to copy back
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	if (dest == NULL)
		return (NULL);

	char *temp = dest;

	while (*src)
		*dest++ = *src++;
	return (temp);
}

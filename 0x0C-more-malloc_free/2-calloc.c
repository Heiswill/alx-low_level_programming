#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array using malloc.
 * @nmemb: number of elements
 * @size: size of bytes
 * Return: pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, (nmemb * size));
	return (ptr);
}

/**
 * _memset - sets first n bytes of the memory area.
 * @s: array
 * @v: value to set
 * @n: number of bytes
 * Return: s
 */
char *_memset(char *s, char v, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = v;
	}
	return (s);
}

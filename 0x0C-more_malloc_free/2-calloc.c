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
	unsigned int i = 0;

	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (; i < nmemb * size; i++)
		*(ptr + i) = 0;

	return (ptr);
}

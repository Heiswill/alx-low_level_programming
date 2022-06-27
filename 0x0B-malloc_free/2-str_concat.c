#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings, using dynamic memory allocation.
 * @s1: string1
 * @s2: string
 * Return: NULLL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int lens1 = strlen(s1);
	int lens2 = strlen(s2);
	int size = lens1 + lens2 + 1;
	char *s = malloc(sizeof(char) * size);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < lens1; i++)
		s[i] = s1[i];

	for (i = 0; i < lens2; i++)
		s[lens1 + 1] = s2[i];

	s[size - 1] = '\0';
	return (s);
}

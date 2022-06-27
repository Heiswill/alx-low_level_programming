#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings
 * with dynamic memory allocation.
 * @s1: first string argument
 * @s2: second string argument
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, lens1 = 0, lens2 = 0;
	char *s, *str1, *str2;

	str1 = s1;
	str2 = s2;

	if (s1 == NULL)
		s1 = "";
	while (*s1)
	{
		lens1++;
		s1++;
	}
	s1 = str1;
	if (s2 == NULL)
		s2 = "";
	while (*s2)
	{
		lens2++;
		s2++;
	}
	s2 = str2;
	s = malloc(sizeof(char) * (lens1 + lens2 + 1));
	str1 = s;
	if (s == NULL)
		return (NULL);

	for (; i < (lens1 + lens2); i++)
	{
		if (i < lens1)
		{
			s[i] = *s1;
			s1++;
		}
		else
		{
			s[i] = *s2;
			s2++;
		}
	}
	s[i] = '\0';
	return (str1);
}

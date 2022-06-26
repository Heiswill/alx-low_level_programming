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
	int i = 0;
	int s1_len = strlen(s1);
	int s2_len = strlen(s2);
	int tlen = s1_len + s2_len + 1;

	char *s = malloc(sizeof(char) * tlen);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (s == NULL)
		return (NULL);

	for (; i < tlen; i++)
	{
		if (i < s1_len)
		{
			s[i] = *s1;
			s1++;
		}
		else
		{
			s[i] = *s2;
			s2++;
		}
	s[tlen - 1] = '\0';
	return (s);
}
